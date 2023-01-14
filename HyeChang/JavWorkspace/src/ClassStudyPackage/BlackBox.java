package ClassStudyPackage;
public class BlackBox {
    String modelName;
    String resolution;
    int price;
    String color;
    int serialNumber; // 시리얼 번호

    static int counter = 0; // 시리얼 번호를 생성해주는 역할 (++연산 : 0, 1, 2, 3, ~)
    static boolean canAutoReport = false;   // 자동 신고 기능

    // 생성자
    BlackBox(){
//
//        System.out.println("기본 생성자 호출");
//        this.serialNumber = ++counter;
//        System.out.println("새로운 시리얼 넘버를 발급 받았습니다 : " + this.serialNumber);
    };
    BlackBox(String modelName, String resolution, int price, String color){
//        this(); // 기본 생성자 호출
//
//        System.out.println("사용자 정의 생성자 호출");
//        this.modelName = modelName;
//        this.color = color;
//        this.price = price;
//        this.resolution = resolution;
    };
    
    void autoReport(){
        if(canAutoReport){
            System.out.println("충돌이 감지되어 자동으로 신고합니다.");
        }
        else{
            System.out.println("자동 신고 기능이 지원되지 않습니다.");
        }
    }
    void insertMemoryCard(int capacity){
        System.out.println("메모리 카드가 삽입되었습니다.");
        System.out.println("용량은 " + capacity + "GB 입니다.");
    }
    int getVideoFileCount(int type){
        if (type == 1) {
            return 9;
        }
        else if(type == 2){
            return 1;
        }
        return 404;
    }

    // showDateTime : 날짜정보 표시여부
    // showSpeed    : 속도정보 표시여부
    // min          : 영상 기록 단위(분)
    void record(boolean showDataTime, boolean showSpeed, int min){
        System.out.println("녹화를 시작합니다.");
        if(showDataTime){
            System.out.println("영상에 날짜정보가 표시됩니다.");
        }
        if (showSpeed) {
            System.out.println("영상에 속도 정보가 표시됩니다.");
        }
        System.out.println("영상은 " + min + "분 단위로 기록됩니다.");
    }
    void record(){
        System.out.println("정보를 입력하지않아, 기본값으로 설정됩니다 !");
        record(true, true, 5);
    }
    static void callServiceCenter(){
        System.out.println("서비스 센터(1588-0000) 로 연결합니다.");
        canAutoReport = false;
    }

    void appendModelName(String ModelName) {
        this.modelName += ModelName;
    }

    // Getter & Setter
    String getModelName(){
        return modelName;
    }
    void setModelName(String modelName){
        this.modelName = modelName;
    }
    String getResolution(){
        if(resolution == null || resolution.isEmpty()){
            return  "판매자에게 문의하세요.";
        }
        return resolution;
    }
    void setResolution(String resolution){
        this.resolution = resolution;
    }
    int getPrice(){
        return price;
    }
    void setPrice(int price){
        if(price < 100000){
            this.price = 100000;
        }
        else {
            this.price = price;
        }
    }
    String getColor(){
        return color;
    }
    void setColor(String color){
        this.color = color;
    }
}
