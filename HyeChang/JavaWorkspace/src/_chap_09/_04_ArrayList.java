package _chap_09;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;

public class _04_ArrayList {
    public static void main(String[] args) {
        // 컬렉션 프레임워크 (List, Set, Map)
        ArrayList<String> list = new ArrayList<>();
        // 데이터 추가
        list.add("유재석");
        list.add("조세호");
        list.add("김종국");
        list.add("박명수");
        list.add("강호동");
        // 데이터 조회
        for(int i = 0; i < list.size(); i++) {
            System.out.println(list.get(i));
        }
        System.out.println("신청 학생 수 (이사 전) : " + list.size());
        System.out.println("----------------------");
        // 데이터 삭제 (박명수 이사)
        list.remove("박명수");
        for(int i = 0; i < list.size(); i++) {
            System.out.println(list.get(i));
        }
        System.out.println("신청 학생 수 (이사 후) : " + list.size());
        System.out.println("----------------------");
        System.out.println("남은 학생 수 (제외 전) : " + list.size());
        System.out.println("리스트의 마지막 학생 제외");
        list.remove(list.size() - 1);
        System.out.println("남은 학생 수 (제외 후) : " + list.size());
        System.out.println("----------------------");
        for (String s : list){
            System.out.println(s);
        }
        System.out.println("----------------------");
        // 데이터 변경 (수강권 양도)
        System.out.println("수강권 양도 전 : " + list.get(0));
        list.set(0, "노홍철");
        System.out.println("수강권 양도 후 : " + list.get(0));
        for (String s : list){
            System.out.println(s);
        }
        System.out.println("----------------------");
        // 데이터 확인
        System.out.println("김종국님의 리스트 인덱스 : " + list.indexOf("김종국"));
        // 선착순 5명 내에 포함되었는가?
        if (list.contains("김종국")){
            System.out.println("김종국님 수강 신청 성공 !");
        }
        else {
            System.out.println("김종국님 수강 신청 실패 ");
        }
        System.out.println("----------------------");

        // 데이터 전체 삭제
        System.out.println("리스트 정보를 초기화 합니다");
        list.clear();
        if(list.isEmpty()){
            System.out.println("학생 수 : " + list.size());
            System.out.println("리스트가 비었습니다");
        }
        else {
            System.out.println("학생 수 : " + list.size());
            System.out.println("리스트가 남아있습니다");
        }
        System.out.println("----------------------");

        System.out.println("새 학기가 시작되었습니다");
        System.out.println("리스트 add 시작");
        // 다음 학기에 새로 공부 시작
        list.add("유재석");
        list.add("조세호");
        list.add("김종국");
        list.add("박명수");
        list.add("강호동");
        System.out.println("이름 정렬 전");
        for (String s : list){
            System.out.println(s);
        }
        System.out.println("----------------------");
        System.out.println("이름 정렬 후");
        // 정렬
        Collections.sort(list);
        for (String s : list){
            System.out.println(s);
        }

    }
}
