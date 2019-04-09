import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.JLabel;
import javax.swing.JOptionPane;

import java.awt.Font;
import javax.swing.JTextField;
import javax.swing.JComboBox;
import javax.swing.JButton;
import javax.swing.DefaultComboBoxModel;
import java.awt.event.ActionListener;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.awt.event.ActionEvent;
import javax.swing.ImageIcon;
import java.awt.Color;

public class NewStudent  extends Javaconnect {//extends JFrame {
	static JFrame jf=new JFrame("New Student");
//	 Connection conn;
//	    ResultSet rs;
//	    PreparedStatement pst;
	private JPanel contentPane;
	private JTextField textField;
	private JTextField textField_1;
	private JTextField textField_2;
	private JTextField textField_3;
	private JTextField textField_4;

	/**
	 * Launch the application.
	 */
	//public static void main(String[] args) {
		//EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					NewStudent frame = new NewStudent();
					jf.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
	//	});
	//}

	/**
	 * Create the frame.
	 */
	public void Random()
	{
		java.util.Random rd=new java.util.Random();
		textField.setText(""+rd.nextInt(1000+1));
	}
	public NewStudent() {
		//super ("New Student");
		conn=connecrDb();
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		jf.setBounds(100, 100, 727, 402);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		jf.setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JLabel lblNewLabel = new JLabel("Student ID");
		lblNewLabel.setForeground(new Color(250, 235, 215));
		lblNewLabel.setBounds(312, 19, 87, 25);
		lblNewLabel.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel);
		
		JLabel lblNewLabel_1 = new JLabel("Name");
		lblNewLabel_1.setForeground(new Color(250, 235, 215));
		lblNewLabel_1.setBackground(new Color(250, 235, 215));
		lblNewLabel_1.setBounds(349, 55, 44, 25);
		lblNewLabel_1.setFont(new Font("Dialog", Font.BOLD, 14));
		contentPane.add(lblNewLabel_1);
		
		JLabel lblNewLabel_2 = new JLabel("Email");
		lblNewLabel_2.setForeground(new Color(250, 235, 215));
		lblNewLabel_2.setBounds(349, 91, 44, 25);
		lblNewLabel_2.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel_2);
		
		JLabel lblNewLabel_3 = new JLabel("Phone ");
		lblNewLabel_3.setForeground(new Color(250, 235, 215));
		lblNewLabel_3.setBounds(345, 128, 48, 25);
		lblNewLabel_3.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel_3);
		
		JLabel lblNewLabel_4 = new JLabel("University");
		lblNewLabel_4.setForeground(new Color(250, 235, 215));
		lblNewLabel_4.setBounds(329, 164, 70, 25);
		lblNewLabel_4.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel_4);
		
		JLabel lblNewLabel_5 = new JLabel("Department");
		lblNewLabel_5.setForeground(new Color(250, 235, 215));
		lblNewLabel_5.setBounds(312, 200, 87, 27);
		lblNewLabel_5.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel_5);
		
		JLabel lblNewLabel_6 = new JLabel("Semester");
		lblNewLabel_6.setForeground(new Color(250, 235, 215));
		lblNewLabel_6.setBounds(329, 238, 70, 27);
		lblNewLabel_6.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel_6);
		
		textField = new JTextField();
		textField.setEditable(false);
		textField.setBounds(418, 18, 245, 25);
		contentPane.add(textField);
		textField.setColumns(10);
		Random();
		textField_1 = new JTextField();
		textField_1.setBounds(418, 55, 245, 24);
		contentPane.add(textField_1);
		textField_1.setColumns(10);
		
		textField_2 = new JTextField();
		textField_2.setBounds(418, 91, 245, 24);
		contentPane.add(textField_2);
		textField_2.setColumns(10);
		
		textField_3 = new JTextField();
		textField_3.setBounds(418, 128, 245, 24);
		contentPane.add(textField_3);
		textField_3.setColumns(10);
		
		textField_4 = new JTextField();
		textField_4.setBounds(418, 163, 245, 25);
		contentPane.add(textField_4);
		textField_4.setColumns(10);
		
		JComboBox comboBox = new JComboBox();
		comboBox.setModel(new DefaultComboBoxModel(new String[] {"SWE", "CSE", "BBA", "MCT", "EEE", "ETE", "TEX", "ENG"}));
		comboBox.setBounds(417, 205, 245, 27);
		contentPane.add(comboBox);
		
		JComboBox comboBox_1 = new JComboBox();
		comboBox_1.setModel(new DefaultComboBoxModel(new String[] {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12"}));
		comboBox_1.setBounds(415, 243, 248, 27);
		contentPane.add(comboBox_1);
		
		JButton btnNewButton = new JButton("Register");
		btnNewButton.setBackground(new Color(128, 0, 0));
		btnNewButton.setForeground(new Color(250, 235, 215));
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				try {
					String sql=setsql("Insert into NewStudent ( Student_ID,Name,Email,Phone,University,Department,Semester) Values (?,?,?,?,?,?,?)");
				     pst=conn.prepareStatement(sql);
				     String a,b,c,d,ek,ekn,dc;
				     a=textField.getText();
				     b=textField_1.getText();
				     c=textField_2.getText();
				     d=(String)comboBox.getSelectedItem();
				     dc=(String)comboBox_1.getSelectedItem();
				      ek=textField_3.getText();
				     ekn=textField_4.getText();
					pst.setString(1,a);
					pst.setString(2,b);
					pst.setString(3,c);
			     	pst.setString(4,ek); 
					pst.setString(5,ekn);
					pst.setString(6,d);
					pst.setString(7,dc);
					pst.execute();
					JOptionPane.showMessageDialog(null, "New Student Registed");
					}
					catch(Exception ea)
					{
						JOptionPane.showMessageDialog(null, ea);
					}
				
			}
		});
		btnNewButton.setFont(new Font("Tahoma", Font.BOLD, 14));
		btnNewButton.setBounds(418, 281, 245, 27);
		contentPane.add(btnNewButton);
		
		JButton btnNewButton_1 = new JButton("Back");
		btnNewButton_1.setBackground(new Color(128, 0, 0));
		btnNewButton_1.setForeground(new Color(250, 235, 215));
		btnNewButton_1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				Smainmenu menu=new Smainmenu();
				menu.jf.setVisible(true);
				jf.dispose();
			}
		});
		btnNewButton_1.setFont(new Font("Tahoma", Font.BOLD, 14));
		btnNewButton_1.setBounds(418, 319, 245, 25);
		contentPane.add(btnNewButton_1);
		
		JLabel label_2 = new JLabel("");
		label_2.setBounds(-578, -239, 1300, 956);
		contentPane.add(label_2);
		label_2.setIcon(new ImageIcon("E:\\image\\chinese-school-girls-in-line-beijing-china-BR9CM5 (1).jpg"));
	}
}
