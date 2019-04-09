import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.JLabel;
import javax.swing.JOptionPane;

import java.awt.Font;
import javax.swing.JTextField;
import javax.swing.JButton;
import javax.swing.JComboBox;
import javax.swing.border.TitledBorder;

import javafx.scene.control.ComboBox;

import javax.swing.border.LineBorder;
import java.awt.Color;
import javax.swing.DefaultComboBoxModel;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import java.sql.*;
import org.eclipse.wb.swing.FocusTraversalOnArray;
import java.awt.Component;
import javax.swing.border.BevelBorder;
import javax.swing.border.CompoundBorder;
import javax.swing.UIManager;
import javax.swing.ImageIcon;
public class SignUp  extends Javaconnect {
	static JFrame jf=new JFrame("Sign Up");
//    Connection conn;
//    ResultSet rs;
//    PreparedStatement pst;
	private JPanel contentPane;
	private JTextField textField;
	private JTextField textField_1;
	private JTextField textField_2;
	private JTextField textField_4;

	/**
	 * Launch the application.
	 */
	//public static void main(String[] args) {
		//EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					SignUp frame = new SignUp();
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
	public SignUp() {
	//	super ("SignUp");
		jf.setFont(new Font("Dialog", Font.BOLD, 14));
		conn=connecrDb();
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		jf.setBounds(100, 100, 729, 435);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		jf.setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JLabel lblNewLabel = new JLabel("User Name ");
		lblNewLabel.setForeground(new Color(250, 235, 215));
		lblNewLabel.setFont(new Font("Tahoma", Font.BOLD, 14));
		lblNewLabel.setBounds(416, 11, 84, 24);
		contentPane.add(lblNewLabel);
		
		JLabel lblNewLabel_1 = new JLabel("Name ");
		lblNewLabel_1.setForeground(new Color(250, 235, 215));
		lblNewLabel_1.setFont(new Font("Tahoma", Font.BOLD, 14));
		lblNewLabel_1.setBounds(416, 70, 84, 19);
		contentPane.add(lblNewLabel_1);
		
		JLabel lblNewLabel_2 = new JLabel("Password ");
		lblNewLabel_2.setForeground(new Color(250, 235, 215));
		lblNewLabel_2.setFont(new Font("Tahoma", Font.BOLD, 14));
		lblNewLabel_2.setBounds(416, 126, 87, 19);
		contentPane.add(lblNewLabel_2);
		
		JLabel lblNewLabel_3 = new JLabel("Security Question ");
		lblNewLabel_3.setForeground(new Color(250, 235, 215));
		lblNewLabel_3.setFont(new Font("Tahoma", Font.BOLD, 14));
		lblNewLabel_3.setBounds(416, 190, 131, 19);
		contentPane.add(lblNewLabel_3);
		
		JLabel lblNewLabel_4 = new JLabel("Answer ");
		lblNewLabel_4.setForeground(new Color(250, 235, 215));
		lblNewLabel_4.setFont(new Font("Tahoma", Font.BOLD, 14));
		lblNewLabel_4.setBounds(420, 256, 98, 19);
		contentPane.add(lblNewLabel_4);
		
		textField = new JTextField();
		textField.setBackground(new Color(220, 220, 220));
		textField.setFont(new Font("Tahoma", Font.BOLD, 13));
		textField.setForeground(new Color(0, 0, 0));
		textField.setBounds(416, 35, 258, 24);
		contentPane.add(textField);
		textField.setColumns(10);
		
		textField_1 = new JTextField();
		textField_1.setBackground(new Color(220, 220, 220));
		textField_1.setForeground(new Color(0, 0, 0));
		textField_1.setFont(new Font("Tahoma", Font.BOLD, 13));
		textField_1.setBounds(416, 90, 258, 25);
		contentPane.add(textField_1);
		textField_1.setColumns(10);
		
		textField_2 = new JTextField();
		textField_2.setBackground(new Color(220, 220, 220));
		textField_2.setFont(new Font("Tahoma", Font.BOLD, 13));
		textField_2.setBounds(416, 145, 258, 24);
		contentPane.add(textField_2);
		textField_2.setColumns(10);
		
		textField_4 = new JTextField();
		textField_4.setBackground(new Color(220, 220, 220));
		textField_4.setFont(new Font("Tahoma", Font.BOLD, 13));
		textField_4.setBounds(416, 275, 258, 24);
		contentPane.add(textField_4);
		textField_4.setColumns(10);
		
		JComboBox comboBox = new JComboBox();
		comboBox.setFont(new Font("Tahoma", Font.BOLD, 13));
		comboBox.setBounds(416, 210, 258, 24);
		comboBox.setModel(new DefaultComboBoxModel(new String[] {"What is your mother toungue?", "What is your nick name?", "What is your first childhood friend?", "What is your school name?"}));
		comboBox.setSelectedIndex(1);
		contentPane.add(comboBox);
		JButton btnNewButton = new JButton("Create");
		btnNewButton.setForeground(new Color(250, 235, 215));
		btnNewButton.setBackground(new Color(128, 0, 0));
		btnNewButton.setFont(new Font("Tahoma", Font.BOLD, 16));
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				try {
				String sql=setsql("Insert into Library ( Userame, Name , Password ,Sec_Q , Answer) Values (?,?,?,?,?)");
			     pst=conn.prepareStatement(sql);
			     String a=null,b=null,c,d,ek;
			     a=textField.getText();
			     b=textField_1.getText();
			     c=textField_2.getText();
			     d=(String) comboBox.getSelectedItem();
			     ek=textField_4.getText();
				pst.setString(1,a);
				pst.setString(2,b);
				pst.setString(3,c);
		     	pst.setString(4,d); 
				pst.setString(5,ek);
				pst.execute();
				JOptionPane.showMessageDialog(null, "New Account Created");
				}
				catch(Exception ea)
				{
					JOptionPane.showMessageDialog(null, ea);
				}
//				finally
//				{
//					try {
//					rs.close();
//					pst.close();
//				}catch(Exception em)
//			{
//				JOptionPane.showMessageDialog(null, em);
//			}
//				}
			}
			
		});
		btnNewButton.setBounds(416, 316, 258, 29);
		contentPane.add(btnNewButton);
		
		JButton btnNewButton_1 = new JButton("Back");
		btnNewButton_1.setForeground(new Color(250, 235, 215));
		btnNewButton_1.setBackground(new Color(128, 0, 0));
		btnNewButton_1.setFont(new Font("Tahoma", Font.BOLD, 16));
		btnNewButton_1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				jf.setVisible(false);
				LoginForm obj=new LoginForm();
				obj.jf.setVisible(true);
			}
		});
		btnNewButton_1.setBounds(416, 356, 258, 29);
		contentPane.add(btnNewButton_1);
		
		JLabel label = new JLabel("");
		label.setBounds(-51, 0, 846, 433);
		contentPane.add(label);
		label.setIcon(new ImageIcon("E:\\image\\1 (1).jpg"));
		//panel.add(textField );
	//	panel.add(textField_1 );
	//	panel.add(textField_2 );
	//	panel.add(textField_4);
		
	}
}
