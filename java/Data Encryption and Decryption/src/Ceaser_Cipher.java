import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.JLabel;
import javax.swing.JOptionPane;

import java.awt.Font;
import javax.swing.JRadioButton;
import javax.swing.JTextField;
import javax.swing.ButtonGroup;
import javax.swing.JButton;
import javax.swing.SwingConstants;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import java.awt.Color;
import java.awt.Toolkit;
import java.awt.Window.Type;

public class Ceaser_Cipher extends JFrame {

	private JPanel contentPane;
	private JTextField key;
	private JTextField input;
	private JTextField output;

	/**
	 * Launch the application.
	 */
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Home_Page007 frame = new Home_Page007();
					frame.setVisible(true);
//					Ceaser_Cipher frame = new Ceaser_Cipher();
//					frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the frame.
	 */
	public Ceaser_Cipher() {
		setType(Type.POPUP);
		setIconImage(Toolkit.getDefaultToolkit().getImage("E:\\image\\icon\\Locked-Cloud-icon.png"));
		setTitle("Ceaser Cipher");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 660, 448);
		contentPane = new JPanel();
		contentPane.setBackground(new Color(105, 105, 105));
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JLabel lblNewLabel = new JLabel("CEASER CIPHER ENCRYPTION / DECRYPTION TOOLS");
		lblNewLabel.setForeground(new Color(255, 255, 255));
		lblNewLabel.setFont(new Font("Tahoma", Font.BOLD, 20));
		lblNewLabel.setBounds(56, 0, 557, 41);
		contentPane.add(lblNewLabel);
		
		JLabel lblNewLabel_1 = new JLabel("Select Method :");
		lblNewLabel_1.setForeground(new Color(255, 255, 255));
		lblNewLabel_1.setFont(new Font("Tahoma", Font.BOLD, 15));
		lblNewLabel_1.setBounds(39, 52, 121, 19);
		contentPane.add(lblNewLabel_1);
		
		JRadioButton encryption = new JRadioButton("Encryption");
		encryption.setFont(new Font("Tahoma", Font.PLAIN, 16));
		encryption.setBounds(209, 52, 109, 23);
		contentPane.add(encryption);
		
		JRadioButton decryption = new JRadioButton("Decryption");
		decryption.setFont(new Font("Tahoma", Font.PLAIN, 16));
		decryption.setBounds(353, 52, 109, 23);
		contentPane.add(decryption);
		
		ButtonGroup button=new ButtonGroup();
		button.add(encryption);
		button.add(decryption);
		JLabel lblKey = new JLabel("Key ( must be numeric value ) :");
		lblKey.setForeground(new Color(255, 255, 255));
		lblKey.setFont(new Font("Tahoma", Font.PLAIN, 16));
		lblKey.setBounds(32, 100, 233, 23);
		contentPane.add(lblKey);
		
		key = new JTextField();
		key.setForeground(new Color(255, 255, 255));
		key.setBackground(new Color(169, 169, 169));
		key.setFont(new Font("Tahoma", Font.PLAIN, 18));
		key.setHorizontalAlignment(SwingConstants.RIGHT);
		key.setBounds(275, 94, 338, 32);
		contentPane.add(key);
		key.setColumns(10);
		
		JLabel lblInputText = new JLabel("Input Text :");
		lblInputText.setForeground(new Color(255, 255, 255));
		lblInputText.setFont(new Font("Tahoma", Font.PLAIN, 15));
		lblInputText.setBounds(32, 134, 91, 19);
		contentPane.add(lblInputText);
		
		input = new JTextField();
		input.setForeground(new Color(255, 255, 255));
		input.setBackground(new Color(169, 169, 169));
		input.setFont(new Font("Tahoma", Font.PLAIN, 23));
		input.setHorizontalAlignment(SwingConstants.RIGHT);
		input.setBounds(32, 162, 581, 66);
		contentPane.add(input);
		input.setColumns(10);
		
		JLabel lblOutputText = new JLabel("Output Text :");
		lblOutputText.setForeground(new Color(255, 255, 255));
		lblOutputText.setFont(new Font("Tahoma", Font.PLAIN, 15));
		lblOutputText.setBounds(32, 239, 91, 19);
		contentPane.add(lblOutputText);
		
		output = new JTextField();
		output.setBackground(new Color(169, 169, 169));
		output.setForeground(new Color(255, 255, 255));
		output.setEnabled(false);
		output.setEditable(false);
		output.setFont(new Font("Tahoma", Font.PLAIN, 23));
		output.setHorizontalAlignment(SwingConstants.RIGHT);
		output.setBounds(32, 261, 581, 66);
		contentPane.add(output);
		output.setColumns(10);
		
		JButton back = new JButton("Back");
		back.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Home_Page007 hm=new Home_Page007();
				hm.setVisible(true);
				dispose();
			}
		});
		back.setFont(new Font("Tahoma", Font.BOLD, 16));
		back.setBounds(32, 354, 109, 32);
		contentPane.add(back);
		
		JButton reset = new JButton("Reset");
		reset.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				key.setText("");
				input.setText("");
				output.setText("");
			}
		});
		reset.setFont(new Font("Tahoma", Font.BOLD, 16));
		reset.setBounds(161, 354, 121, 32);
		contentPane.add(reset);
		
		JButton start = new JButton("Start !");
		start.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				if(encryption.isSelected())
				{
					int key1 = 0,length=0,i=0;
					char c;
					String input1="";
					try
					{
						key1=Integer.parseInt(key.getText());
						input1=input.getText();
						input1=input1.toUpperCase();
						length=input1.length();
						String s2="";
						for(i=0;i<length;i++)
						{
							c=input1.charAt(i);
							int b=(int)c;
							if(key1<0)
							{
								b=b-64;
								key1=key1*(-1);
								int t=key1/26;
								t=t+1;
								int n=t*26;
							    key1=n-key1;					
							    b=b+key1;
							    b=b%26;
							}
							else {																						
							b=b-64;
							
							b=b+key1;
							b=b%26;
							}
							if(b==0)
								b=26;
							
							b=b+64;
							char cc=(char)b;
							s2=s2+cc;
							
						}
						output.setText(s2);
					}
					catch (Exception ea)
					{
						JOptionPane.showMessageDialog(null, "Please Enter Numeric value");
					}
					
				}
				else if(decryption.isSelected())
				{
					int key1 = 0,length=0,i=0;
					char c;
					String input1="";
					try
					{
						key1=Integer.parseInt(key.getText());
						input1=input.getText();
						input1=input1.toUpperCase();
						length=input1.length();
						String s2="";
						for(i=0;i<length;i++)
						{
							c=input1.charAt(i);
							int b=c;
							b=b-64;
							b=b-key1;
							if(b<=0)
							{
								b=-1*b;
								int d=b/26;
								d=d+1;
								d=d*26;
								d=d-b;
								if(d==0)
									d=26;
								d=d+64;
								char cc=(char)d;
								s2=s2+cc;
								
							}
							else
							{
								b=b%26;
								if(b==0)
									b=26;
								b=b+64;
								char cc=(char)b;
								s2=s2+cc;
							}
						}
						
						
						output.setText(s2);
					}
					catch (Exception ea)
					{
						JOptionPane.showMessageDialog(null, "Please Enter Numeric value");
					}
					
				}
				else
				{
					JOptionPane.showMessageDialog(null, "Please Select Method");
				}
				
			}
		});
		start.setFont(new Font("Tahoma", Font.BOLD, 16));
		start.setBounds(423, 354, 190, 32);
		contentPane.add(start);
	}
}
