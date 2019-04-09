import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextArea;
import javax.swing.JComboBox;
import javax.swing.JTextField;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import javax.swing.*;
public class ClassPer {

	private JFrame frame;
	private JTextField input1;
	private JTextField input2;
	private JTextField input3;
	private JTextField input4;
	private JTextField output;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					ClassPer window = new ClassPer();
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
	public ClassPer() {
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
		
		ImageIcon icon =new ImageIcon("src.edit.PNG");
		frame.setIconImage(icon.getImage());
		
		JLabel lblNewLabel = new JLabel("ID :");
		lblNewLabel.setBounds(79, 44, 46, 14);
		frame.getContentPane().add(lblNewLabel);
		
		input1 = new JTextField();
		input1.setBounds(115, 41, 86, 20);
		frame.getContentPane().add(input1);
		input1.setColumns(10);
		
		JLabel lblNewLabel_1 = new JLabel("Gpa in Java");
		lblNewLabel_1.setBounds(45, 86, 67, 20);
		frame.getContentPane().add(lblNewLabel_1);
		
		input2 = new JTextField();
		input2.setBounds(115, 86, 86, 20);
		frame.getContentPane().add(input2);
		input2.setColumns(10);
		
		JLabel lblNewLabel_2 = new JLabel("Gpa algo");
		lblNewLabel_2.setBounds(45, 146, 56, 14);
		frame.getContentPane().add(lblNewLabel_2);
		
		JLabel input = new JLabel("Gpa  Data");
		input.setBounds(45, 117, 56, 14);
		frame.getContentPane().add(input);
		
		input3 = new JTextField();
		input3.setBounds(115, 117, 86, 20);
		frame.getContentPane().add(input3);
		input3.setColumns(10);
		
		input4 = new JTextField();
		input4.setBounds(115, 143, 86, 20);
		frame.getContentPane().add(input4);
		input4.setColumns(10);
		
		JButton btnNewButton = new JButton("Calculation");
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				try{
					double num1,num2,num3,cgpa;
				String id;
					num1=Double.parseDouble(input2.getText());
					num2=Double.parseDouble(input3.getText());
					num3=Double.parseDouble(input4.getText());
					id=input1.getText();
					Cgpa paru = new Cgpa(num1,num2,num3);
					paru.cal();
					
					cgpa=(num1*4+num2*4+num3*4)/12;
					output.setText("ID : " +id+" "+ "Your CGPA is"+" "+cgpa);
			}
			catch (Exception e1){
				JOptionPane.showMessageDialog(null,"Please Enter Valid Number.");	
			}
			}
		});
		btnNewButton.setBounds(267, 85, 89, 23);
		frame.getContentPane().add(btnNewButton);
		
		output = new JTextField();
		output.setBounds(62, 209, 294, 20);
		frame.getContentPane().add(output);
		output.setColumns(10);
	}
}
