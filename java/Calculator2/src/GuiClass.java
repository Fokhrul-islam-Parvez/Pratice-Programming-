import java.awt.*;
import javax.swing.*;
public class GuiClass {
	
	static JFrame awindow=new JFrame("First Window");
public static void main(String [] arg){
	awindow.setLayout(null);
//	int a=400;
//	int b=600;
//	awindow.setSize(a,b);
//	awindow.setBounds(a-a/2,b-b/2,500,500);
	awindow.setVisible(true);
	awindow.setEnabled(true);
	awindow.getContentPane().setBackground(Color.blue);
    awindow.setForeground(new Color(224,255,255));
	awindow.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	Toolkit thekit=awindow.getToolkit();
	Dimension wndsize=thekit.getScreenSize();
	awindow.setBounds(wndsize.width/4,wndsize.height/4,wndsize.width/2,wndsize.height/2);
	JButton btn=new JButton("Click");
 	//btn.setBackground(Color(224,255,255));
	btn.setBounds(wndsize.width/4,wndsize.height/4,100,50);
	awindow.add(btn);

	ImageIcon icon =new ImageIcon("edit.jpg");
	awindow.setIconImage(icon.getImage());
}
}
