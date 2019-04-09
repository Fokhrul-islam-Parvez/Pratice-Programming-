import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JComboBox;
import javax.swing.JTextField;
import javax.swing.DefaultComboBoxModel;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class Tourist_ extends JFrame {

	private JPanel contentPane;
	private JTextField textField;
	private JTextField textField_1;
	private JTextField textField_2;
	private JTextField textField_3;
	private JTextField textField_4;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Tourist_ frame = new Tourist_();
					frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the frame.
	 */
	public Tourist_() {
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 526, 400);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JLabel lblNewLabel = new JLabel("Name");
		lblNewLabel.setBounds(61, 72, 36, 14);
		contentPane.add(lblNewLabel);
		
		JLabel lblNewLabel_1 = new JLabel("Email");
		lblNewLabel_1.setBounds(61, 103, 36, 14);
		contentPane.add(lblNewLabel_1);
		
		JLabel lblNewLabel_2 = new JLabel("Phone");
		lblNewLabel_2.setBounds(61, 134, 36, 14);
		contentPane.add(lblNewLabel_2);
		
		JLabel lblNewLabel_3 = new JLabel("Tour");
		lblNewLabel_3.setBounds(68, 165, 29, 14);
		contentPane.add(lblNewLabel_3);
		
		JComboBox comboBox = new JComboBox();
		comboBox.setModel(new DefaultComboBoxModel(new String[] {"Dhaka to Cox_bazar", "Dhaka to Comilla", "Dhaka to Laksam"}));
		comboBox.setBounds(123, 162, 155, 20);
		contentPane.add(comboBox);
		
		textField = new JTextField();
		textField.setBounds(124, 131, 154, 20);
		contentPane.add(textField);
		textField.setColumns(10);
		
		textField_1 = new JTextField();
		textField_1.setBounds(123, 100, 155, 20);
		contentPane.add(textField_1);
		textField_1.setColumns(10);
		
		textField_2 = new JTextField();
		textField_2.setBounds(123, 69, 155, 20);
		contentPane.add(textField_2);
		textField_2.setColumns(10);
		
		JButton btnNewButton = new JButton("Selaect");
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				 String a,b,c,d,ek,ekn;
			     a=textField.getText();
			     b=textField_1.getText();
			     c=textField_2.getText();
			     d=(String)comboBox.getSelectedItem();
			     Tourist_c tc=new Tourist_c(d);
			     String t=String.valueOf(tc.tk());
			     textField_3.setText(t);
			}
		});
		btnNewButton.setBounds(149, 193, 99, 23);
		contentPane.add(btnNewButton);
		
		JButton btnNewButton_1 = new JButton("Back");
		btnNewButton_1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				Tourist menu=new Tourist();
				menu.setVisible(true);
			      dispose();
			}
		});
		btnNewButton_1.setBounds(149, 292, 99, 23);
		contentPane.add(btnNewButton_1);
		
		JLabel lblNewLabel_4 = new JLabel("Cost");
		lblNewLabel_4.setBounds(67, 230, 46, 14);
		contentPane.add(lblNewLabel_4);
		
		textField_3 = new JTextField();
		textField_3.setBounds(123, 227, 155, 20);
		contentPane.add(textField_3);
		textField_3.setColumns(10);
		
		JButton btnNewButton_2 = new JButton("Ok");
		btnNewButton_2.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				String a,b,c,d,ekn;
				int ek=Integer.parseInt(textField.getText());
			     a=textField.getText();
			     b=textField_1.getText();
			     c=textField_2.getText();
			     d=(String)comboBox.getSelectedItem();
			     Tourist_c tc=new Tourist_c(c,b,a,d,ek);
			     tc.set_cost(Integer.parseInt(textField_3.getText()));
			     JOptionPane.showMessageDialog(null, "Select your Request");
			}
		});
		btnNewButton_2.setBounds(149, 258, 89, 23);
		contentPane.add(btnNewButton_2);
		
		JLabel lblNewLabel_5 = new JLabel("ID");
		lblNewLabel_5.setBounds(61, 34, 21, 14);
		contentPane.add(lblNewLabel_5);
		
		textField_4 = new JTextField();
		textField_4.setBounds(123, 31, 155, 20);
		contentPane.add(textField_4);
		textField_4.setColumns(10);
	}
	
}
