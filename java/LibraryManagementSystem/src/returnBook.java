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
import java.awt.event.ActionListener;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.awt.event.ActionEvent;
import com.toedter.calendar.JDateChooser;
import java.awt.Color;
import javax.swing.ImageIcon;

public class returnBook  extends Javaconnect { //extends JFrame {
	static JFrame jf=new JFrame("Return Book");
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

	/**
	 * Launch the application.
	 */
	//public static void main(String[] args) {
		
	//	EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					returnBook frame = new returnBook();
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
	public returnBook() {
		//super ("Return Book");
		conn=connecrDb();
	    jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		jf.setBounds(100, 100, 751, 476);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		jf.setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JLabel lblNewLabel = new JLabel("Student ID");
		lblNewLabel.setForeground(new Color(250, 235, 215));
		lblNewLabel.setBounds(356, 48, 94, 22);
		lblNewLabel.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel);
		
		JLabel lblNewLabel_1 = new JLabel("Book ID\r\n");
		lblNewLabel_1.setForeground(new Color(250, 235, 215));
		lblNewLabel_1.setBounds(356, 168, 107, 22);
		lblNewLabel_1.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel_1);
		
		JLabel lblNewLabel_2 = new JLabel("Book Name");
		lblNewLabel_2.setForeground(new Color(250, 235, 215));
		lblNewLabel_2.setBounds(356, 201, 101, 22);
		lblNewLabel_2.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel_2);
		
		JLabel lblNewLabel_3 = new JLabel("Publisher");
		lblNewLabel_3.setForeground(new Color(250, 235, 215));
		lblNewLabel_3.setBounds(356, 248, 94, 22);
		lblNewLabel_3.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel_3);
		
		JLabel lblNewLabel_4 = new JLabel("Student Name");
		lblNewLabel_4.setForeground(new Color(250, 235, 215));
		lblNewLabel_4.setBounds(356, 132, 107, 22);
		lblNewLabel_4.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel_4);
		
		textField = new JTextField();
		textField.setBounds(497, 48, 215, 25);
		contentPane.add(textField);
		textField.setColumns(10);
		
		textField_1 = new JTextField();
		textField_1.setBounds(497, 131, 215, 29);
		textField_1.setEditable(false);
		contentPane.add(textField_1);
		textField_1.setColumns(10);
		
		textField_2 = new JTextField();
		textField_2.setBounds(497, 171, 215, 28);
		textField_2.setEditable(false);
		contentPane.add(textField_2);
		textField_2.setColumns(10);
		
		textField_3 = new JTextField();
		textField_3.setBounds(497, 210, 215, 29);
		textField_3.setEditable(false);
		contentPane.add(textField_3);
		textField_3.setColumns(10);
		
		textField_4 = new JTextField();
		textField_4.setBounds(497, 250, 215, 23);
		textField_4.setEditable(false);
		contentPane.add(textField_4);
		textField_4.setColumns(10);
		
		JButton btnNewButton = new JButton("Search");
		btnNewButton.setBounds(497, 84, 215, 29);
		btnNewButton.setBackground(new Color(128, 0, 0));
		btnNewButton.setForeground(new Color(250, 235, 215));
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				try {
					String sql=setsql("Select * from IssuBook where Student_ID=?");
				     pst=conn.prepareStatement(sql);
				     pst.setString(1,textField.getText() );
					rs=pst.executeQuery();
					if(rs.next())
					{
						String add1=rs.getString("SName");
						textField_1.setText(add1);
						String add2=rs.getString("Book_ID");
						textField_2.setText(add2);
						String add3=rs.getString("Name");
						textField_3.setText(add3);
						String add4=rs.getString("Publisher");
						textField_4.setText(add4);
						String add5=rs.getString("DateOfIssue");
						textField_5.setText(add5);
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
		btnNewButton.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(btnNewButton);
		
		JDateChooser dateChooser = new JDateChooser();
		dateChooser.setBounds(497, 316, 215, 27);
		contentPane.add(dateChooser);
		
		JLabel lblNewLabel_5 = new JLabel("Return Date");
		lblNewLabel_5.setForeground(new Color(250, 235, 215));
		lblNewLabel_5.setBounds(356, 321, 84, 22);
		lblNewLabel_5.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel_5);
		
		JButton btnNewButton_1 = new JButton("Return");
		btnNewButton_1.setBounds(497, 354, 215, 31);
		btnNewButton_1.setBackground(new Color(128, 0, 0));
		btnNewButton_1.setForeground(new Color(250, 235, 215));
		btnNewButton_1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				
				try {
					String sql="delete from IssuBook where Student_ID=?";
				     pst=conn.prepareStatement(sql);
				     pst.setString(1,textField.getText() );
					pst.execute();
				}
				catch(Exception ea)
				{
					JOptionPane.showMessageDialog(null, ea);
				}
				try {
				String sql=setsql("Insert into ReturnBook ( Student_ID,SName,Book_ID,BName,Publisher,DateOfIssue,ReturnDate) Values (?,?,?,?,?,?,?)");
			     pst=conn.prepareStatement(sql);
			     pst.setString(1,textField.getText() );
			     pst.setString(2,textField_1.getText() );
			     pst.setString(3,textField_2.getText() );
			     pst.setString(4,textField_3.getText() );
			     pst.setString(5,textField_4.getText() );
			     pst.setString(6,textField_5.getText() );
			     pst.setString(7,((JTextField) dateChooser.getDateEditor().getUiComponent()).getText());
			     pst.execute();
			     JOptionPane.showMessageDialog(null, "Book Returned");
			}catch(Exception em)
			{
				JOptionPane.showMessageDialog(null, em);
			}
			}
		});
		btnNewButton_1.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(btnNewButton_1);
		
		JButton btnNewButton_2 = new JButton("Back");
		btnNewButton_2.setBounds(497, 395, 215, 31);
		btnNewButton_2.setBackground(new Color(128, 0, 0));
		btnNewButton_2.setForeground(new Color(250, 235, 215));
		btnNewButton_2.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				Smainmenu menu=new Smainmenu();
				menu.jf.setVisible(true);
				jf.dispose();
			}
		});
		btnNewButton_2.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(btnNewButton_2);
		
		JLabel lblNewLabel_6 = new JLabel("Date of Issue\r\n");
		lblNewLabel_6.setForeground(new Color(250, 235, 215));
		lblNewLabel_6.setBounds(356, 281, 94, 20);
		lblNewLabel_6.setFont(new Font("Tahoma", Font.BOLD, 14));
		contentPane.add(lblNewLabel_6);
		
		textField_5 = new JTextField();
		textField_5.setBounds(497, 281, 215, 29);
		textField_5.setEditable(false);
		contentPane.add(textField_5);
		textField_5.setColumns(10);
		
		JLabel label = new JLabel("");
		label.setBounds(-278, -50, 1024, 499);
		contentPane.add(label);
		label.setIcon(new ImageIcon("E:\\image\\gunasena.jpg"));
	}
}
