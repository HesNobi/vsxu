/**
* Project: VSXu: Realtime visual programming language, music/audio visualizer, animation tool and much much more.
*
* @author Jonatan Wallmander, Robert Wenzel, Vovoid Media Technologies Copyright (C) 2003-2011
* @see The GNU Public License (GPL)
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
* or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
* for more details.
*
* You should have received a copy of the GNU General Public License along
* with this program; if not, write to the Free Software Foundation, Inc.,
* 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/

#ifndef VSX_NO_CLIENT
#ifndef VSX_WIDGET_PREVIEW_H
#define VSX_WIDGET_PREVIEW_H

class vsx_window_texture_viewer : public vsx_widget_window {
  vsx_widget *inspected;
  vsx_widget *label1;
  vsx_widget *server;
  float frame_delta;
  float frame_count;
  float fps;
  void** engine;

public:
#ifndef VSXU_PLAYER  
  vsx_texture texture;
#endif

 	bool fullscreen;
 	bool fullwindow;
 	vsx_string modestring;
 	vsx_string modestring_default;
 	bool run;
  vsx_vector pos_, size_;
  vsx_command_list modestring_commands;
	void draw() {};
  void draw_2d();
  void init();
  void set_server(vsx_widget* new_server);
  virtual bool event_key_down(signed long key, bool alt, bool ctrl, bool shift);
  virtual void vsx_command_process_b(vsx_command_s *t);

  vsx_window_texture_viewer();
};


#endif
#endif