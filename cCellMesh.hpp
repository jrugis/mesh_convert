/*
 * cCellMesh.hpp
 *
 *	Created on: 2/8/2021
 *  Author: jrugis
 */

#ifndef CCELLMESH_H_
#define CCELLMESH_H_

#include <Eigen/Dense>
#include <string>

#include "global_defs.hpp"

class cCellMesh {
  public:
  cCellMesh(const std::string mesh_name);
  ~cCellMesh();
  void print_info();

  sMeshVals mesh_vals;               // vertices, surface_triangles, tetrahedrons and their counts
//  MatrixNCi common_triangles;        // this triangle, other cell, other triangle
//  MatrixNCi common_apical_triangles; // this triangle, other cell, other triangle
//  MatrixN1i apical_triangles;        // surface triangle indicies
//  MatrixN1i basal_triangles;         // surface triangle indicies
//  MatrixN1d n_dfa;                   // distance from apical (per node)
//  MatrixN1d e_dfa;                   // distance from apical (per element)
//  MatrixN1d e_dfb;                   // distance from basal (per element)
//  int common_triangles_count, apical_triangles_count, basal_triangles_count;

  private:
  std::string id;
//  cCell_calcium* parent;
//  void calc_common();
//  void calc_dfa();
//  void calc_apical_basal();
//  void calc_dfb();
//  void mesh_calcs();
//  void identify_common_apical_triangles();
};

#endif /* CCELLMESH_H_ */
