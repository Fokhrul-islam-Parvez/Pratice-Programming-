import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;

import com.sun.corba.se.pept.transport.Connection;

import javax.swing.JProgressBar;
import javax.swing.JLabel;
import java.awt.Font;
import javax.swing.ImageIcon;

public class PleaseWait extends JFrame {
//	Connection conn;
//	int s=0;
//	Thread th;
//
	private JPanel contentPane;
//	
//	public void SetUpLoading() {
//		setVisible(false);
//		th.start();
	//}

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
			PleaseWait frame = new PleaseWait();
  			frame.setVisible(true);
//				for(int i=0;i<=200;i++)
//						s=s+1;
//					int m=progressBar.getMaximum();
//					int v=progressBar.getValue();
//					if
			} catch (Exception e) {
				e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the frame.
	 */
	public PleaseWait() {
		super("Loading");
	//	initComponents();
	//	th=new Thread ((Runnable) this);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 714, 440);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JProgressBar progressBar = new JProgressBar();
		progressBar.setBounds(253, 145, 187, 19);
		progressBar.setStringPainted(true);
		contentPane.add(progressBar);
		
		JLabel lblNewLabel = new JLabel("Please Wait");
		lblNewLabel.setBounds(302, 164, 86, 25);
		lblNewLabel.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel);
		
		JLabel lblNewLabel_1 = new JLabel("Library Management System");
		lblNewLabel_1.setBounds(187, 29, 371, 47);
		lblNewLabel_1.setFont(new Font("Tahoma", Font.BOLD, 24));
		contentPane.add(lblNewLabel_1);
		
		JLabel lblNewLabel_2 = new JLabel("Version - 1.01");
		lblNewLabel_2.setBounds(419, 72, 119, 25);
		lblNewLabel_2.setFont(new Font("Tahoma", Font.BOLD, 15));
		contentPane.add(lblNewLabel_2);
		
		JPanel panel = new JPanel();
		panel.setBounds(149, 200, 399, 168);
		contentPane.add(panel);
		
		JLabel label_1 = new JLabel("");
		label_1.setIcon(new ImageIcon("E:\\image\\arg-book-flipping-pages-url.gif"));
		panel.add(label_1);
		
		JLabel label = new JLabel("");
		panel.add(label);
	}
}
