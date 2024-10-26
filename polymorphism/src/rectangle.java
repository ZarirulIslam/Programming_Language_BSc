
public class rectangle extends shape{
    double length,width;
    
    rectangle(double length,double width){
        this.length=length;
        this.width=width;
    }
    
    @Override
    double area(){
        return length*width;
    }
}
