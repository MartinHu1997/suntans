/*
 * File: defaults.h
 * Author: Oliver B. Fringer
 * Institution: Stanford University
 * --------------------------------
 * Contains default values of variables that may not be defined in suntans.dat.
 *
 * Copyright (C) 2005-2006 The Board of Trustees of the Leland Stanford Junior 
 * University. All Rights Reserved.
 *
 */
#include "suntans.h"
#include "phys.h"


/* prettyplot:
 * uses quadratic interpolation for output values if 1, otherwise uses whichever interp method specified
 * use this by default to get better approximations for values on skewed grids
*/
const int prettyplot_DEFAULT=0;

/* linearFS:
   default value is for a nonlinear free surface, linearFS=0
*/
const int linearFS_DEFAULT=0;

/* interp:
   default value uses classic SUNTANS Perot method (type 0) vs Quadratic (type 1)
*/
const int interp_DEFAULT=0;

/* gravity:
   default value is that of Earth's gravitational constant (SI units)
*/
const REAL grav_DEFAULT=9.81;

/* minumum_depth:
    0: Do nothing
    Positive value: Will be the minimum allowable depth.  
    Negative value: Sets the minimum depth to the depth of the upper layer.
*/
const REAL minimum_depth_DEFAULT=0;   

/* fixdzz:
   0: Do not adjust bottom cell height.
   1: Do the adjustment but assume bottom cell height must be greater than dzsmall*dz[Nkmax-1];
  -1: Do the adjustment but assume bottom cell height must be greater than dzsmall (i.e. not relative).
*/
const int fixdzz_DEFAULT=1;   

/* TVDsalt, TVDturb, TVDtemp:
   0: No TVD scheme
   1: First-order upwind (Psi(r)=0)
   2: Lax-Wendroff (Psi(r)=1)
   3: Superbee
   4: Van Leer

   Defaults for salt and temperature are Van Leer, for turbulence model use first-order upwind.
*/
const int TVDsalt_DEFAULT=4;
const int TVDtemp_DEFAULT=4;
const int TVDturb_DEFAULT=0;

/* laxWendroff:
   0: Nothing
   1: Set eddy-viscosity values when using nonlinear=2 to those dictated by the lax-wendroff
   scheme.
*/
const int laxWendroff_DEFAULT = 1;
   
/* laxWendroff_Vertical: 
   0: Do not employ Lax-Wendroff coefficient for vertical advection.
   1: Employ it.
*/
const REAL laxWendroff_Vertical_DEFAULT = 1;

/* hprecond:
   0: No preconditioner for free-surface solver
   1: Jacobi preconditioner
*/
const int hprecond_DEFAULT = 1;

/* ntoutStore:
   How often to save restart data.  If 0 then just save at the last time step.
*/
const int ntoutStore_DEFAULT = 0;

/* AB:
   Adam-Bashforth for explicit terms.
*/
const int AB_DEFAULT = 2;


/* TVDmomentum
   TVD for advection of momentum, default is vanleer
*/
const int TVDmomentum_DEFAULT = 3;

/* smoothbot:
   Treatment in SetFluxHeight and ComputeVelocityVector for smooth
   bottom flow when partial stepping is used
*/
const REAL smoothbot_DEFAULT = 0.0;

