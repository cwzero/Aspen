#pragma once

namespace Aspen
{
    class System
    {
    public:
		  virtual ~System();

		  virtual void init();
		  virtual void start();
		  virtual void run();
		  virtual void stop();
    protected:
		  System();
    private:
    };
}