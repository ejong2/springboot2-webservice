package _chap_09;

import java.util.HashMap;
import java.util.LinkedHashMap;

public class _07_HashMap {
    public static void main(String[] args) {
        // 맵 (Key, Value)
        // LinkedHashMap 사용시 순서 보장
        HashMap<String, Integer> map = new HashMap<>();

        // 데이터 추가
        map.put("유재석", 10);
        map.put("박명수", 5);
        map.put("김종국", 3);
        map.put("서장훈", 15);

        System.out.println("총 고객 수 : " + map.size());
        System.out.println("-----------------------");
        // 데이터 조회 (Key 입력, Value 반환)
        System.out.println("유재석님의 포인트 : " + map.get("유재석"));
        System.out.println("박명수님의 포인트 : " + map.get("박명수"));
        System.out.println("-----------------------");
        // 데이터 확인
        if(map.containsKey("서장훈")){
            int pojnt = map.get("서장훈");
            map.put("서장훈", ++pojnt);
            System.out.println("서장훈님의 누적 포인트 : " + map.get("서장훈"));
        } else{
          map.put("서장훈", 1);
            System.out.println("서장훈님 신규 등록 (포인트 1)");
        }
        System.out.println("-----------------------");
        // 데이터 삭제
        map.remove("유재석");
        System.out.println(map.get("유재석"));
        System.out.println("-----------------------");

        // 데이터 전체 삭제
        map.clear();
        if(map.isEmpty()){
            System.out.println("남은 고객 수 : " + map.size());
            System.out.println("가게 접자");
        }
        System.out.println("-----------------------");
        // 다시 데이터 추가
        map.put("유재석", 10);
        map.put("박명수", 5);
        map.put("김종국", 3);
        map.put("서장훈", 15);

        // Key 확인
        for(String key : map.keySet()){
            System.out.println(key);
        }
        System.out.println("-----------------------");
        // Value 확인
        for (Integer value : map.values()){
            System.out.println(value);
        }
        System.out.println("-----------------------");
        for(String key : map.keySet()){
            System.out.println("고객 이름 : " + key + "\t포인트 : " + map.get(key));
        }
        System.out.println("-----------------------");
        // 맵 : 중복 X, 순서 X
        map.put("김종국", 10);
        map.put("김종국", 30);
        map.put("김종국", 50);
        map.put("김종국", 10);

        for(String key : map.keySet()){
            System.out.println("고객 이름 : " + key + "\t포인트 : " + map.get(key));
        }

    }
}
