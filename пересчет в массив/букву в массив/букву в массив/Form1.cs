using Microsoft.VisualBasic.Logging;
using System.Drawing;

namespace букву_в_массив
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            openFileDialog1.Filter = "Image Files(*.jpg; *.jpeg; *.gif; *.bmp)|*.jpg; *.jpeg; *.gif; *.bmp";
            if (openFileDialog1.ShowDialog() == DialogResult.Cancel)
                return;
            // получаем выбранный файл
            string filename = openFileDialog1.FileName;

            Bitmap bmp = new Bitmap(filename);
           
            pictureBox1.Image = bmp;

            int width = bmp.Width;
            int height = bmp.Height;

            byte[] data = new byte[1+height];
            string str = "{ ";
            str += textBoxWidth.Text+", ";
            Color tempColor = bmp.GetPixel(0, 0);

            int offset = 0;
            while(tempColor == Color.White && offset <= width)
            {

                for(int i= 0; i < height; i++)
                {
                    tempColor = bmp.GetPixel(offset, i);
                    if(tempColor != Color.White) break;
                }
            }
            int pos = 0;
            string temp = "";
            for(int y = 0 ; y < height; y++)
            {
                for(int x = offset; x< width; x++)
                {
                    if(bmp.GetPixel(x, y).R + bmp.GetPixel(x, y).G + bmp.GetPixel(x, y).B < 700)
                    {
                        pos += 1;
                        pos = pos << 1;
                        temp += 1;
                        //temp += bmp.GetPixel(x, y).R + bmp.GetPixel(x, y).G + bmp.GetPixel(x, y).B;
                    }
                    else
                    {
                        pos = pos << 1;
                        temp += 0;
                    }
                }

                // str += pos + ", ";
                str += temp + ", ";
            }

            str += ", }";

            textBoxResult.Text = str;
        }
    }
}