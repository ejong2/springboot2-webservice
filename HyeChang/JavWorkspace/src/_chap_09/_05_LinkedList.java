package _chap_09;

import java.util.Collection;
import java.util.Collections;
import java.util.LinkedList;

public class _05_LinkedList {
    public static void main(String[] args) {
        // 연결 리스트 (LinkedList)
        LinkedList<String> list = new LinkedList<>();
        list.add("유재석");
        list.add("조세호");
        list.add("김종국");
        list.add("박명수");
        list.add("강호동");

        // 데이터 조회 (인덱스 기준)
//        System.out.println(list.getFirst());
//        System.out.println(list.getLast());
        list.addFirst("서장훈");
        for (String s : list){
            System.out.println(s);
        }
        System.out.println("--------------");
        list.addLast("김희철");
        for (String s : list){
            System.out.println(s);
        }

        System.out.println("--------------");
        System.out.println("김영철 학생 추가 전");
        System.out.println(list.get(1));
        list.add(1, "김영철");
        for (String s : list){
            System.out.println(s);
        }
        System.out.println("--------------");

        System.out.println("김영철 학생 추가 후");
        System.out.println(list.get(1));
        for (String s : list){
            System.out.println(s);
        }
        // 삭제
        System.out.println("남은 학생 수 (제외 전) : " + list.size());
        list.removeFirst();
        list.removeLast();
        System.out.println("남은 학생 수 (제외 후) : " + list.size());
    
        // 변경
        list.set(0, "이수근");
        System.out.println(list.get(0));

        // 확인
        System.out.println(list.indexOf("김종국"));
        if(list.contains("김종국")){
            System.out.println("수강 신청 성공");
        }
        else {
            System.out.println("수강 신청 실패");
        }

        // 전체 삭제
        list.clear();
        if(list.isEmpty()){
            System.out.println("학생 수 : " + list.size());
            System.out.println("리스트가 비었습니다");
        }

        System.out.println("------------------------------");

        System.out.println("새로운 학기 시작");
        System.out.println("이름 가나다 정렬 전");
        // 새로운 학기 시작

        list.add("유재석");
        list.add("조세호");
        list.add("김종국");
        list.add("박명수");
        list.add("강호동");

        for(String s : list){
            System.out.println(s);
        }
        System.out.println("------------------------------");

        System.out.println("이름 가나다 정렬 후");


        Collections.sort(list);

        for(String s : list){
            System.out.println(s);
        }

    }
}
