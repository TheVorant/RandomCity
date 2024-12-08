#include "library.h"


void folliage(const int x, const int y, const int starter)
{
	int b_or_t = random_in_range(0, 1);
	if(b_or_t == 0)
	{
		int dot = starter;
		while(dot < 75)
		{
			int flowers = random_in_range(0, 100);
			if(flowers > 80)
			{
			double color_random_1 = random_in_range(8,10) * 0.1;
			double color_random_2 = random_in_range(1, 3) * 0.1;
			set_pen_color(color_random_1, color_random_2, 0);
			}
			else if(flowers <= 80)
			{
			double color_random_1 = random_in_range(0,4) * 0.1;
			double color_random_2 = random_in_range(4,10) * 0.1;
			set_pen_color(color_random_1, color_random_2, 0);
			}
			move_to(x + random_in_range(-15, 15), y + random_in_range(-15, 15));
			set_pen_width(5);
			draw_point();
			dot = dot + 1;
		}
	}
	else if(b_or_t == 1)
	{
		int length = random_in_range(20, 100);
		set_pen_color(color::brown);
		fill_rectangle(x, 490 - length, random_in_range(4, 6), length);

		int dot = starter;
		while(dot < 100)
		{
			int flowers = random_in_range(0, 100);
			if(flowers > 80)
			{
			double color_random_1 = random_in_range(8,10) * 0.1;
			double color_random_2 = random_in_range(1, 3) * 0.1;
			set_pen_color(color_random_1, color_random_2, 0);
			}
			else if(flowers <= 80)
			{
			double color_random_1 = random_in_range(0,4) * 0.1;
			double color_random_2 = random_in_range(4,10) * 0.1;
			set_pen_color(color_random_1, color_random_2, 0);
			}
			move_to(x + random_in_range(-15, 15),490 - length + random_in_range(-15, 30));
			set_pen_width(5);
			draw_point();
			dot = dot + 1;
		}

	}

}

void window_maker(const int height, const int width, const int start, const int amount, const int spacer)
{
	if(amount < 4)
	{
		double color_random_1 = random_in_range(0,10) * 0.1;
		double color_random_2 = random_in_range(0,10) * 0.1;
		double color_random_3 = random_in_range(0,10) * 0.1;
		set_pen_width(5);
		set_pen_color(color_random_1, color_random_2, color_random_3);
		fill_rectangle((start + 5), 500 - height + spacer, width / 4, height / 6);
		fill_rectangle((start + 5) + width / 3, 500 - height + spacer, width / 4, height / 6);
		fill_rectangle((start + 5) + 2 *(width / 3), 500- height + spacer, width / 4, height / 6);
		window_maker(height, width, start, amount + 1, spacer + height / 5);
	}
	else
	{
		fill_rectangle((start + 2) + width / 3, 500 - height + (spacer - 2), width / 3, height / 7);
	}
}

void window_maker_H(const int height, const int width, const int start, const int g)
{
	double color_random_1 = random_in_range(0,10) * 0.1;
	double color_random_2 = random_in_range(0,10) * 0.1;
	double color_random_3 = random_in_range(0,10) * 0.1;
	set_pen_width(5);
	set_pen_color(color_random_1, color_random_2, color_random_3);
	fill_rectangle((start + 12), 495 - height , width / 4, height /4);
	fill_rectangle((start + 12) + width / 2, 495 - height, width / 4, height / 4);
	fill_rectangle((start + 12), 495 - int(height / 1.6), width / 4, height / 4);
	fill_rectangle((start + 12) + width / 2, 495 - int(height / 1.6), width / 4, height / 4);
	if( g == 1)
	{
	set_pen_color(color::grey);
	fill_rectangle((start - width), 495 - height / 2, width, height / 2 - 10);
	}
	set_pen_color(color::brown);
	fill_rectangle((start + 8) + width / 3, 495 - int(height / 3), height/ 6, int(height / 3.6));
}

