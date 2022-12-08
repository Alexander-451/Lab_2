#include <QAplication>
#include <QPushButton>

int main (int args, char *argv[ ])
{
  QAplication app(args, argv);

  QPushButton button("Hello Home!");
  button.resize(200, 60);
  button.show( );

  return app.exec( );
}