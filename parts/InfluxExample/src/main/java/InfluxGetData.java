
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Date;
import java.util.LinkedList;
import java.util.List;
import java.util.concurrent.TimeUnit;

import org.influxdb.BatchOptions;
import org.influxdb.InfluxDB;
import org.influxdb.InfluxDBFactory;
import org.influxdb.dto.Point;
import org.influxdb.dto.Query;
import org.influxdb.dto.QueryResult;
import org.influxdb.impl.InfluxDBResultMapper;

/**
 * Read data, Calculate, Resend
 *
 * in case of error, change querryDB command, to -nd from -1h
 */
public class InfluxGetData {
    static AccInfluxConnector connector = new AccInfluxConnector();

    public static void main(String[] args) throws InterruptedException {
        InfluxConnector influxConnector = new InfluxConnector();
        influxConnector.databaseConnection.query();

        connector.addData("acc",String.valueOf(System.currentTimeMillis()),0.5,0.5,0.5);

//        InfluxDBResultMapper resultMapper = new InfluxDBResultMapper();
//
//        final double precision = 0.2;
//        double median=0;
//        double medianAbove;
//        double medianBelow;
//
//        while (true) {
//
//            System.out.println("------------------------------------");
//
//            QueryResult result = queryDB(); // contains a result from DB querry
//          List<AccTest> List = resultMapper.toPOJO(queryResult, AccTest.class); // save querry to list
//
//            try {
//                 median= medianCalc(List);
//            }catch(IndexOutOfBoundsException e ){
//                System.out.println("!!!!!!!!!!!!-----Change querryDb back time to a higher value-----!!!!!!!!");
//             }
//
//
//
//            medianAbove = median + precision;
//            medianBelow = median - precision;
//
//            calcAndSend(medianAbove, medianBelow, List);
//
//            System.out.println("------------------------------------");
//
//            Thread.sleep(10000);
   //     }
    }

//    private static void calcAndSend(double medianAbove, double medianBelow, List<AccTest> List) {
//
//        boolean vaccx = false;
//        boolean vaccy = false;
//        boolean vaccz = false;
//        if (Double.valueOf(List.get(0).accX) >= medianBelow && Double.valueOf(List.get(0).accX) <= medianAbove) {
//
//            vaccx = true;
//            System.out.print("In bounds accX " + Double.valueOf(List.get(0).accX));
//        } else {
//            System.out.print("NOT IN bounds accX " + Double.valueOf(List.get(0).accX));
//
//        }
//
//        if (Double.valueOf(List.get(0).accY) >= medianBelow && Double.valueOf(List.get(0).accY) <= medianAbove) {
//            vaccy = true;
//            System.out.print(" In bounds accY " + Double.valueOf(List.get(0).accY));
//        } else {
//            System.out.print(" NOT IN bounds accY " + Double.valueOf(List.get(0).accY));
//
//        }
//
//        if (Double.valueOf(List.get(0).accZ) >= medianBelow && Double.valueOf(List.get(0).accZ) <= medianAbove) {
//            vaccz = true;
//            System.out.println(" In bounds accZ " + Double.valueOf(List.get(0).accZ));
//        } else {
//            System.out.println(" NOT IN bounds accZ " + Double.valueOf(List.get(0).accZ));
//
//        }
//
//        sendValidData(List, vaccx, vaccy, vaccz);
//    }
//
//    private static void sendValidData(List<AccTest> List, boolean vaccx, boolean vaccy, boolean vaccz) {
//
//
//        if (vaccx && vaccy && vaccz)
//            connector.write(
//                    Point.measurement("ValidData")
//                            .time(List.get(0).time.toEpochMilli(), TimeUnit.MILLISECONDS)
//                            .tag("name", List.get(0).name)
//                            .addField("accX", Double.valueOf(List.get(0).accX))
//                            .addField("accY", Double.valueOf(List.get(0).accY))
//                            .addField("accZ", Double.valueOf(List.get(0).accZ))
//                            .build());
//
//        if (vaccx)
//            connector.databaseConnection.write(
//                    Point.measurement("ValidData")
//                            .time(List.get(0).time.toEpochMilli(), TimeUnit.MILLISECONDS)
//                            .tag("name", List.get(0).name)
//                            .addField("accX", Double.valueOf(List.get(0).accX))
//                            .build());
//
//
//        if (vaccy)
//            connector.databaseConnection.write(
//                    Point.measurement("ValidData")
//                            .time(List.get(0).time.toEpochMilli(), TimeUnit.MILLISECONDS)
//                            .tag("name", List.get(0).name)
//                            .addField("accY", Double.valueOf(List.get(0).accY))
//                            .build());
//
//        if (vaccz)
//            connector.databaseConnection.write(
//                    Point.measurement("ValidData")
//                            .time(List.get(0).time.toEpochMilli(), TimeUnit.MILLISECONDS)
//                            .tag("name", List.get(0).name)
//                            .addField("accZ", Double.valueOf(List.get(0).accZ))
//                            .build());
//
//        if (vaccx && vaccy)
//            connector.databaseConnection.write(
//                    Point.measurement("ValidData")
//                            .time(List.get(0).time.toEpochMilli(), TimeUnit.MILLISECONDS)
//                            .tag("name", List.get(0).name)
//                            .addField("accX", Double.valueOf(List.get(0).accX))
//                            .addField("accY", Double.valueOf(List.get(0).accY))
//                            .build());
//
//        if (vaccy && vaccz)
//            connector.databaseConnection.write(
//                    Point.measurement("ValidData")
//                            .time(List.get(0).time.toEpochMilli(), TimeUnit.MILLISECONDS)
//                            .tag("name", List.get(0).name)
//                            .addField("accY", Double.valueOf(List.get(0).accY))
//                            .addField("accZ", Double.valueOf(List.get(0).accZ))
//                            .build());
//
//        if (vaccx && vaccz)
//            connector.databaseConnection.write(
//                    Point.measurement("ValidData")
//                            .time(List.get(0).time.toEpochMilli(), TimeUnit.MILLISECONDS)
//                            .tag("name", List.get(0).name)
//                            .addField("accX", Double.valueOf(List.get(0).accX))
//                            .addField("accZ", Double.valueOf(List.get(0).accZ))
//                            .build());
//    }
//
//    private static double medianCalc(List<AccTest> List) {
//        Double[] numArray = {Double.valueOf(List.get(0).accX), Double.valueOf(List.get(0).accY),
//                Double.valueOf(List.get(0).accZ)};
//
//        Arrays.sort(numArray);
//        double median;
//        if (numArray.length % 2 == 0)
//            median = ((double) numArray[numArray.length / 2] + (double) numArray[numArray.length / 2 - 1]) / 2;
//        else
//            median = (double) numArray[numArray.length / 2];
//
//        System.out.println("Median " + median);
//        return median;
//
//    }
//
    private static QueryResult queryDB() {
        QueryResult queryResult = connector.databaseConnection.query(new Query(
                "SELECT accX,accY,accZ FROM gyro WHERE time > now() - 24h GROUP BY * ORDER BY DESC LIMIT 1;", "CPS"));
        //get the last value
        System.out.println(queryResult.getResults().toString());
        return queryResult;
    }

}