void buildings(const int x, const int width_bound, const int x_start)
{
	if(x > 0)
	{
		int height_B = random_in_range(150, 450);
		int width_B = random_in_range(50, 125);
		int height_C = random_in_range(75, 125);
		int blocker = width_B + width_bound + 20;
		move_to(x_start - blocker, 485);
		double color_random_1 = random_in_range(0,10) * 0.1;
		double color_random_2 = random_in_range(0,10) * 0.1;
		double color_random_3 = random_in_range(0,10) * 0.1;
		set_pen_width(5);
		set_pen_color(color_random_1, color_random_2, color_random_3);
		int H_or_B = random_in_range(0,2);
		if(H_or_B <= 1 && x_start - blocker >= width_B)
		{
			set_heading_degrees(0);
			start_shape();
			note_position();
			turn_right_by_degrees(90);
			draw_distance(width_B);
			note_position();
			turn_left_by_degrees(90);
			draw_distance(height_B);
			note_position();
			turn_left_by_degrees(90);
			draw_distance(width_B);
			note_position();
			turn_left_by_degrees(90);
			draw_distance(height_B);
			note_position();
			fill_shape();
			window_maker(height_B, width_B, x_start - blocker, 0, 0);
			buildings(x - 1, blocker, x_start);
		}
		else if(H_or_B == 2)
		{
			int randhouse = random_in_range(0,1);
			if(randhouse == 0 && (x_start - blocker) >= width_B + 5)
			{
				set_heading_degrees(0);
				start_shape();
				note_position();
				turn_right_by_degrees(90);
				draw_distance(width_B);
				note_position();
				turn_left_by_degrees(90);
				draw_distance(height_C);
				note_position();
				turn_left_by_degrees(90);
				draw_distance(width_B);
				note_position();
				turn_left_by_degrees(90);
				draw_distance(height_C);
				note_position();
				fill_shape();

				move_to(x_start - blocker - 7, 485 - height_C);
				set_pen_color(color::brown);
				set_heading_degrees(0);
				start_shape();
				note_position();
				turn_right_by_degrees(60);
				draw_distance(int(width_B / 1.5));
				note_position();
				turn_right_by_degrees(60);
				draw_distance(int(width_B / 1.5));
				note_position();
				turn_right_by_degrees(150);
				draw_distance(width_B);
				note_position();
				fill_shape();

				window_maker_H(height_C, width_B, x_start - blocker, 0);
				buildings(x - 1, blocker, x_start);
			}
			else if(randhouse == 1 && (x_start - blocker) >= width_B * 2 + 5)
			{
				set_heading_degrees(0);
				start_shape();
				note_position();
				turn_right_by_degrees(90);
				draw_distance(width_B);
				note_position();
				turn_left_by_degrees(90);
				draw_distance(height_C);
				note_position();
				turn_left_by_degrees(90);
				draw_distance(width_B);
				note_position();
				turn_left_by_degrees(90);
				draw_distance(height_C);
				note_position();
				fill_shape();

				start_shape();
				turn_right_by_degrees(90);
				note_position();
				draw_distance(width_B);
				note_position();
				turn_right_by_degrees(90);
				draw_distance(height_C / 2);
				note_position();
				turn_right_by_degrees(90);
				draw_distance(width_B);
				note_position();
				turn_right_by_degrees(90);
				draw_distance(height_C / 2);
				note_position();
				fill_shape();



				move_to(x_start - blocker - 7, 485 - height_C);
				set_pen_color(color::brown);
				set_heading_degrees(0);
				start_shape();
				note_position();
				turn_right_by_degrees(60);
				draw_distance(int(width_B / 1.5));
				note_position();
				turn_right_by_degrees(60);
				draw_distance(int(width_B / 1.5));
				note_position();
				turn_right_by_degrees(150);
				draw_distance(width_B);
				note_position();
				fill_shape();

				move_to(x_start - blocker - 5, 500 - height_C);
				set_pen_color(color::brown);
				set_heading_degrees(0);
				start_shape();
				note_position();
				turn_right_by_degrees(180);
				draw_distance(height_C / 3);
				note_position();
				turn_right_by_degrees(90);
				draw_distance(width_B);
				note_position();
				fill_shape();

				window_maker_H(height_C, width_B, x_start - blocker, 1);
				int blocker = width_B * 2 + width_bound + 20;
				buildings(x - 1, blocker, x_start);
			}
		}
	}
}

void draw_stars(const int num)
{	
	const int length = 5;
	if(num > 0)
	{
		move_to(random_in_range(0, 600), random_in_range(0, 450));
		set_pen_color(color::yellow);
		set_pen_width(1);
		set_heading_degrees(0);
		start_shape();
		note_position();
		turn_right_by_degrees(18);
		draw_distance(length);
		note_position();
		turn_right_by_degrees(144);
		draw_distance(length);
		note_position();
		turn_left_by_degrees(90);
		note_position();
		turn_right_by_degrees(18);
		draw_distance(length);
		note_position();
		turn_right_by_degrees(144);
		draw_distance(length);
		note_position();
		turn_left_by_degrees(90);
		note_position();
		turn_right_by_degrees(18);
		draw_distance(length);
		note_position();
		turn_right_by_degrees(144);
		draw_distance(length);
		note_position();
		turn_left_by_degrees(90);
		note_position();
		turn_right_by_degrees(18);
		draw_distance(length);
		note_position();
		turn_right_by_degrees(144);
		draw_distance(length);
		note_position();
		turn_left_by_degrees(90);
		note_position();
		turn_right_by_degrees(18);
		draw_distance(length);
		note_position();
		turn_right_by_degrees(144);
		draw_distance(length);
		note_position();
		turn_left_by_degrees(90);
		note_position();
		turn_right_by_degrees(18);
		draw_distance(length);
		note_position();
		turn_right_by_degrees(144);
		draw_distance(length);
		note_position();
		turn_left_by_degrees(90);
		fill_shape();
		draw_stars(num - 1);
	}
}

