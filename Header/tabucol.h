#ifndef _TABUCOL_H_
#define _TABUCOL_H_

#include "graph_color.h"

using GraphColoring::GraphColor;
using GraphColoring::Algorithm;

namespace GraphColoring{
	class tabucol : public GraphColor {
		private:
			int f(map<string,int> coloring);
		public: 
			tabucol(map<string, vector<string> > input_graph) :GraphColor(input_graph) { 
				algorithm = kTABUCOL; 
			} 
			map<string,int> color(int condition = 0);
	};
}

#endif