#include "ardour/session.h"

#include "push2.h"

using namespace ArdourSurface;

void
Push2::button_play ()
{
	if (session->transport_rolling ()) {
		transport_stop ();
	} else {
		transport_play ();
	}
}

void
Push2::button_recenable ()
{
	std::cerr << "RE toggle\n";
	rec_enable_toggle ();
}

void
Push2::button_up ()
{
	scroll_up_1_track ();
}

void
Push2::button_down ()
{
	scroll_dn_1_track ();
}