void rays(const double ray, const double degreeH, const int sunx, const int suny, const int suncheck)
{
	move_to(sunx, suny);
	if(ray < 12)
	{
		set_pen_width(8);
		set_heading_degrees(degreeH);
		set_pen_color(color::yellow);
		draw_distance(53);
		if(suncheck == 0)
		{
			set_pen_color(0.8, 1, 1.0);
		}
		else if(suncheck == 1)
		{
			set_pen_color(1, 0.6, 0);
		}
		draw_distance(20);
		set_pen_color(color::yellow);
		draw_distance(25);
		rays(ray + 1, degreeH + 30, sunx, suny, suncheck);
	}
}

void day_night_dawn_action(const int time_of_day)
{
	if(time_of_day == 0)
	{
		set_pen_width(1000);
		set_pen_color(0.8, 1, 1.0);
		draw_point(300, 250);

		int sunx = random_in_range(0, 600);
		int suny = random_in_range(100,300);
		
		set_pen_color(color::yellow);
		move_to(sunx, suny);
		set_pen_width(100);
		draw_point(sunx, suny);
		move_to(sunx, suny);
		rays(0, 0, sunx, suny, 0);
	}
	else if(time_of_day == 1)
	{
		set_pen_width(1000);
		set_pen_color(0, 0, 0);
		draw_point(300, 250);
		int moon = random_in_range(0,2);
		int stars = random_in_range(75, 100);
		draw_stars(stars);
		if(moon == 0)
		{
			set_pen_width(100);
			set_pen_color(0.5, 0.5, 0.5);
			draw_point(300, 100);
		}
		else if(moon == 1)
		{
			set_pen_width(100);
			set_pen_color(0.5, 0.5, 0.5);
			draw_point(150, 150);
			set_pen_color(0, 0, 0);
			draw_point(125, 150);
		}
		else if(moon == 2)
		{
			set_pen_width(100);
			set_pen_color(0.5, 0.5, 0.5);
			draw_point(550, 150);
			set_pen_color(0, 0, 0);
			draw_point(575, 150);
		}

	}
	else if(time_of_day == 2)
	{
		set_pen_width(1000);
		set_pen_color(1, 0.6, 0);
		draw_point(300, 250);

		int sunx = random_in_range(0, 600);
		int suny = -10;
		
		set_pen_color(color::yellow);
		move_to(sunx, suny);
		set_pen_width(100);
		draw_point(sunx, suny);
		move_to(sunx, suny);
		rays(0, 0, sunx, suny, 1);
	}
}

void clouds(const int num)
{
	set_pen_color(0.95, 0.95, 0.95);
	set_pen_width(random_in_range(20, 50));
	if(num > 0)
	{
		int cloud_x = random_in_range(50, 600);
		int cloud_y = random_in_range(100, 300);
		move_to(cloud_x,cloud_y);
		draw_point(cloud_x, cloud_y);
		draw_point(cloud_x - 10, cloud_y + 5);
		draw_point(cloud_x + 10, cloud_y + 5);
		clouds(num - 1);
	}
}


void main() 
{

	make_window(600, 500);
	int day_night_dawn = random_in_range(0,2);
	day_night_dawn_action(day_night_dawn);
	if(day_night_dawn == 0 || day_night_dawn == 2)
	{
		int num_clouds = random_in_range(4, 10);
		clouds(num_clouds);
	}
	set_pen_color(color::dark_grey);
	fill_rectangle(0, 480, 600, 20);
	set_pen_color(color::light_green);
	fill_rectangle(0, 460, 600, 20);
	int num_houses = random_in_range(4, 6);
	buildings(num_houses, 0, 600);
	int place= 550;
	int b_and_t = random_in_range(8, 15);
	int start = 0;
	while(start < b_and_t)
	{
		folliage(place, 480, 0);
		place = place - random_in_range(50, 100);
		start = start + 1;
	}

}
