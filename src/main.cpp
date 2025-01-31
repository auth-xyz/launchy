#include <clicky/clicky.hpp>


int main(int argc, char* argv[]) {
  clicky cli; 

  cli.add_argument("config", "c", "Overwrites default config path ($XDG_CONFIG_HOME)", false);

  cli.add_options({
    {"debug", "d", "Enables debug messages", false},
  });

  cli.parse(argc,argv);
};
