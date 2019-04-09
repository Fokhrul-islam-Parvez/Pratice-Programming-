package packageLab3;

import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JTextField;
import javax.swing.JButton;
import java.awt.Font;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import java.awt.Color;

public class Discount {

	private JFrame frame;
	private JTextField name;
	private JTextField price;
	private JTextField output;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Discount window = new Discount();
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
	public Discount() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.getContentPane().setBackground(new Color(75, 0, 130));
		frame.setBounds(100, 100, 450, 300);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setLayout(null);
		
		JLabel lblNewLabel = new JLabel("Name :");
		lblNewLabel.setForeground(new Color(255, 255, 255));
		lblNewLabel.setFont(new Font("Tahoma", Font.BOLD, 14));
		lblNewLabel.setBounds(42, 49, 57, 17);
		frame.getContentPane().add(lblNewLabel);
		
		JLabel lblNewLabel_1 = new JLabel("Price :");
		lblNewLabel_1.setForeground(new Color(255, 255, 255));
		lblNewLabel_1.setFont(new Font("Tahoma", Font.BOLD, 14));
		lblNewLabel_1.setBounds(42, 93, 57, 17);
		frame.getContentPane().add(lblNewLabel_1);
		
		name = new JTextField();
		name.setFont(new Font("Tahoma", Font.BOLD, 11));
		name.setBounds(170, 46, 200, 20);
		frame.getContentPane().add(name);
		name.setColumns(10);
		
		price = new JTextField();
		price.setFont(new Font("Tahoma", Font.BOLD, 11));
		price.setBounds(170, 90, 200, 20);
		frame.getContentPane().add(price);
		price.setColumns(10);
		
		JButton btnNewButton = new JButton("Calculation");
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				try{
				String nam=name.getText();
				int pric=Integer.parseInt(price.getText());
				GetDiscount obj=new GetDiscount();
				String s=obj.setdiscount(pric);
				output.setText("Mr. "+nam+" You have "+s);
				}catch(Exception eg){
					JOptionPane.showMessageDialog(null, "Please Enter Valid Number.");
				}
			}
		});
		btnNewButton.setFont(new Font("Tahoma", Font.BOLD, 15));
		btnNewButton.setBounds(162, 150, 138, 23);
		frame.getContentPane().add(btnNewButton);
		
		output = new JTextField();
		output.setFont(new Font("Tahoma", Font.BOLD, 11));
		output.setBounds(56, 214, 344, 20);
		frame.getContentPane().add(output);
		output.setColumns(10);
	}
}
