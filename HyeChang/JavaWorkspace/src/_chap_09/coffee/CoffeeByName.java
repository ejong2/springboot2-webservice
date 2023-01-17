package _chap_09.coffee;

public class CoffeeByName {
    public Object name; // 정수, 실수, 클래스 ----

    public CoffeeByName(Object name) {
        this.name = name;
    }
    public void ready(){
        System.out.println("커피 준비 완료 : " + name);
    }
}
