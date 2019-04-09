import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class shamol {

	private JFrame frame;
	private JTextField output;
	private JTextField input1;
	private JTextField input2;
	private JTextField input3;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					shamol window = new shamol();
					window.frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the application.
	 */
	public shamol() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.setBounds(100, 100, 450, 300);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setLayout(null);
		
		JLabel lblId = new JLabel("name");
		lblId.setBounds(43, 37, 46, 14);
		frame.getContentPane().add(lblId);
		
		JLabel lblJava = new JLabel("cgpa");
		lblJava.setBounds(43, 73, 46, 14);
		frame.getContentPane().add(lblJava);
		
		JLabel lblAlgo = new JLabel("fee");
		lblAlgo.setBounds(43, 98, 46, 14);
		frame.getContentPane().add(lblAlgo);
		
		output = new JTextField();
		output.setBounds(87, 198, 312, 20);
		frame.getContentPane().add(output);
		output.setColumns(10);
		
		input1 = new JTextField();
		input1.setBounds(65, 34, 86, 20);
		frame.getContentPane().add(input1);
		input1.setColumns(10);
		
		input2 = new JTextField();
		input2.setBounds(75, 62, 86, 20);
		frame.getContentPane().add(input2);
		input2.setColumns(10);
		
		input3 = new JTextField();
		input3.setBounds(87, 95, 86, 20);
		frame.getContentPane().add(input3);
		input3.setColumns(10);
		
		JButton btnCal = new JButton("cal");
		btnCal.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				double num1,num2,num3,cgpa;
				String name;
					num1=Double.parseDouble(input2.getText());
					num2=Double.parseDouble(input3.getText());
					//num3=Double.parseDouble(input4.getText());
					name=input1.getText();
					if(num2>= 3.8)
						output.setText("ID : " +num2+" "+ "Your CGPA is"+" "+cgpa);
			}
		});
		btnCal.setBounds(289, 64, 89, 23);
		frame.getContentPane().add(btnCal);
	}

}
