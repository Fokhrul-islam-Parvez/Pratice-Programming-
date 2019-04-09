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
import java.awt.Color;
import javax.swing.JButton;
import javax.swing.DefaultComboBoxModel;
import com.toedter.calendar.JCalendar;
import java.awt.event.ActionListener;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.awt.event.ActionEvent;
import com.toedter.calendar.JDateChooser;
import javax.swing.ImageIcon;

public class Issu  extends Javaconnect {// extends JFrame {
	static JFrame jf=new JFrame("Issue Book");
//	 Connection conn;
//	    ResultSet rs;
//	    PreparedStatement pst;
	private JPanel contentPane;
	private JTextField textField;
	private JTextField textField_1;
	private JTextField textField_2;
	private JTextField textField_3;
	private JTextField textField_4;
	private JTextField textField_5;
	private JTextField textField_6;
	private JTextField textField_7;
	private JTextField textField_8;
	private JTextField textField_9;
	private JTextField textField_10;
	private JTextField textField_11;
	private JTextField textField_12;

	/**
	 * Launch the application.
	 */
	//public static void main(String[] args) {
	//	EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Issu frame = new Issu();
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
	public Issu() {
		//super ("Issue Book");
		conn=connecrDb();
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		jf.setBounds(100, 100, 796, 607);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		jf.setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JLabel lblNewLabel = new JLabel("Book ID");
		lblNewLabel.setForeground(new Color(250, 235, 215));
		lblNewLabel.setBounds(46, 97, 62, 17);
		lblNewLabel.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel);
		
