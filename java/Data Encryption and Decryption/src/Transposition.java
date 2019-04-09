import java.awt.BorderLayout;
import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import java.awt.SystemColor;
import javax.swing.JLabel;
import javax.swing.JOptionPane;

import java.awt.Font;
import java.awt.Color;
import javax.swing.JRadioButton;
import javax.swing.JTextField;
import javax.swing.SwingConstants;
import javax.swing.ButtonGroup;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import org.eclipse.wb.swing.FocusTraversalOnArray;
import java.awt.Component;
import java.awt.Toolkit;
import java.awt.Window.Type;

public class Transposition extends JFrame {

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
//					Transposition frame = new Transposition();
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
	public Transposition() {
		setType(Type.POPUP);
		setIconImage(Toolkit.getDefaultToolkit().getImage("E:\\image\\icon\\Locked-Cloud-icon.png"));
		setTitle("Transposition");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setBounds(100, 100, 657, 444);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		JPanel panel = new JPanel();
		panel.setLayout(null);
		panel.setBorder(new EmptyBorder(5, 5, 5, 5));
		panel.setBackground(SystemColor.controlDkShadow);
		panel.setBounds(0, 0, 644, 409);
		contentPane.add(panel);
		
		JLabel lblTranspositionEncryption = new JLabel("TRANSPOSITION ENCRYPTION / DECRYPTION TOOLS");
		lblTranspositionEncryption.setForeground(Color.WHITE);
		lblTranspositionEncryption.setFont(new Font("Tahoma", Font.BOLD, 20));
		lblTranspositionEncryption.setBounds(56, 0, 557, 41);
		panel.add(lblTranspositionEncryption);
		
		JLabel label_1 = new JLabel("Select Method :");
		label_1.setForeground(Color.WHITE);
		label_1.setFont(new Font("Tahoma", Font.BOLD, 15));
		label_1.setBounds(39, 52, 121, 19);
		panel.add(label_1);
		
		JRadioButton encryption = new JRadioButton("Encryption");
		encryption.setFont(new Font("Tahoma", Font.PLAIN, 16));
		encryption.setBounds(209, 52, 109, 23);
		panel.add(encryption);
		
		JRadioButton decryption = new JRadioButton("Decryption");
		decryption.setFont(new Font("Tahoma", Font.PLAIN, 16));
		decryption.setBounds(353, 52, 109, 23);
		panel.add(decryption);
		ButtonGroup button=new ButtonGroup();
		button.add(encryption);
		button.add(decryption);
		JLabel lblKey = new JLabel("Key ( must be numeric value ) :");
		lblKey.setForeground(Color.WHITE);
		lblKey.setFont(new Font("Tahoma", Font.PLAIN, 16));
		lblKey.setBounds(32, 100, 232, 23);
		panel.add(lblKey);
		
		key = new JTextField();
		key.setHorizontalAlignment(SwingConstants.RIGHT);
		key.setForeground(Color.WHITE);
		key.setFont(new Font("Tahoma", Font.PLAIN, 18));
		key.setColumns(10);
		key.setBackground(new Color(169, 169, 169));
		key.setBounds(272, 94, 341, 32);
		panel.add(key);
		
		JLabel label_3 = new JLabel("Input Text :");
		label_3.setForeground(Color.WHITE);
		label_3.setFont(new Font("Tahoma", Font.PLAIN, 15));
		label_3.setBounds(32, 134, 91, 19);
		panel.add(label_3);
		
		input = new JTextField();
		input.setHorizontalAlignment(SwingConstants.RIGHT);
		input.setForeground(Color.WHITE);
		input.setFont(new Font("Tahoma", Font.PLAIN, 23));
		input.setColumns(10);
		input.setBackground(new Color(169, 169, 169));
		input.setBounds(32, 162, 581, 66);
		panel.add(input);
		
		JLabel label_4 = new JLabel("Output Text :");
		label_4.setForeground(Color.WHITE);
		label_4.setFont(new Font("Tahoma", Font.PLAIN, 15));
		label_4.setBounds(32, 239, 91, 19);
		panel.add(label_4);
		
		output = new JTextField();
		output.setHorizontalAlignment(SwingConstants.RIGHT);
		output.setForeground(Color.WHITE);
		output.setFont(new Font("Tahoma", Font.PLAIN, 23));
		output.setEnabled(false);
		output.setEditable(false);
		output.setColumns(10);
		output.setBackground(new Color(169, 169, 169));
		output.setBounds(32, 261, 581, 66);
		panel.add(output);
		
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
		panel.add(back);
		
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
		panel.add(reset);
		
		JButton start = new JButton("Start !");
		start.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				String foutput="";
				String foutput2="";
				String key2="";
				int  key1=0;
				String input2="";
				try {
				String input1=input.getText();
				input1=input1.toUpperCase();
				  key1=Integer.parseInt(key.getText());
				  key2=Integer.toString(key1);
				for(int i=0;i<input1.length();i++)
				{
					char c=input1.charAt(i);
					int a=c;
					if(a==32)
						continue;
					input2=input2+c;
				}
				
				}
				catch (Exception ea)
				{
					JOptionPane.showMessageDialog(null, ea);
				}
				 int kl=key2.length();
				 int il=input2.length();
				 int r=il/kl;
					if(il%kl!=0)
						r++;
				int l=(r*kl)-il;
				String con="";
				int ilet=90;
				for(int i=0;i<l;i++)
				{
					char c=(char)ilet;
					con=c+con;
					ilet--;
					
				}
				input2=input2+con;
				int input2length=input2.length();
				int k=0;
				char table [][]=new char[r][kl];
				char keyarray[]=key2.toCharArray();
				int keyar []=new int [keyarray.length];
				for(int i=0;i<keyarray.length;i++)
				{
					char c=keyarray[i];
					int a=c;
					a=a-48;
					keyar[i]=a;
				}
				if(encryption.isSelected())
				{
					for(int i=0;i<r;i++)
					{
						for(int j=0;j<kl;j++)	
						{
							table[i][j]=input2.charAt(k);
							k++;
						}
					}
					int s=keyar[0],si=0;
					for(int i=0;i<keyar.length;i++)
					{
						for(int j=0;j<keyar.length;j++)
						{
						      if(s<=keyar[j] && keyar[j]!=-1)
						      {
						    	  s=keyar[j];
						    	  si=j;
						      }
						}
						for(int t=0;t<r;t++)
						{
							
							foutput=foutput+table[t][si]; 
						}
						foutput2=foutput+foutput2;
						foutput="";
						keyar[si]=-1;
						s=0;
						si=0;
					}
					output.setText(foutput2);
			    }
			else if(decryption.isSelected())
			    {
				int s=keyar[0],si=0;
				for(int i=0;i<keyar.length;i++)
				{
					for(int j=0;j<keyar.length;j++)
					{
					      if(s<=keyar[j] && keyar[j]!=-1)
					      {
					    	  s=keyar[j];
					    	  si=j;
					      }
					}
				for(int t=r-1;t>=0;t--)
				{
					input2length--;
					table[t][si]=input2.charAt(input2length);
				}
				keyar[si]=-1;
				s=0;
				si=0;
				}
				foutput="";
				for(int i=0;i<r;i++)
				{
					for(int j=0;j<kl;j++)
					{
						foutput=foutput+table[i][j];
					}
				}
				output.setText(foutput);
				
				}
				
			else
			{
				JOptionPane.showMessageDialog(null, "Please Select Method");
			}
				
				
			}
		});
		start.setFont(new Font("Tahoma", Font.BOLD, 16));
		start.setBounds(423, 354, 190, 32);
		panel.add(start);
		setFocusTraversalPolicy(new FocusTraversalOnArray(new Component[]{contentPane, panel, lblTranspositionEncryption, label_1, encryption, decryption, lblKey, key, label_3, input, label_4, output, back, reset, start}));
	}
}
