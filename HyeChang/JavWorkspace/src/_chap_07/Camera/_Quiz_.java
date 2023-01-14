package _chap_07.Camera;

public class _Quiz_ {
    public static void main(String[] args) {
        Hambuger[] hambugers = new Hambuger[3];
        hambugers[0] = new Hambuger();
        hambugers[1] = new CheeseBuger();
        hambugers[2] = new ShrimpBuger();

        System.out.println("주문하신 메뉴를 만듭니다.");
        System.out.println("----------------");
        for(Hambuger hambuger : hambugers){
            hambuger.cook();
            System.out.println("----------------");
        }
        System.out.println("메뉴 준비가 완료되었습니다.");
    }
}

class Hambuger {
    public String name;
    public Hambuger(){
        this("햄버거");
    }
    public Hambuger(String name){
        this.name = name;
    }
    public void cook(){
        System.out.println(this.name + "를 만듭니다.");
        System.out.println("빵 사이에 들어가는 재료는?");
        System.out.println(">  양상추");
        System.out.println("+ 패티");
        System.out.println("+ 피클");
    }
}
class CheeseBuger extends Hambuger{
    public CheeseBuger(){
        super("치즈버거");
    }

    public String name;
    public void cook(){
        super.cook();
        System.out.println("+ 치즈");
    }
}
class ShrimpBuger extends Hambuger{
    public ShrimpBuger(){
        super("새우버거");
    }
    public String name;
    public void cook(){
        super.cook();
        System.out.println("+ 새우");
    }
}