		JLabel lblNewLabel_1 = new JLabel("Book Name");
		lblNewLabel_1.setForeground(new Color(250, 235, 215));
		lblNewLabel_1.setBounds(46, 140, 80, 17);
		lblNewLabel_1.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel_1);
		
		JLabel lblNewLabel_2 = new JLabel("Edition");
		lblNewLabel_2.setForeground(new Color(250, 235, 215));
		lblNewLabel_2.setBounds(51, 182, 57, 14);
		lblNewLabel_2.setFont(new Font("Dialog", Font.BOLD, 14));
		contentPane.add(lblNewLabel_2);
		
		JLabel lblNewLabel_3 = new JLabel("Publisher");
		lblNewLabel_3.setForeground(new Color(0, 0, 0));
		lblNewLabel_3.setBounds(46, 224, 68, 17);
		lblNewLabel_3.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel_3);
		
		JLabel lblNewLabel_4 = new JLabel("Pages");
		lblNewLabel_4.setBounds(51, 290, 48, 22);
		lblNewLabel_4.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel_4);
		
		JLabel lblNewLabel_5 = new JLabel("Price");
		lblNewLabel_5.setBounds(46, 262, 33, 17);
		lblNewLabel_5.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel_5);
		
		textField = new JTextField();
		textField.setBounds(136, 96, 153, 22);
		contentPane.add(textField);
		textField.setColumns(10);
		
		textField_1 = new JTextField();
		textField_1.setBounds(136, 140, 153, 20);
		textField_1.setEditable(false);
		contentPane.add(textField_1);
		textField_1.setColumns(10);
		
		textField_2 = new JTextField();
		textField_2.setBounds(136, 224, 153, 20);
		textField_2.setEditable(false);
		contentPane.add(textField_2);
		textField_2.setColumns(10);
		
		textField_3 = new JTextField();
		textField_3.setBounds(133, 262, 156, 20);
		textField_3.setEditable(false);
		contentPane.add(textField_3);
		textField_3.setColumns(10);
		
		textField_4 = new JTextField();
		textField_4.setBounds(136, 293, 153, 20);
		textField_4.setEditable(false);
		contentPane.add(textField_4);
		textField_4.setColumns(10);
		
		JLabel lblNewLabel_6 = new JLabel("  Book Detial");
		lblNewLabel_6.setForeground(new Color(250, 235, 215));
		lblNewLabel_6.setBounds(88, 36, 138, 32);
	//	lblNewLabel_6.setLabelFor(this);
		lblNewLabel_6.setBackground(new Color(240, 240, 240));
		lblNewLabel_6.setFont(new Font("Tahoma", Font.BOLD, 20));
		contentPane.add(lblNewLabel_6);
		
		JButton btnNewButton = new JButton("Search");
		btnNewButton.setBounds(136, 347, 153, 32);
		btnNewButton.setBackground(new Color(128, 0, 0));
		btnNewButton.setForeground(new Color(250, 235, 215));
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				try {
					String sql="Select * from Book where Book_ID=?";
				     pst=conn.prepareStatement(sql);
				     pst.setString(1,textField.getText() );
					rs=pst.executeQuery();
					if(rs.next())
					{
						String add1=rs.getString("Name");
						textField_1.setText(add1);
						String add2=rs.getString("Edition");
						textField_10.setText(add2);
						String add3=rs.getString("Publisher");
						textField_2.setText(add3);
						String add4=rs.getString("Price");
						textField_3.setText(add4);
						String add5=rs.getString("Pages");
						textField_4.setText(add5);
						rs.close();
						pst.close();
					}
					else
					{
						JOptionPane.showMessageDialog(null, "Book is not found");
					}
				}
					catch(Exception ea)
					{
						JOptionPane.showMessageDialog(null, ea);
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
				
			
		}});
		btnNewButton.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(btnNewButton);
		
		JLabel lblNewLabel_7 = new JLabel("Student Detial");
		lblNewLabel_7.setBackground(new Color(128, 0, 0));
		lblNewLabel_7.setForeground(new Color(250, 235, 215));
		lblNewLabel_7.setBounds(505, 34, 184, 32);
		lblNewLabel_7.setFont(new Font("Tahoma", Font.BOLD, 20));
		contentPane.add(lblNewLabel_7);
		
		JLabel lblNewLabel_8 = new JLabel("Student ID");
		lblNewLabel_8.setBounds(473, 96, 80, 17);
		lblNewLabel_8.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel_8);
		
		JLabel lblNewLabel_9 = new JLabel("Name");
		lblNewLabel_9.setBounds(491, 141, 62, 14);
		lblNewLabel_9.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel_9);
		
		JLabel lblNewLabel_10 = new JLabel("Email\r\n");
		lblNewLabel_10.setForeground(new Color(0, 0, 0));
		lblNewLabel_10.setBounds(491, 180, 62, 18);
		lblNewLabel_10.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel_10);
		
		JLabel lblNewLabel_11 = new JLabel("Phone");
		lblNewLabel_11.setForeground(new Color(0, 0, 0));
		lblNewLabel_11.setBounds(483, 209, 62, 16);
		lblNewLabel_11.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel_11);
		
		JLabel lblNewLabel_12 = new JLabel("University");
		lblNewLabel_12.setBounds(477, 246, 76, 17);
		lblNewLabel_12.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel_12);
		
		JLabel lblNewLabel_13 = new JLabel("Department");
		lblNewLabel_13.setBounds(460, 279, 93, 17);
		lblNewLabel_13.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel_13);
		
		JLabel lblNewLabel_14 = new JLabel("Semester");
		lblNewLabel_14.setBounds(470, 307, 68, 22);
		lblNewLabel_14.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel_14);
		
		textField_5 = new JTextField();
		textField_5.setBounds(570, 96, 153, 22);
		contentPane.add(textField_5);
		textField_5.setColumns(10);
		
		textField_6 = new JTextField();
		textField_6.setBounds(570, 138, 153, 22);
		textField_6.setEditable(false);
		contentPane.add(textField_6);
		textField_6.setColumns(10);
		
		textField_7 = new JTextField();
		textField_7.setBounds(570, 176, 153, 20);
		textField_7.setEditable(false);
		contentPane.add(textField_7);
		textField_7.setColumns(10);
		
		textField_8 = new JTextField();
		textField_8.setBounds(570, 207, 153, 20);
		textField_8.setEditable(false);
		contentPane.add(textField_8);
		textField_8.setColumns(10);
		
		textField_9 = new JTextField();
		textField_9.setBounds(570, 246, 153, 20);
		textField_9.setEditable(false);
		contentPane.add(textField_9);
		textField_9.setColumns(10);
		
		textField_10 = new JTextField();
		textField_10.setBounds(136, 181, 153, 20);
		textField_10.setEditable(false);
		contentPane.add(textField_10);
		textField_10.setColumns(10);
		
		textField_11 = new JTextField();
		textField_11.setBounds(570, 279, 153, 20);
		textField_11.setEditable(false);
		contentPane.add(textField_11);
		textField_11.setColumns(10);
		
		textField_12 = new JTextField();
		textField_12.setBounds(570, 310, 153, 20);
		textField_12.setEditable(false);
		contentPane.add(textField_12);
		textField_12.setColumns(10);
		
		JButton btnNewButton_1 = new JButton("Search");
		btnNewButton_1.setBounds(570, 347, 153, 32);
		btnNewButton_1.setForeground(new Color(250, 235, 215));
		btnNewButton_1.setBackground(new Color(128, 0, 0));
		btnNewButton_1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				try {
					String sql=setsql("Select * from NewStudent where Student_Id=?");
				     pst=conn.prepareStatement(sql);
				     pst.setString(1,textField_5.getText() );
					rs=pst.executeQuery();
					if(rs.next())
					{
						String add1=rs.getString("Name");
						textField_6.setText(add1);
						String add2=rs.getString("Email");
						textField_7.setText(add2);
						String add3=rs.getString("Phone");
						textField_8.setText(add3);
						String add4=rs.getString("University");
						textField_9.setText(add4);
						String add5=rs.getString("Department");
						textField_11.setText(add5);
						String add6=rs.getString("Semester");
						textField_12.setText(add6);
						rs.close();
						pst.close();
					}
					else
					{
						JOptionPane.showMessageDialog(null, "Student is not found");
					}
				}
					catch(Exception ea)
					{
						JOptionPane.showMessageDialog(null, ea);
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
		btnNewButton_1.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(btnNewButton_1);
		
		JDateChooser dateChooser = new JDateChooser();
		dateChooser.setBounds(291, 436, 253, 22);
		contentPane.add(dateChooser);
		
		
		JButton btnNewButton_2 = new JButton("Issue");
		btnNewButton_2.setBounds(291, 466, 253, 32);
		btnNewButton_2.setBackground(new Color(128, 0, 0));
		btnNewButton_2.setForeground(new Color(250, 235, 215));
		btnNewButton_2.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				try {
					String sql=setsql("Insert into IssuBook ( Book_ID,Name,Edition,Publisher,Price,Pages,Student_ID,SName,Email,Phone,University,Department,Semester,DateOfIssue) Values (?,?,?,?,?,?,?,?,?,?,?,?,?,?)");
				     pst=conn.prepareStatement(sql);
				     pst.setString(1,textField.getText() );
				     pst.setString(2,textField_1.getText() );
				     pst.setString(3,textField_10.getText() );
				     pst.setString(4,textField_2.getText() );
				     pst.setString(5,textField_3.getText() );
				     pst.setString(6,textField_4.getText() );
				     pst.setString(7,textField_5.getText() );
				     pst.setString(8,textField_6.getText() );
				     pst.setString(9,textField_7.getText() );
				     pst.setString(10,textField_8.getText() );
				     pst.setString(11,textField_9.getText() );
				     pst.setString(12,textField_11.getText() );
				     pst.setString(13,textField_12.getText() );
				     pst.setString(14,((JTextField) dateChooser.getDateEditor().getUiComponent()).getText());
				     pst.execute();
						JOptionPane.showMessageDialog(null, "Book Issued");
				}catch(Exception em)
				{
					JOptionPane.showMessageDialog(null, em);
				}
			}
		});
		btnNewButton_2.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(btnNewButton_2);
		
		JButton btnNewButton_3 = new JButton("Back");
		btnNewButton_3.setBounds(291, 509, 253, 32);
		btnNewButton_3.setBackground(new Color(128, 0, 0));
		btnNewButton_3.setForeground(new Color(250, 235, 215));
		btnNewButton_3.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Smainmenu menu=new Smainmenu();
				menu.jf.setVisible(true);
				jf.dispose();
			}
		});
		btnNewButton_3.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(btnNewButton_3);
		
		JLabel lblNewLabel_16 = new JLabel("Date of Issue");
		lblNewLabel_16.setFont(new Font("Tahoma", Font.BOLD, 16));
		lblNewLabel_16.setBounds(349, 403, 114, 22);
		contentPane.add(lblNewLabel_16);
		
		JLabel label = new JLabel("");
		label.setBounds(-26, 0, 945, 595);
		contentPane.add(label);
		label.setIcon(new ImageIcon("E:\\image\\2_945.png"));
		
		
	}
}
