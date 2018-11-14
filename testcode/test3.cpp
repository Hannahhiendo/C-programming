#include <iostream>
#include <qrcodegen.js>
using namespace std;


// Create a ASP.NET QR Code object
   QRCode qrCode = new QRCode();

   // Customize QR Code barcode data
   qrCode.Data = "ASP.NET C# QR Code"; 
   // Customize QR Code data mode
   qrCode.DataMode = QRCodeDataMode.Auto;

   // Customize QR Code barcode size
   qrCode.X = 2;
   qrCode.LeftMargin = 8;
   qrCode.RightMargin = 8;
   qrCode.TopMargin = 8;
   qrCode.BottomMargin = 8;

   // Encode created QR Code to png image file and save it to C:\
   qrCode.ImageFormat = System.Drawing.Imaging.ImageFormat.Png;
   qrCode.drawBarcode("C://aspnet-csharp-qrcode.png");
