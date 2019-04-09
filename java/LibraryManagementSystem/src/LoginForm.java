import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import java.util.*;
import javafx.scene.control.PasswordField;
import javax.swing.*;
import javax.swing.JLabel;
import javax.swing.JTextField;
import javax.swing.JButton;
import java.awt.Font;
import java.awt.event.ActionListener;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.awt.event.ActionEvent;
import javax.swing.border.TitledBorder;
import javax.swing.border.LineBorder;
import java.awt.Color;

public class LoginForm extends Javaconnect  {
	static JFrame jf=new JFrame("Login");
//	 Connection conn;
//	    ResultSet rs;
//	    PreparedStatement pst;
	private JPanel contentPane;
	private JTextField name;
	private JPasswordField passwordField;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					LoginForm frame = new LoginForm();
					jf.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the frame.
	 */
	public LoginForm() {
		//super ("Login");
		initComponents();
		conn=connecrDb();
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		jf.setBounds(100, 100, 731, 425);
		contentPane = new JPanel();
		contentPane.setBackground(new Color(253, 245, 230));
		contentPane.setForeground(new Color(230, 230, 250));
		contentPane.setBorder(new EmptyBorder(8, 5, 5, 5));
		jf.setContentPane(contentPane);
		contentPane.setLayout(null);
		
		name = new JTextField();
		name.setFont(new Font("Tahoma", Font.BOLD, 13));
		name.setForeground(new Color(0, 0, 0));
		name.setBackground(new Color(220, 220, 220));
		name.setBounds(442, 75, 232, 28);
		contentPane.add(name);
		name.setColumns(10);
		
		JButton btnNewButton = new JButton("Login");
		btnNewButton.setForeground(new Color(250, 235, 215));
		btnNewButton.setBackground(new Color(139, 0, 0));
		btnNewButton.setBounds(442, 218, 232, 29);
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
			
				try {
					String sql=setsql("select *from Library where Userame=? and Password=?");
					pst=conn.prepareStatement(sql);
					pst.setString(1, name.getText());
					pst.setString(2, passwordField.getText());
					rs=pst.executeQuery();
					if(rs.next())
					{
						rs.close();
						pst.close();
						jf.setVisible(false);
						Smainmenu obj=new Smainmenu();
						obj.jf.setVisible(true);
					}
					else{
						JOptionPane.showMessageDialog(null, "Invalid Username or Password");
					}
				}catch(Exception em)
				{
					JOptionPane.showMessageDialog(null, em);
				}
				finally
				{
					try {
					rs.close();
					pst.close();
				}catch(Exception em)
			{
				JOptionPane.showMessageDialog(null, em);
			}
		
			
			}
			}
		});
		btnNewButton.setFont(new Font("Tahoma", Font.BOLD, 16));
		contentPane.add(btnNewButton);
		
		JLabel lblNewLabel_1 = new JLabel("Enter Username ");
		lblNewLabel_1.setForeground(new Color(250, 235, 215));
		lblNewLabel_1.setBounds(442, 44, 132, 20);
		lblNewLabel_1.setFont(new Font("Tahoma", Font.BOLD, 15));
		contentPane.add(lblNewLabel_1);
		
		JLabel lblNewLabel_2 = new JLabel("Enter Password ");
		lblNewLabel_2.setForeground(new Color(250, 235, 215));
		lblNewLabel_2.setBounds(442, 122, 132, 20);
		lblNewLabel_2.setFont(new Font("Tahoma", Font.BOLD, 15));
		contentPane.add(lblNewLabel_2);
		
		passwordField = new JPasswordField();
		passwordField.setBackground(new Color(220, 220, 220));
		passwordField.setForeground(new Color(0, 0, 0));
		passwordField.setFont(new Font("Tahoma", Font.BOLD, 13));
		passwordField.setBounds(442, 153, 232, 29);
		contentPane.add(passwordField);
		
		JButton btnNewButton_1 = new JButton("Sign Up");
		btnNewButton_1.setForeground(new Color(250, 235, 215));
		btnNewButton_1.setBackground(new Color(139, 0, 0));
		btnNewButton_1.setFont(new Font("Tahoma", Font.BOLD, 16));
		btnNewButton_1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				jf.setVisible(false);
				SignUp obj=new SignUp();
				obj.jf.setVisible(true);
			}
		});
		btnNewButton_1.setBounds(442, 325, 232, 28);
		contentPane.add(btnNewButton_1);
		
		JButton btnNewButton_2 = new JButton("Forgat Password");
		btnNewButton_2.setBackground(new Color(139, 0, 0));
		btnNewButton_2.setFont(new Font("Tahoma", Font.BOLD, 16));
		btnNewButton_2.setForeground(new Color(250, 235, 215));
		btnNewButton_2.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				jf.setVisible(false);
				Forgot obj=new Forgot();
				obj.jf.setVisible(true);
			}
			
		});
		btnNewButton_2.setBounds(442, 273, 232, 29);
		contentPane.add(btnNewButton_2);
		
		JLabel lblNewLabel_3 = new JLabel("New label");
		lblNewLabel_3.setBackground(new Color(240, 240, 240));
		lblNewLabel_3.setForeground(new Color(250, 235, 215));
		lblNewLabel_3.setBounds(-546, 0, 1330, 850);
		contentPane.add(lblNewLabel_3);
		lblNewLabel_3.setIcon(new ImageIcon("E:\\image\\pic_1.png"));
		
		JLabel lblNewLabel = new JLabel("Keep Too");
		lblNewLabel.setBackground(new Color(105, 105, 105));
		lblNewLabel.setForeground(new Color(250, 235, 215));
		lblNewLabel.setBounds(95, 127, 46, 14);
		contentPane.add(lblNewLabel);
		
		JLabel lblNewLabel_4 = new JLabel("Keep Too");
		lblNewLabel_4.setForeground(new Color(250, 235, 215));
		lblNewLabel_4.setFont(new Font("Tahoma", Font.BOLD, 25));
		lblNewLabel_4.setBounds(128, 140, 46, 14);
		contentPane.add(lblNewLabel_4);
		
		JDesktopPane desktopPane = new JDesktopPane();
		desktopPane.setBounds(307, 205, 13, -8);
		contentPane.add(desktopPane);
		
		JLabel lblNewLabel_5 = new JLabel("Library Management ");
		lblNewLabel_5.setForeground(new Color(250, 235, 215));
		lblNewLabel_5.setFont(new Font("Tahoma", Font.BOLD, 24));
		lblNewLabel_5.setBounds(93, 172, 253, 46);
		contentPane.add(lblNewLabel_5);
		
		JLabel lblNewLabel_6 = new JLabel("System");
		lblNewLabel_6.setForeground(new Color(250, 235, 215));
		lblNewLabel_6.setFont(new Font("Tahoma", Font.BOLD, 24));
		lblNewLabel_6.setBounds(173, 210, 132, 36);
		contentPane.add(lblNewLabel_6);
		
		JLabel lblNewLabel_7 = new JLabel("New label");
		lblNewLabel_7.setBounds(115, 115, 46, 14);
		contentPane.add(lblNewLabel_7);
		
		JLabel lblNewLabel_8 = new JLabel("New label");
		lblNewLabel_8.setForeground(new Color(165, 42, 42));
		lblNewLabel_8.setBounds(95, 194, 46, 14);
		contentPane.add(lblNewLabel_8);
	}

	private void initComponents() {
		// TODO Auto-generated method stub
		
	}
}
