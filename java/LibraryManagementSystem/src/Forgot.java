import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.JLabel;
import javax.swing.JOptionPane;

import java.awt.Font;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

import javax.swing.JTextField;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import javax.swing.border.TitledBorder;
import javax.swing.border.LineBorder;
import java.awt.Color;
import javax.swing.ImageIcon;

public class Forgot  extends Javaconnect{
	static JFrame jf=new JFrame("Forgot Password");
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
	//	EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Forgot frame = new Forgot();
					jf.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
	//	});
//	}

	/**
	 * Create the frame.
	 */
	public Forgot() {
		//super ("Forgot Password");
		conn=connecrDb();
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		jf.setBounds(100, 100, 699, 397);
		contentPane = new JPanel();
		contentPane.setBackground(new Color(250, 235, 215));
		contentPane.setForeground(new Color(250, 235, 215));
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		jf.setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JLabel lblNewLabel = new JLabel("User Name ");
		lblNewLabel.setForeground(new Color(250, 235, 215));
		lblNewLabel.setBounds(310, 12, 97, 23);
		lblNewLabel.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel);
		
		JLabel lblNewLabel_1 = new JLabel("Name ");
		lblNewLabel_1.setForeground(new Color(250, 235, 215));
		lblNewLabel_1.setBounds(339, 104, 60, 22);
		lblNewLabel_1.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel_1);
		
		JLabel lblNewLabel_2 = new JLabel("Your Security Question ");
		lblNewLabel_2.setForeground(new Color(250, 235, 215));
		lblNewLabel_2.setBounds(220, 144, 187, 23);
		lblNewLabel_2.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel_2);
		
		JLabel lblNewLabel_3 = new JLabel("Answer ");
		lblNewLabel_3.setForeground(new Color(250, 235, 215));
		lblNewLabel_3.setBounds(326, 184, 81, 23);
		lblNewLabel_3.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel_3);
		
		JLabel lblNewLabel_4 = new JLabel("Password ");
		lblNewLabel_4.setForeground(new Color(250, 235, 215));
		lblNewLabel_4.setBounds(315, 264, 81, 23);
		lblNewLabel_4.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel_4);
		
		textField = new JTextField();
		textField.setFont(new Font("Tahoma", Font.BOLD, 13));
		textField.setBackground(new Color(220, 220, 220));
		textField.setForeground(new Color(0, 0, 0));
		textField.setBounds(417, 11, 231, 29);
		contentPane.add(textField);
		textField.setColumns(10);
		
		textField_1 = new JTextField();
		textField_1.setBackground(new Color(192, 192, 192));
		textField_1.setForeground(new Color(0, 0, 0));
		textField_1.setFont(new Font("Tahoma", Font.BOLD, 13));
		textField_1.setEditable(false);
		textField_1.setBounds(417, 103, 231, 29);
		contentPane.add(textField_1);
		textField_1.setColumns(10);
		
		textField_2 = new JTextField();
		textField_2.setFont(new Font("Tahoma", Font.BOLD, 13));
		textField_2.setBackground(new Color(192, 192, 192));
		textField_2.setForeground(new Color(0, 0, 0));
		textField_2.setEditable(false);
		textField_2.setBounds(417, 143, 231, 29);
		contentPane.add(textField_2);
		textField_2.setColumns(10);
		
		textField_3 = new JTextField();
		textField_3.setFont(new Font("Tahoma", Font.BOLD, 13));
		textField_3.setBackground(new Color(220, 220, 220));
		textField_3.setForeground(new Color(0, 0, 0));
		textField_3.setBounds(417, 183, 231, 29);
		contentPane.add(textField_3);
		textField_3.setColumns(10);
		
		textField_4 = new JTextField();
		textField_4.setFont(new Font("Tahoma", Font.BOLD, 13));
		textField_4.setBackground(new Color(192, 192, 192));
		textField_4.setForeground(new Color(0, 0, 0));
		textField_4.setEditable(false);
		textField_4.setBounds(417, 263, 231, 29);
		contentPane.add(textField_4);
		textField_4.setColumns(10);
		JButton btnNewButton = new JButton("Search");
		btnNewButton.setBackground(new Color(128, 0, 0));
		btnNewButton.setForeground(new Color(250, 235, 215));
		btnNewButton.setFont(new Font("Tahoma", Font.BOLD, 16));
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
					String a1=textField.getText();
					String sql=setsql("select *from Library where Userame='"+a1+"'");
					try {
						pst=conn.prepareStatement(sql);
						rs=pst.executeQuery();
						if(rs.next()) {
							textField_1.setText(rs.getString(2));
							textField_2.setText(rs.getString(4));
							rs.close();
							pst.close();
						}
						else
						{
							JOptionPane.showMessageDialog(null, "Incorrect Username");
						}
					} catch(Exception em)
					{
						JOptionPane.showMessageDialog(null, em);
					}
					
					
				}
		});
		btnNewButton.setBounds(417, 59, 231, 29);
		contentPane.add(btnNewButton);
		
		JButton btnNewButton_1 = new JButton("Retrieve");
		btnNewButton_1.setForeground(new Color(250, 235, 215));
		btnNewButton_1.setBackground(new Color(128, 0, 0));
		btnNewButton_1.setFont(new Font("Tahoma", Font.BOLD, 16));
		btnNewButton_1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				
				
				String a1=textField.getText();
				String a2=textField_3.getText();
				String sql=setsql("select *from Library where Answer='"+a2+"'");
				try {
					pst=conn.prepareStatement(sql);
					rs=pst.executeQuery();
					if(rs.next()) {
						textField_4.setText(rs.getString(3));
						rs.close();
						pst.close();
					}
					else
					{
						JOptionPane.showMessageDialog(null, "Incorrect Answer");
					}
				} catch(Exception em)
				{
					JOptionPane.showMessageDialog(null, em);
				}
				
				
			}
				
		});
		btnNewButton_1.setBounds(417, 223, 231, 29);
		contentPane.add(btnNewButton_1);
		
		JButton btnNewButton_2 = new JButton("Back");
		btnNewButton_2.setForeground(new Color(250, 235, 215));
		btnNewButton_2.setBackground(new Color(128, 0, 0));
		btnNewButton_2.setFont(new Font("Tahoma", Font.BOLD, 16));
		btnNewButton_2.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				jf.setVisible(false);
				LoginForm obj=new LoginForm();
				obj.jf.setVisible(true);
			}
		});
		btnNewButton_2.setBounds(417, 303, 231, 29);
		contentPane.add(btnNewButton_2);
		
		JLabel label = new JLabel("");
		label.setBounds(-240, 0, 923, 470);
		contentPane.add(label);
		label.setIcon(new ImageIcon("E:\\image\\pic2.jpg"));
	}
}
