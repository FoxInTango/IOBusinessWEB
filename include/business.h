#include <libioevent/libioevent.h>
#include <libmodule/libmodule.h>
#include <libcpp/libcpp.h>

namespace foxintango {
class foxintangoAPI BusinessWEB :public IOEventHandler {
public:
    BusinessWEB();
    virtual ~BusinessWEB();
public:
    virtual int handleEvent(const IOEvent* event);
};
}
