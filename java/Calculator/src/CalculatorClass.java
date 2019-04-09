import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;

import java.awt.BorderLayout;
import javax.swing.JTextField;
import javax.swing.JButton;
import java.awt.Font;
import java.awt.Color;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class CalculatorClass {

	private JFrame frame;
	private JTextField input1;
	private JTextField input2;
	private JTextField output;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					CalculatorClass window = new CalculatorClass();
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
	public CalculatorClass() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.getContentPane().setForeground(Color.BLUE);
		frame.setBounds(100, 100, 450, 300);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setLayout(null);
		
		JButton add = new JButton("ADD");
		add.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				int num1,num2,ans;
				try {
					num1=Integer.parseInt(input1.getText());
					num2=Integer.parseInt(input2.getText());
					ans=num1+num2;
					output.setText(Integer.toString(ans));
				} catch (Exception e1) {
					JOptionPane.showMessageDialog(null, "Please Enter Valid Number.");
				}
				
			}
		});
		add.setFont(new Font("Tahoma", Font.BOLD, 13));
		add.setBounds(94, 114, 99, 23);
		frame.getContentPane().add(add);
		
		input1 = new JTextField();
		input1.setBounds(268, 29, 86, 20);
		frame.getContentPane().add(input1);
		input1.setColumns(10);
		
		input2 = new JTextField();
		input2.setBounds(268, 63, 86, 20);
		frame.getContentPane().add(input2);
		input2.setColumns(10);
		
		output = new JTextField();
		output.setBounds(268, 163, 86, 20);
		frame.getContentPane().add(output);
		output.setColumns(10);
		
		JLabel lblNewLabel = new JLabel("First Number :");
		lblNewLabel.setFont(new Font("Tahoma", Font.BOLD, 13));
		lblNewLabel.setBounds(77, 27, 116, 22);
		frame.getContentPane().add(lblNewLabel);
		
		JLabel lblNewLabel_1 = new JLabel("Second Number :");
		lblNewLabel_1.setFont(new Font("Tahoma", Font.BOLD, 13));
		lblNewLabel_1.setBounds(60, 65, 121, 14);
		frame.getContentPane().add(lblNewLabel_1);
		
		JLabel lblNewLabel_2 = new JLabel("Result :");
		lblNewLabel_2.setFont(new Font("Tahoma", Font.BOLD, 13));
		lblNewLabel_2.setBounds(127, 163, 99, 20);
		frame.getContentPane().add(lblNewLabel_2);
		
		JButton btnNewButton = new JButton("Subtract");
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				int num1,num2,ans;
				try {
					num1=Integer.parseInt(input1.getText());
					num2=Integer.parseInt(input2.getText());
					ans=num1-num2;
					output.setText(Integer.toString(ans));
				} catch (Exception e1) {
					JOptionPane.showMessageDialog(null, "Please Enter Valid Number.");
				}
				
			}
		});
		btnNewButton.setFont(new Font("Tahoma", Font.BOLD, 13));
		btnNewButton.setBounds(219, 114, 99, 24);
		frame.getContentPane().add(btnNewButton);
	}
}
