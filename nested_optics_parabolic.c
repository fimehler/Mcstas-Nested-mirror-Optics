/* Automatically generated file. Do not edit. 
 * Format:     ANSI C source code
 * Creator:    McStas <http://www.mcstas.org>
 * Instrument: nested_optics_parabolic.instr (SKADI)
 * Date:       Thu Nov 28 15:04:05 2024
 * File:       ./nested_optics_parabolic.c
 * CFLAGS= -Wl,-rpath,CMD(mcpl-config --show libdir) -LCMD(mcpl-config --show libdir) -lmcpl -ICMD(mcpl-config --show includedir)
 */

#define MCCODE_STRING ""
#define FLAVOR        "mcstas"
#define FLAVOR_UPPER  "MCSTAS"

#define MC_USE_DEFAULT_MAIN
#define MC_TRACE_ENABLED

#include <string.h>

typedef double MCNUM;
typedef struct {MCNUM x, y, z;} Coords;
typedef MCNUM Rotation[3][3];
#define MCCODE_BASE_TYPES

#ifndef MC_NUSERVAR
#define MC_NUSERVAR 10
#endif

/* Particle JUMP control logic */
struct particle_logic_struct {
int dummy;
};

struct _struct_particle {
  double x,y,z; /* position [m] */
  double vx,vy,vz; /* velocity [m/s] */
  double sx,sy,sz; /* spin [0-1] */
  int mcgravitation; /* gravity-state */
  void *mcMagnet;    /* precession-state */
  int allow_backprop; /* allow backprop */
  unsigned long randstate[7];
  double t, p;    /* time, event weight */
  long long _uid;  /* event ID */
  long _index;     /* component index where to send this event */
  long _absorbed;  /* flag set to TRUE when this event is to be removed/ignored */
  long _scattered; /* flag set to TRUE when this event has interacted with the last component instance */
  long _restore;   /* set to true if neutron event must be restored */
  long flag_nocoordschange;   /* set to true if particle is jumping */
  struct particle_logic_struct _logic;
};
typedef struct _struct_particle _class_particle;

_class_particle _particle_global_randnbuse_var;
_class_particle* _particle = &_particle_global_randnbuse_var;

#pragma acc routine
_class_particle mcgenstate(void);
#pragma acc routine
_class_particle mcsetstate(double x, double y, double z, double vx, double vy, double vz,
			   double t, double sx, double sy, double sz, double p, int mcgravitation, void *mcMagnet, int mcallowbackprop);

extern int mcgravitation;      /* flag to enable gravitation */
#pragma acc declare create ( mcgravitation )
int mcallowbackprop;        
#pragma acc declare create ( mcallowbackprop )

_class_particle mcgenstate(void) {
  _class_particle particle = mcsetstate(0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, mcgravitation, NULL, mcallowbackprop);
  return(particle);
}
/*Generated user variable handlers:*/

#pragma acc routine
double particle_getvar(_class_particle *p, char *name, int *suc);

#ifdef OPENACC
#pragma acc routine
int str_comp(char *str1, char *str2);
#endif

double particle_getvar(_class_particle *p, char *name, int *suc){
#ifndef OPENACC
#define str_comp strcmp
#endif
  int s=1;
  double rval=0;
  if(!str_comp("x",name)){rval=p->x;s=0;}
  if(!str_comp("y",name)){rval=p->y;s=0;}
  if(!str_comp("z",name)){rval=p->z;s=0;}
  if(!str_comp("vx",name)){rval=p->vx;s=0;}
  if(!str_comp("vy",name)){rval=p->vy;s=0;}
  if(!str_comp("vz",name)){rval=p->vz;s=0;}
  if(!str_comp("sx",name)){rval=p->sx;s=0;}
  if(!str_comp("sy",name)){rval=p->sy;s=0;}
  if(!str_comp("sz",name)){rval=p->sz;s=0;}
  if(!str_comp("t",name)){rval=p->t;s=0;}
  if(!str_comp("p",name)){rval=p->p;s=0;}
  if (suc!=0x0) {*suc=s;}
  return rval;
}

#pragma acc routine
void* particle_getvar_void(_class_particle *p, char *name, int *suc);

#ifdef OPENACC
#pragma acc routine
int str_comp(char *str1, char *str2);
#endif

void* particle_getvar_void(_class_particle *p, char *name, int *suc){
#ifndef OPENACC
#define str_comp strcmp
#endif
  int s=1;
  void* rval=0;
  if(!str_comp("x",name)) {rval=(void*)&(p->x); s=0;}
  if(!str_comp("y",name)) {rval=(void*)&(p->y); s=0;}
  if(!str_comp("z",name)) {rval=(void*)&(p->z); s=0;}
  if(!str_comp("vx",name)){rval=(void*)&(p->vx);s=0;}
  if(!str_comp("vy",name)){rval=(void*)&(p->vy);s=0;}
  if(!str_comp("vz",name)){rval=(void*)&(p->vz);s=0;}
  if(!str_comp("sx",name)){rval=(void*)&(p->sx);s=0;}
  if(!str_comp("sy",name)){rval=(void*)&(p->sy);s=0;}
  if(!str_comp("sz",name)){rval=(void*)&(p->sz);s=0;}
  if(!str_comp("t",name)) {rval=(void*)&(p->t); s=0;}
  if(!str_comp("p",name)) {rval=(void*)&(p->p); s=0;}
  if (suc!=0x0) {*suc=s;}
  return rval;
}

#pragma acc routine
int particle_setvar_void(_class_particle *, char *, void*);

int particle_setvar_void(_class_particle *p, char *name, void* value){
#ifndef OPENACC
#define str_comp strcmp
#endif
  int rval=1;
  if(!str_comp("x",name)) {memcpy(&(p->x),  value, sizeof(double)); rval=0;}
  if(!str_comp("y",name)) {memcpy(&(p->y),  value, sizeof(double)); rval=0;}
  if(!str_comp("z",name)) {memcpy(&(p->z),  value, sizeof(double)); rval=0;}
  if(!str_comp("vx",name)){memcpy(&(p->vx), value, sizeof(double)); rval=0;}
  if(!str_comp("vy",name)){memcpy(&(p->vy), value, sizeof(double)); rval=0;}
  if(!str_comp("vz",name)){memcpy(&(p->vz), value, sizeof(double)); rval=0;}
  if(!str_comp("sx",name)){memcpy(&(p->sx), value, sizeof(double)); rval=0;}
  if(!str_comp("sy",name)){memcpy(&(p->sy), value, sizeof(double)); rval=0;}
  if(!str_comp("sz",name)){memcpy(&(p->sz), value, sizeof(double)); rval=0;}
  if(!str_comp("p",name)) {memcpy(&(p->p),  value, sizeof(double)); rval=0;}
  if(!str_comp("t",name)) {memcpy(&(p->t),  value, sizeof(double)); rval=0;}
  return rval;
}

#pragma acc routine
int particle_setvar_void_array(_class_particle *, char *, void*, int);

int particle_setvar_void_array(_class_particle *p, char *name, void* value, int elements){
#ifndef OPENACC
#define str_comp strcmp
#endif
  int rval=1;
  return rval;
}

#pragma acc routine
void particle_restore(_class_particle *p, _class_particle *p0);

void particle_restore(_class_particle *p, _class_particle *p0) {
  p->x  = p0->x;  p->y  = p0->y;  p->z  = p0->z;
  p->vx = p0->vx; p->vy = p0->vy; p->vz = p0->vz;
  p->sx = p0->sx; p->sy = p0->sy; p->sz = p0->sz;
  p->t = p0->t;  p->p  = p0->p;
  p->_absorbed=0; p->_restore=0;
}

#pragma acc routine
double particle_getuservar_byid(_class_particle *p, int id, int *suc){
  int s=1;
  double rval=0;
  switch(id){
  }
  if (suc!=0x0) {*suc=s;}
  return rval;
}

#pragma acc routine
void particle_uservar_init(_class_particle *p){
}

#define MC_EMBEDDED_RUNTIME
/* embedding file "mccode-r.h" */

/*******************************************************************************
*
* McCode, neutron/xray ray-tracing package
*         Copyright (C) 1997-2009, All rights reserved
*         Risoe National Laboratory, Roskilde, Denmark
*         Institut Laue Langevin, Grenoble, France
*
* Runtime: share/mccode-r.h
*
* %Identification
* Written by: KN
* Date:    Aug 29, 1997
* Release: McStas 3.3
* Version: $Revision$
*
* Runtime system header for McStas/McXtrace.
*
* In order to use this library as an external library, the following variables
* and macros must be declared (see details in the code)
*
*   struct mcinputtable_struct mcinputtable[];
*   int numipar;
*   char instrument_name[], instrument_source[];
*   int traceenabled, defaultmain;
*   extern MCNUM  mccomp_storein[];
*   extern MCNUM  mcAbsorbProp[];
*   extern MCNUM  mcScattered;
*   #define MCCODE_STRING "the McStas/McXtrace version"
*
* Usage: Automatically embbeded in the c code.
*
* $Id$
*
*******************************************************************************/

#ifndef MCCODE_R_H
#define MCCODE_R_H "$Revision$"

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <errno.h>
#include <time.h>
#include <sys/time.h>
#include <float.h>
#include <inttypes.h>
#include <stdint.h>
#ifdef OPENACC
#include <openacc.h>
#ifndef GCCOFFLOAD
#include <accelmath.h>
#else
#include <math.h>
#endif
#pragma acc routine
int noprintf();
#pragma acc routine
size_t str_len(const char *s);
#else
#include <math.h>
#endif

/* If the runtime is embedded in the simulation program, some definitions can
   be made static. */

#ifdef MC_EMBEDDED_RUNTIME
#  define mcstatic
#else
#  define mcstatic
#endif

#ifdef __dest_os
#  if (__dest_os == __mac_os)
#    define MAC
#  endif
#endif

#ifdef __FreeBSD__
#  define NEED_STAT_H
#endif

#if defined(__APPLE__) && defined(__GNUC__)
#  define NEED_STAT_H
#endif

#ifdef NEED_STAT_H
#  include <sys/stat.h>
#endif

#ifndef MC_PATHSEP_C
#  ifdef WIN32
#    define MC_PATHSEP_C '\\'
#    define MC_PATHSEP_S "\\"
#  else  /* !WIN32 */
#    define MC_PATHSEP_C '/'
#    define MC_PATHSEP_S "/"
#  endif /* !WIN32 */
#endif /* MC_PATHSEP_C */



/* the version string is replaced when building distribution with mkdist */
#ifndef MCCODE_STRING
#  define MCCODE_STRING "McStas 3.3 - Mar. 30, 2023"
#endif

#ifndef MCCODE_DATE
#  define MCCODE_DATE "Mar. 30, 2023"
#endif

#ifndef MCCODE_VERSION
#  define MCCODE_VERSION "3.3"
#endif

#ifndef MCCODE_NAME
#  define MCCODE_NAME "McStas"
#endif

#ifndef MCCODE_PARTICLE
#  define MCCODE_PARTICLE "neutron"
#endif

#ifndef MCCODE_PARTICLE_CODE
#  define MCCODE_PARTICLE_CODE 2112
#endif

#ifndef MCCODE_LIBENV
#  define MCCODE_LIBENV "MCSTAS"
#endif

#ifndef FLAVOR_UPPER
#  define FLAVOR_UPPER MCCODE_NAME
#endif

#ifdef MC_PORTABLE
#  ifndef NOSIGNALS
#    define NOSIGNALS 1
#  endif
#endif

#ifdef MAC
#  ifndef NOSIGNALS
#    define NOSIGNALS 1
#  endif
#endif

#if (USE_MPI == 0)
#  undef USE_MPI
#endif

#ifdef USE_MPI  /* default is to disable signals with MPI, as MPICH uses them to communicate */
#  ifndef NOSIGNALS
#    define NOSIGNALS 1
#  endif
#endif

#ifdef OPENACC  /* default is to disable signals with PGI/OpenACC */
#  ifndef NOSIGNALS
#    define NOSIGNALS 1
#  endif
#endif

#ifndef OPENACC
#  ifndef USE_OFF  /* default is to enable OFF when not using PGI/OpenACC */
#    define USE_OFF
#  endif
#  ifndef CPUFUNNEL  /* allow to enable FUNNEL-mode on CPU */
#  ifdef FUNNEL      /* by default disable FUNNEL-mode when not using PGI/OpenACC */
#    undef FUNNEL
#  endif
#  endif
#endif

#if (NOSIGNALS == 0)
#  undef NOSIGNALS
#endif

/* Note: the enum instr_formal_types definition MUST be kept
   synchronized with the one in mccode.h and with the
   instr_formal_type_names array in cogen.c. */
enum instr_formal_types
  {
    instr_type_int,
    instr_type_string, instr_type_char,
    instr_type_vector, instr_type_double
  };
struct mcinputtable_struct { /* defines instrument parameters */
  char *name; /* name of parameter */
  void *par;  /* pointer to instrument parameter (variable) */
  enum instr_formal_types type;
  char *val;  /* default value */
};

#ifndef MCCODE_BASE_TYPES
typedef double MCNUM;
typedef struct {MCNUM x, y, z;} Coords;
typedef MCNUM Rotation[3][3];
#endif

/* the following variables are defined in the McStas generated C code
   but should be defined externally in case of independent library usage */
#ifndef DANSE
extern struct mcinputtable_struct mcinputtable[];         /* list of instrument parameters */
extern int    numipar;                                    /* number of instrument parameters */
extern char   instrument_name[], instrument_source[]; /* instrument name and filename */
extern char  *instrument_exe;                           /* executable path = argv[0] or NULL */
extern char   instrument_code[];                        /* contains the initial 'instr' file */

#ifndef MC_ANCIENT_COMPATIBILITY
extern int traceenabled, defaultmain;
#endif
#endif


/* Useful macros ============================================================ */


/* SECTION: Dynamic Arrays */
typedef int* IArray1d;
IArray1d create_iarr1d(int n);
void destroy_iarr1d(IArray1d a);

typedef int** IArray2d;
IArray2d create_iarr2d(int nx, int ny);
void destroy_iarr2d(IArray2d a);

typedef int*** IArray3d;
IArray3d create_iarr3d(int nx, int ny, int nz);
void destroy_iarr3d(IArray3d a);

typedef double* DArray1d;
DArray1d create_darr1d(int n);
void destroy_darr1d(DArray1d a);

typedef double** DArray2d;
DArray2d create_darr2d(int nx, int ny);
void destroy_darr2d(DArray2d a);

typedef double*** DArray3d;
DArray3d create_darr3d(int nx, int ny, int nz);
void destroy_darr3d(DArray3d a);


/* MPI stuff */
#ifdef USE_MPI
#include "mpi.h"

#ifdef OMPI_MPI_H  /* openmpi does not use signals: we may install our sighandler */
#ifndef OPENACC    /* ... but only if we are not also running on GPU */
#undef NOSIGNALS
#endif
#endif

/*
 * MPI_MASTER(i):
 * execution of i only on master node
 */
#define MPI_MASTER(statement) { \
  if(mpi_node_rank == mpi_node_root)\
  { statement; } \
}

#ifndef MPI_REDUCE_BLOCKSIZE
#define MPI_REDUCE_BLOCKSIZE 1000
#endif

int mc_MPI_Sum(double* buf, long count);
int mc_MPI_Send(void *sbuf, long count, MPI_Datatype dtype, int dest);
int mc_MPI_Recv(void *rbuf, long count, MPI_Datatype dtype, int source);

/* MPI_Finalize exits gracefully and should be preferred to MPI_Abort */
#define exit(code) do {                                   \
    MPI_Finalize();                                       \
    exit(code);                                           \
  } while(0)

#else /* !USE_MPI */
#define MPI_MASTER(instr) instr
#endif /* USE_MPI */


#ifdef USE_MPI
static int mpi_node_count;
#endif

#ifdef USE_THREADS  /* user want threads */
#error Threading (USE_THREADS) support has been removed for very poor efficiency. Use MPI/SSH grid instead.
#endif


void   mcset_ncount(unsigned long long count);    /* wrapper to get mcncount */
#pragma acc routine
unsigned long long int mcget_ncount(void);            /* wrapper to set mcncount */
unsigned long long mcget_run_num(void);           /* wrapper to get mcrun_num=0:mcncount-1 */

/* Following part is only embedded when not redundant with mccode.h ========= */

#ifndef MCCODE_H

#ifndef NOSIGNALS
#include <signal.h>
char  *mcsig_message;
#define SIG_MESSAGE(msg) mcsig_message=(char *)(msg);
#else
#define SIG_MESSAGE(...)
#endif /* !NOSIGNALS */


/* Useful macros and constants ============================================== */


#ifndef FLT_MAX
#define FLT_MAX         3.40282347E+38F /* max decimal value of a "float" */
#endif

#ifndef MIN
#define MIN(a, b)  (((a) < (b)) ? (a) : (b))
#endif
#ifndef MAX
#define MAX(a, b)  (((a) > (b)) ? (a) : (b))
#endif
#ifndef SQR
#define SQR(x) ( (x) * (x) )
#endif
#ifndef SIGN
#define SIGN(x) (((x)>0.0)?(1):(-1))
#endif


#  ifndef M_E
#    define M_E        2.71828182845904523536  // e
#  endif
#  ifndef M_LOG2E
#    define M_LOG2E    1.44269504088896340736  //  log2(e)
#  endif
#  ifndef M_LOG10E
#    define M_LOG10E   0.434294481903251827651 //  log10(e)
#  endif
#  ifndef M_LN2
#    define M_LN2      0.693147180559945309417 //  ln(2)
#  endif
#  ifndef M_LN10
#    define M_LN10     2.30258509299404568402  //  ln(10)
#  endif
#  ifndef M_PI
#    define M_PI       3.14159265358979323846  //  pi
#  endif
#  ifndef PI
#    define PI       M_PI                      //  pi - also used in some places
#  endif
#  ifndef M_PI_2
#    define M_PI_2     1.57079632679489661923  //  pi/2
#  endif
#  ifndef M_PI_4
#    define M_PI_4     0.785398163397448309616 //  pi/4
#  endif
#  ifndef M_1_PI
#    define M_1_PI     0.318309886183790671538 //  1/pi
#  endif
#  ifndef M_2_PI
#    define M_2_PI     0.636619772367581343076 //  2/pi
#  endif
#  ifndef M_2_SQRTPI
#    define M_2_SQRTPI 1.12837916709551257390  //  2/sqrt(pi)
#  endif
#  ifndef M_SQRT2
#    define M_SQRT2    1.41421356237309504880  //  sqrt(2)
#  endif
#  ifndef M_SQRT1_2
#    define M_SQRT1_2  0.707106781186547524401 //  1/sqrt(2)
#  endif

#define RAD2MIN  ((180*60)/PI)
#define MIN2RAD  (PI/(180*60))
#define DEG2RAD  (PI/180)
#define RAD2DEG  (180/PI)
#define FWHM2RMS 0.424660900144    /* Convert between full-width-half-max and */
#define RMS2FWHM 2.35482004503     /* root-mean-square (standard deviation) */
#define HBAR     1.05457168e-34    /* [Js] h bar Planck constant CODATA 2002 */
#define MNEUTRON 1.67492728e-27    /* [kg] mass of neutron CODATA 2002 */
#define GRAVITY  9.81              /* [m/s^2] gravitational acceleration */
#define NA       6.02214179e23     /* [#atoms/g .mole] Avogadro's number*/


#define UNSET nan("0x6E6F74736574")
int nans_match(double, double);
int is_unset(double);
int is_valid(double);
int is_set(double);
int all_unset(int n, ...);
int all_set(int n, ...);
int any_unset(int n, ...);
int any_set(int n, ...);


/* wrapper to get absolute and relative position of comp */
/* mccomp_posa and mccomp_posr are defined in McStas generated C code */
#define POS_A_COMP_INDEX(index) (instrument->_position_absolute[index])
#define POS_R_COMP_INDEX(index) (instrument->_position_relative[index])

/* setting parameters based COMP_GETPAR (returned as pointer)         */
/* compname must be given as a string, type and par are symbols.      */
#define COMP_GETPAR3(type, compname, par) \
    &( ((_class_ ## type ##_parameters *) _getvar_parameters(compname))->par )
/* the body of this function depends on component instances, and is cogen'd */
void* _getvar_parameters(char* compname);

int _getcomp_index(char* compname);

/* Note: The two-stage approach to COMP_GETPAR is NOT redundant; without it,
* after #define C sample, COMP_GETPAR(C,x) would refer to component C, not to
* component sample. Such are the joys of ANSI C.

* Anyway the usage of COMP_GETPAR requires that we use sometimes bare names...
* NOTE: This can ONLY be used in instrument descriptions, not components.
*/
#define COMP_GETPAR2(comp, par) (_ ## comp ## _var._parameters.par)
#define COMP_GETPAR(comp, par) COMP_GETPAR2(comp,par)

#define INSTRUMENT_GETPAR(par) (_instrument_var._parameters.par)

/* Current component name, index, position and orientation */
/* These macros work because, using class-based functions, "comp" is usually
*  the local variable of the active/current component. */
#define INDEX_CURRENT_COMP (_comp->_index)
#define NAME_CURRENT_COMP (_comp->_name)
#define TYPE_CURRENT_COMP (_comp->_type)
#define POS_A_CURRENT_COMP (_comp->_position_absolute)
#define POS_R_CURRENT_COMP (_comp->_position_relative)
#define ROT_A_CURRENT_COMP (_comp->_rotation_absolute)
#define ROT_R_CURRENT_COMP (_comp->_rotation_relative)

#define NAME_INSTRUMENT (instrument->_name)


/* MCDISPLAY/trace and debugging message sent to stdout */
#ifdef MC_TRACE_ENABLED
#define DEBUG
#endif

#ifdef DEBUG
#define DEBUG_INSTR() if(!mcdotrace); else { printf("INSTRUMENT:\n"); printf("Instrument '%s' (%s)\n", instrument_name, instrument_source); }
#define DEBUG_COMPONENT(name,c,t) if(!mcdotrace); else {\
  printf("COMPONENT: \"%s\"\n" \
         "POS: %g, %g, %g, %g, %g, %g, %g, %g, %g, %g, %g, %g\n", \
         name, c.x, c.y, c.z, t[0][0], t[0][1], t[0][2], \
         t[1][0], t[1][1], t[1][2], t[2][0], t[2][1], t[2][2]); \
  printf("Component %30s AT (%g,%g,%g)\n", name, c.x, c.y, c.z); \
  }
#define DEBUG_INSTR_END() if(!mcdotrace); else printf("INSTRUMENT END:\n");
#define DEBUG_ENTER() if(!mcdotrace); else printf("ENTER:\n");
#define DEBUG_COMP(c) if(!mcdotrace); else printf("COMP: \"%s\"\n", c);
#define DEBUG_LEAVE() if(!mcdotrace); else printf("LEAVE:\n");
#define DEBUG_ABSORB() if(!mcdotrace); else printf("ABSORB:\n");
#else
#define DEBUG_INSTR()
#define DEBUG_COMPONENT(name,c,t)
#define DEBUG_INSTR_END()
#define DEBUG_ENTER()
#define DEBUG_COMP(c)
#define DEBUG_LEAVE()
#define DEBUG_ABSORB()
#endif

// mcDEBUG_STATE and mcDEBUG_SCATTER are defined by mcstas-r.h and mcxtrace-r.h



#ifdef TEST
#define test_printf printf
#else
#define test_printf while(0) printf
#endif

/* send MCDISPLAY message to stdout to show gemoetry */
void mcdis_magnify(char *what);
void mcdis_line(double x1, double y1, double z1,
                double x2, double y2, double z2);
void mcdis_dashed_line(double x1, double y1, double z1,
		       double x2, double y2, double z2, int n);
void mcdis_multiline(int count, ...);
void mcdis_rectangle(char* plane, double x, double y, double z,
		     double width, double height);
void mcdis_box(double x, double y, double z,
	       double width, double height, double length);
void mcdis_circle(char *plane, double x, double y, double z, double r);
void mcdis_Circle(double x, double y, double z, double r, double nx, double ny, double nz);
void mcdis_cylinder( double x, double y, double z,
        double r, double height, int N, double nx, double ny, double nz);
void mcdis_sphere(double x, double y, double z, double r, int N);


/* random number generation. ================================================ */

/* available random number generators */
#define _RNG_ALG_MT         1
#define _RNG_ALG_KISS       2

/* selection of random number generator */
#ifndef RNG_ALG
#  define RNG_ALG  _RNG_ALG_KISS
#endif


#if RNG_ALG == _RNG_ALG_MT  // MT (currently not functional for gpu)
#  define MC_RAND_MAX ((unsigned long)0xffffffff)
#  define randstate_t unsigned long // this could be anything
#  define RANDSTATE_LEN 1
#  define srandom(seed) mt_srandom_empty()
#  define random() mt_random()
#  define _random() mt_random()
#elif RNG_ALG == _RNG_ALG_KISS  // KISS
#  ifndef ULONG_MAX
#    define ULONG_MAX ((unsigned long)0xffffffffffffffffUL)
#  endif
#  define MC_RAND_MAX ULONG_MAX
#  define randstate_t unsigned long
#  define RANDSTATE_LEN 7
#  define srandom(seed) kiss_srandom(_particle->randstate, seed)
#  define random() kiss_random(_particle->randstate)
#  define _random() kiss_random(state)
#endif

#pragma acc routine
double _randnorm2(randstate_t* state);


// component writers interface
#define randnorm() _randnorm2(_particle->randstate) // NOTE: can not use _randnorm on gpu
#define rand01() _rand01(_particle->randstate)
#define randpm1() _randpm1(_particle->randstate)
#define rand0max(p1) _rand0max(p1, _particle->randstate)
#define randminmax(p1, p2) _randminmax(p1, p2, _particle->randstate)
#define randtriangle() _randtriangle(_particle->randstate)

// Mersenne Twister rng
unsigned long mt_random(void);
void mt_srandom (unsigned long x);
void mt_srandom_empty();

// KISS rng
#pragma acc routine
unsigned long *kiss_srandom(unsigned long state[7], unsigned long seed);
#pragma acc routine
unsigned long kiss_random(unsigned long state[7]);

// Scrambler / hash function
#pragma acc routine seq
randstate_t _hash(randstate_t x);

// internal RNG (transforms) interface
#pragma acc routine
double _rand01(randstate_t* state);
#pragma acc routine
double _randpm1(randstate_t* state);
#pragma acc routine
double _rand0max(double max, randstate_t* state);
#pragma acc routine
double _randminmax(double min, double max, randstate_t* state);
#pragma acc routine
double _randtriangle(randstate_t* state);


#ifdef USE_OPENCL
#include "opencl-lib.h"
#include "opencl-lib.c"
#endif

#ifndef DANSE
int init(void);
int raytrace(_class_particle*);
int save(FILE *);
int finally(void);
int display(void);
#endif


/* GPU related algorithms =================================================== */

/*
*  Divide-and-conquer strategy for parallel sort absorbed last.
*/
#ifdef FUNNEL
long sort_absorb_last(_class_particle* particles, _class_particle* pbuffer, long len, long buffer_len, long flag_split, long* multiplier);
#endif
long sort_absorb_last_serial(_class_particle* particles, long len);


/* simple vector algebra ==================================================== */


#define vec_prod(x, y, z, x1, y1, z1, x2, y2, z2) \
	vec_prod_func(&x, &y, &z, x1, y1, z1, x2, y2, z2)
#pragma acc routine seq
mcstatic void vec_prod_func(double *x, double *y, double *z,
		double x1, double y1, double z1, double x2, double y2, double z2);

#pragma acc routine seq
mcstatic double scalar_prod(
		double x1, double y1, double z1, double x2, double y2, double z2);

#pragma acc routine seq
mcstatic void norm_func(double *x, double *y, double *z);
#define NORM(x,y,z)	norm_func(&x, &y, &z)

#pragma acc routine seq
void normal_vec(double *nx, double *ny, double *nz,
    double x, double y, double z);

/**
 * Rotate the vector vx,vy,vz psi radians around the vector ax,ay,az
 * and put the result in x,y,z.
 */
#define rotate(x, y, z, vx, vy, vz, phi, ax, ay, az) \
  do { \
    double mcrt_tmpx = (ax), mcrt_tmpy = (ay), mcrt_tmpz = (az); \
    double mcrt_vp, mcrt_vpx, mcrt_vpy, mcrt_vpz; \
    double mcrt_vnx, mcrt_vny, mcrt_vnz, mcrt_vn1x, mcrt_vn1y, mcrt_vn1z; \
    double mcrt_bx, mcrt_by, mcrt_bz; \
    double mcrt_cos, mcrt_sin; \
    NORM(mcrt_tmpx, mcrt_tmpy, mcrt_tmpz); \
    mcrt_vp = scalar_prod((vx), (vy), (vz), mcrt_tmpx, mcrt_tmpy, mcrt_tmpz); \
    mcrt_vpx = mcrt_vp*mcrt_tmpx; \
    mcrt_vpy = mcrt_vp*mcrt_tmpy; \
    mcrt_vpz = mcrt_vp*mcrt_tmpz; \
    mcrt_vnx = (vx) - mcrt_vpx; \
    mcrt_vny = (vy) - mcrt_vpy; \
    mcrt_vnz = (vz) - mcrt_vpz; \
    vec_prod(mcrt_bx, mcrt_by, mcrt_bz, \
             mcrt_tmpx, mcrt_tmpy, mcrt_tmpz, mcrt_vnx, mcrt_vny, mcrt_vnz); \
    mcrt_cos = cos((phi)); mcrt_sin = sin((phi)); \
    mcrt_vn1x = mcrt_vnx*mcrt_cos + mcrt_bx*mcrt_sin; \
    mcrt_vn1y = mcrt_vny*mcrt_cos + mcrt_by*mcrt_sin; \
    mcrt_vn1z = mcrt_vnz*mcrt_cos + mcrt_bz*mcrt_sin; \
    (x) = mcrt_vpx + mcrt_vn1x; \
    (y) = mcrt_vpy + mcrt_vn1y; \
    (z) = mcrt_vpz + mcrt_vn1z; \
  } while(0)

/**
 * Mirror (xyz) in the plane given by the point (rx,ry,rz) and normal (nx,ny,nz)
 *
 * TODO: This define is seemingly never used...
 */
#define mirror(x,y,z,rx,ry,rz,nx,ny,nz) \
  do { \
    double mcrt_tmpx= (nx), mcrt_tmpy = (ny), mcrt_tmpz = (nz); \
    double mcrt_tmpt; \
    NORM(mcrt_tmpx, mcrt_tmpy, mcrt_tmpz); \
    mcrt_tmpt=scalar_prod((rx),(ry),(rz),mcrt_tmpx,mcrt_tmpy,mcrt_tmpz); \
    (x) = rx -2 * mcrt_tmpt*mcrt_rmpx; \
    (y) = ry -2 * mcrt_tmpt*mcrt_rmpy; \
    (z) = rz -2 * mcrt_tmpt*mcrt_rmpz; \
  } while (0)

#pragma acc routine
Coords coords_set(MCNUM x, MCNUM y, MCNUM z);
#pragma acc routine
Coords coords_get(Coords a, MCNUM *x, MCNUM *y, MCNUM *z);
#pragma acc routine
Coords coords_add(Coords a, Coords b);
#pragma acc routine
Coords coords_sub(Coords a, Coords b);
#pragma acc routine
Coords coords_neg(Coords a);
#pragma acc routine
Coords coords_scale(Coords b, double scale);
#pragma acc routine
double coords_sp(Coords a, Coords b);
#pragma acc routine
Coords coords_xp(Coords b, Coords c);
#pragma acc routine
double coords_len(Coords a);
#pragma acc routine seq
void   coords_print(Coords a);
#pragma acc routine seq
mcstatic void coords_norm(Coords* c);

#pragma acc routine seq
void rot_set_rotation(Rotation t, double phx, double phy, double phz);
#pragma acc routine seq
int  rot_test_identity(Rotation t);
#pragma acc routine seq
void rot_mul(Rotation t1, Rotation t2, Rotation t3);
#pragma acc routine seq
void rot_copy(Rotation dest, Rotation src);
#pragma acc routine seq
void rot_transpose(Rotation src, Rotation dst);
#pragma acc routine seq
Coords rot_apply(Rotation t, Coords a);

#pragma acc routine seq
void mccoordschange(Coords a, Rotation t, _class_particle *particle);
#pragma acc routine seq
void mccoordschange_polarisation(Rotation t, double *sx, double *sy, double *sz);

double mcestimate_error(double N, double p1, double p2);
void mcreadparams(void);

/* this is now in mcstas-r.h and mcxtrace-r.h as the number of state parameters
is no longer equal */

_class_particle mcgenstate(void);

// trajectory/shape intersection routines
#pragma acc routine seq
int inside_rectangle(double, double, double, double);
#pragma acc routine seq
int box_intersect(double *dt_in, double *dt_out, double x, double y, double z,
      double vx, double vy, double vz, double dx, double dy, double dz);
#pragma acc routine seq
int cylinder_intersect(double *t0, double *t1, double x, double y, double z,
      double vx, double vy, double vz, double r, double h);
#pragma acc routine seq
int sphere_intersect(double *t0, double *t1, double x, double y, double z,
      double vx, double vy, double vz, double r);
// second order equation roots
#pragma acc routine seq
int solve_2nd_order(double *t1, double *t2,
      double A,  double B,  double C);

// random vector generation to shape
// defines silently introducing _particle as the last argument
#define randvec_target_circle(xo, yo, zo, solid_angle, xi, yi, zi, radius) \
  _randvec_target_circle(xo, yo, zo, solid_angle, xi, yi, zi, radius, _particle)
#define randvec_target_rect_angular(xo, yo, zo, solid_angle, xi, yi, zi, height, width, A) \
  _randvec_target_rect_angular(xo, yo, zo, solid_angle, xi, yi, zi, height, width, A, _particle)
#define randvec_target_rect_real(xo, yo, zo, solid_angle, xi, yi, zi, height, width, A, lx, ly, lz, order) \
  _randvec_target_rect_real(xo, yo, zo, solid_angle, xi, yi, zi, height, width, A, lx, ly, lz, order, _particle)
// defines forwarding to "inner" functions
#define randvec_target_sphere randvec_target_circle
#define randvec_target_rect(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9) \
  randvec_target_rect_real(p0,p1,p2,p3,p4,p5,p6,p7,p8,p9,0,0,0,1)
// headers for randvec
#pragma acc routine seq
void _randvec_target_circle(double *xo, double *yo, double *zo,
  double *solid_angle, double xi, double yi, double zi, double radius,
  _class_particle* _particle);
#pragma acc routine seq
void _randvec_target_rect_angular(double *xo, double *yo, double *zo,
  double *solid_angle, double xi, double yi, double zi, double height,
  double width, Rotation A,
  _class_particle* _particle);
#pragma acc routine seq
void _randvec_target_rect_real(double *xo, double *yo, double *zo, double *solid_angle,
  double xi, double yi, double zi, double height, double width, Rotation A,
  double lx, double ly, double lz, int order,
  _class_particle* _particle);


// this is the main()
int mccode_main(int argc, char *argv[]);


#endif /* !MCCODE_H */

#ifndef MCCODE_R_IO_H
#define MCCODE_R_IO_H "$Revision$"

#if (USE_NEXUS == 0)
#undef USE_NEXUS
#endif

#ifndef CHAR_BUF_LENGTH
#define CHAR_BUF_LENGTH 1024
#endif


/* I/O section part ========================================================= */

/* ========================================================================== */

/*                               MCCODE_R_IO_C                                */

/* ========================================================================== */


/* main DETECTOR structure which stores most information to write to data files */
struct mcdetector_struct {
  char   filename[CHAR_BUF_LENGTH];   /* file name of monitor */
  char   position[CHAR_BUF_LENGTH];   /* position of detector component */
  char   component[CHAR_BUF_LENGTH];  /* component instance name */
  char   instrument[CHAR_BUF_LENGTH]; /* instrument name */
  char   type[CHAR_BUF_LENGTH];       /* data type, e.g. 0d, 1d, 2d, 3d */
  char   user[CHAR_BUF_LENGTH];       /* user name, e.g. HOME */
  char   date[CHAR_BUF_LENGTH];       /* date of simulation end/write time */
  char   title[CHAR_BUF_LENGTH];      /* title of detector */
  char   xlabel[CHAR_BUF_LENGTH];     /* X axis label */
  char   ylabel[CHAR_BUF_LENGTH];     /* Y axis label */
  char   zlabel[CHAR_BUF_LENGTH];     /* Z axis label */
  char   xvar[CHAR_BUF_LENGTH];       /* X variable name */
  char   yvar[CHAR_BUF_LENGTH];       /* Y variable name */
  char   zvar[CHAR_BUF_LENGTH];       /* Z variable name */
  char   ncount[CHAR_BUF_LENGTH];     /* number of events initially generated */
  char   limits[CHAR_BUF_LENGTH];     /* X Y Z limits, e.g. [xmin xmax ymin ymax zmin zmax] */
  char   variables[CHAR_BUF_LENGTH];  /* variables written into data block */
  char   statistics[CHAR_BUF_LENGTH]; /* center, mean and half width along axis */
  char   signal[CHAR_BUF_LENGTH];     /* min max and mean of signal (data block) */
  char   values[CHAR_BUF_LENGTH];     /* integrated values e.g. [I I_err N] */
  double xmin,xmax;                   /* min max of axes */
  double ymin,ymax;
  double zmin,zmax;
  double intensity;                   /* integrated values for data block */
  double error;
  double events;
  double min;                         /* statistics for data block */
  double max;
  double mean;
  double centerX;                     /* statistics for axes */
  double halfwidthX;
  double centerY;
  double halfwidthY;
  int    rank;                        /* dimensionaly of monitor, e.g. 0 1 2 3 */
  char   istransposed;                /* flag to transpose matrix for some formats */

  long   m,n,p;                       /* dimensions of data block and along axes */
  long   date_l;                      /* same as date, but in sec since 1970 */

  double *p0, *p1, *p2;               /* pointers to saved data, NULL when freed */
  char   format[CHAR_BUF_LENGTH];    /* format for file generation */
};

typedef struct mcdetector_struct MCDETECTOR;

static   char *dirname             = NULL;      /* name of output directory */
static   char *siminfo_name        = "mccode";  /* default output sim file name */
char    *mcformat                    = NULL;      /* NULL (default) or a specific format */

/* file I/O definitions and function prototypes */

#ifndef MC_EMBEDDED_RUNTIME /* the mcstatic variables (from mccode-r.c) */
extern FILE * siminfo_file;     /* handle to the output siminfo file */
extern int    mcgravitation;      /* flag to enable gravitation */
extern int    mcdotrace;          /* flag to print MCDISPLAY messages */
#else
mcstatic FILE *siminfo_file        = NULL;
#endif

/* I/O function prototypes ================================================== */

// from msysgit: https://code.google.com/p/msysgit/source/browse/compat/strcasestr.c
char *strcasestr(const char *haystack, const char *needle);

/* output functions */
MCDETECTOR mcdetector_out_0D(char *t, double p0, double p1, double p2, char *c, Coords pos);
MCDETECTOR mcdetector_out_1D(char *t, char *xl, char *yl,
                  char *xvar, double x1, double x2, long n,
                  double *p0, double *p1, double *p2, char *f, char *c, Coords pos);
MCDETECTOR mcdetector_out_2D(char *t, char *xl, char *yl,
                  double x1, double x2, double y1, double y2, long m,
                  long n, double *p0, double *p1, double *p2, char *f,
                  char *c, Coords pos);
MCDETECTOR mcdetector_out_list(char *t, char *xl, char *yl,
                  long m, long n,
                  double *p1, char *f,
                  char *c, Coords posa);

/* wrappers to output functions, that automatically set NAME and POSITION */
#define DETECTOR_OUT(p0,p1,p2) mcdetector_out_0D(NAME_CURRENT_COMP,p0,p1,p2,NAME_CURRENT_COMP,POS_A_CURRENT_COMP)
#define DETECTOR_OUT_0D(t,p0,p1,p2) mcdetector_out_0D(t,p0,p1,p2,NAME_CURRENT_COMP,POS_A_CURRENT_COMP)
#define DETECTOR_OUT_1D(t,xl,yl,xvar,x1,x2,n,p0,p1,p2,f) \
     mcdetector_out_1D(t,xl,yl,xvar,x1,x2,n,p0,p1,p2,f,NAME_CURRENT_COMP,POS_A_CURRENT_COMP)
#define DETECTOR_OUT_2D(t,xl,yl,x1,x2,y1,y2,m,n,p0,p1,p2,f) \
     mcdetector_out_2D(t,xl,yl,x1,x2,y1,y2,m,n,p0,p1,p2,f,NAME_CURRENT_COMP,POS_A_CURRENT_COMP)

#ifdef USE_NEXUS
#include "napi.h"
NXhandle nxhandle;
#endif

#endif /* ndef MCCODE_R_IO_H */

#endif /* MCCODE_R_H */
/* End of file "mccode-r.h". */

/* embedding file "mcstas-r.h" */

/*******************************************************************************
*
* McStas, neutron ray-tracing package
*         Copyright (C) 1997-2009, All rights reserved
*         Risoe National Laboratory, Roskilde, Denmark
*         Institut Laue Langevin, Grenoble, France
*
* Runtime: share/mcstas-r.h
*
* %Identification
* Written by: KN
* Date:    Aug 29, 1997
* Release: McStas X.Y
* Version: $Revision$
*
* Runtime system header for McStas.
*
* In order to use this library as an external library, the following variables
* and macros must be declared (see details in the code)
*
*   struct mcinputtable_struct mcinputtable[];
*   int mcnumipar;
*   char instrument_name[], instrument_source[];
*   int traceenabled, defaultmain;
*   extern MCNUM  mccomp_storein[];
*   extern MCNUM  instrument.counter_AbsorbProp[];
*   extern MCNUM  mcScattered;
*   #define MCCODE_STRING "the McStas version"
*
* Usage: Automatically embbeded in the c code.
*
* $Id$
*
*******************************************************************************/

#ifndef MCSTAS_R_H
#define MCSTAS_R_H "$Revision$"

/* Following part is only embedded when not redundent with mcstas.h */

#ifndef MCCODE_H

#define AA2MS    629.622368        /* Convert k[1/AA] to v[m/s] */
#define MS2AA    1.58825361e-3     /* Convert v[m/s] to k[1/AA] */
#define K2V      AA2MS
#define V2K      MS2AA
#define Q2V      AA2MS
#define V2Q      MS2AA
#define SE2V     437.393377        /* Convert sqrt(E)[meV] to v[m/s] */
#define VS2E     5.22703725e-6     /* Convert (v[m/s])**2 to E[meV] */

#define SCATTER0 do {DEBUG_SCATTER(); SCATTERED++;} while(0)
#define SCATTER SCATTER0

#define JUMPTOCOMP(comp) mcneutron->_index = INDEX_COMP(comp);

#define MAGNET_ON \
  do { \
    mcMagnet = 1; \
  } while(0)

#define MAGNET_OFF \
  do { \
    mcMagnet = 0; \
  } while(0)

#define ALLOW_BACKPROP \
  do { \
    mcallowbackprop = 1; \
  } while(0)

#define DISALLOW_BACKPROP \
  do { \
    mcallowbackprop = 0; \
  } while(0)

#define PROP_MAGNET(dt) \
  do { \
  } while (0)
    /* change coordinates from local system to magnet system */
/*    Rotation rotLM, rotTemp; \
      Coords   posLM = coords_sub(POS_A_CURRENT_COMP, mcMagnetPos); \
      rot_transpose(ROT_A_CURRENT_COMP, rotTemp); \
      rot_mul(rotTemp, mcMagnetRot, rotLM); \
      mcMagnetPrecession(x, y, z, t, vx, vy, vz, \
               &sx, &sy, &sz, dt, posLM, rotLM); \
      } while(0)
*/

#define mcPROP_DT(dt) \
  do { \
    if (mcMagnet && dt > 0) PROP_MAGNET(dt);\
    x += vx*(dt); \
    y += vy*(dt); \
    z += vz*(dt); \
    t += (dt); \
    if (isnan(p) || isinf(p)) { ABSORB; }\
  } while(0)

/* ADD: E. Farhi, Aug 6th, 2001 PROP_GRAV_DT propagation with acceleration */
#define PROP_GRAV_DT(dt, Ax, Ay, Az) \
  do { \
    if(dt < 0 && mcallowbackprop == 0) { ABSORB; }\
    if (mcMagnet) /*printf("Spin precession gravity\n")*/; \
    x  += vx*(dt) + (Ax)*(dt)*(dt)/2; \
    y  += vy*(dt) + (Ay)*(dt)*(dt)/2; \
    z  += vz*(dt) + (Az)*(dt)*(dt)/2; \
    vx += (Ax)*(dt); \
    vy += (Ay)*(dt); \
    vz += (Az)*(dt); \
    t  += (dt); \
    DISALLOW_BACKPROP;\
  } while(0)


#define PROP_DT(dt) \
  do { \
    if(dt < 0) { RESTORE=1; ABSORB; }; \
    if (mcgravitation) { Coords mcLocG; double mc_gx, mc_gy, mc_gz; \
    mcLocG = rot_apply(ROT_A_CURRENT_COMP, coords_set(0,-GRAVITY,0)); \
    coords_get(mcLocG, &mc_gx, &mc_gy, &mc_gz); \
    PROP_GRAV_DT(dt, mc_gx, mc_gy, mc_gz); } \
    else mcPROP_DT(dt); \
    DISALLOW_BACKPROP;\
  } while(0)


#define PROP_Z0 \
  do { \
    if (mcgravitation) { Coords mcLocG; int mc_ret; \
    double mc_dt, mc_gx, mc_gy, mc_gz; \
    mcLocG = rot_apply(ROT_A_CURRENT_COMP, coords_set(0,-GRAVITY,0)); \
    coords_get(mcLocG, &mc_gx, &mc_gy, &mc_gz); \
    mc_ret = solve_2nd_order(&mc_dt, NULL, -mc_gz/2, -vz, -z); \
    if (mc_ret) {PROP_GRAV_DT(mc_dt, mc_gx, mc_gy, mc_gz); z=0;}\
    else if (mcallowbackprop == 0 && mc_dt < 0) { ABSORB; }; } \
    else mcPROP_Z0; \
    DISALLOW_BACKPROP;\
  } while(0)

#define mcPROP_Z0 \
  do { \
    double mc_dt; \
    if(vz == 0) { ABSORB; }; \
    mc_dt = -z/vz; \
    if(mc_dt < 0 && mcallowbackprop == 0) { ABSORB; }; \
    mcPROP_DT(mc_dt); \
    z = 0; \
    DISALLOW_BACKPROP;\
  } while(0)

#define PROP_X0 \
  do { \
    if (mcgravitation) { Coords mcLocG; int mc_ret; \
    double mc_dt, mc_gx, mc_gy, mc_gz; \
    mcLocG = rot_apply(ROT_A_CURRENT_COMP, coords_set(0,-GRAVITY,0)); \
    coords_get(mcLocG, &mc_gx, &mc_gy, &mc_gz); \
    mc_ret = solve_2nd_order(&mc_dt, NULL, -mc_gx/2, -vx, -x); \
    if (mc_ret) {PROP_GRAV_DT(mc_dt, mc_gx, mc_gy, mc_gz); x=0;}\
    else if (mcallowbackprop == 0 && mc_dt < 0) { ABSORB; }; } \
    else mcPROP_X0; \
    DISALLOW_BACKPROP;\
  } while(0)

#define mcPROP_X0 \
  do { \
    double mc_dt; \
    if(vx == 0) { ABSORB; }; \
    mc_dt = -x/vx; \
    if(mc_dt < 0 && mcallowbackprop == 0) { ABSORB; }; \
    mcPROP_DT(mc_dt); \
    x = 0; \
    DISALLOW_BACKPROP;\
  } while(0)

#define PROP_Y0 \
  do { \
    if (mcgravitation) { Coords mcLocG; int mc_ret; \
    double mc_dt, mc_gx, mc_gy, mc_gz; \
    mcLocG = rot_apply(ROT_A_CURRENT_COMP, coords_set(0,-GRAVITY,0)); \
    coords_get(mcLocG, &mc_gx, &mc_gy, &mc_gz); \
    mc_ret = solve_2nd_order(&mc_dt, NULL, -mc_gy/2, -vy, -y); \
    if (mc_ret) {PROP_GRAV_DT(mc_dt, mc_gx, mc_gy, mc_gz); y=0;}\
    else if (mcallowbackprop == 0 && mc_dt < 0) { ABSORB; }; } \
    else mcPROP_Y0; \
    DISALLOW_BACKPROP;\
  } while(0)


#define mcPROP_Y0 \
  do { \
    double mc_dt; \
    if(vy == 0) { ABSORB; }; \
    mc_dt = -y/vy; \
    if(mc_dt < 0 && mcallowbackprop == 0) { ABSORB; }; \
    mcPROP_DT(mc_dt); \
    y = 0; \
    DISALLOW_BACKPROP; \
  } while(0)


#ifdef DEBUG

#define DEBUG_STATE() if(!mcdotrace); else \
  printf("STATE: %g, %g, %g, %g, %g, %g, %g, %g, %g, %g, %g\n", \
         x,y,z,vx,vy,vz,t,sx,sy,sz,p);
#define DEBUG_SCATTER() if(!mcdotrace); else \
  printf("SCATTER: %g, %g, %g, %g, %g, %g, %g, %g, %g, %g, %g\n", \
         x,y,z,vx,vy,vz,t,sx,sy,sz,p);

#else

#define DEBUG_STATE()
#define DEBUG_SCATTER()

#endif

#endif /* !MCCODE_H */

#endif /* MCSTAS_R_H */
/* End of file "mcstas-r.h". */

/* embedding file "mccode-r.c" */

/*******************************************************************************
*
* McCode, neutron/xray ray-tracing package
*         Copyright (C) 1997-2009, All rights reserved
*         Risoe National Laboratory, Roskilde, Denmark
*         Institut Laue Langevin, Grenoble, France
*
* Runtime: share/mccode-r.c
*
* %Identification
* Written by: KN
* Date:    Aug 29, 1997
* Release: McStas X.Y/McXtrace X.Y
* Version: $Revision$
*
* Runtime system for McStas and McXtrace.
* Embedded within instrument in runtime mode.
* Contains SECTIONS:
*   MPI handling (sum, send, recv)
*   format definitions
*   I/O
*   mcdisplay support
*   random numbers
*   coordinates handling
*   vectors math (solve 2nd order, normals, randvec...)
*   parameter handling
*   signal and main handlers
*
* Usage: Automatically embbeded in the c code whenever required.
*
* $Id$
*
*******************************************************************************/

/*******************************************************************************
* The I/O format definitions and functions
*******************************************************************************/


/** Include header files to avoid implicit declarations (not allowed on LLVM) */
#include <ctype.h>
#include <sys/types.h>

// UNIX specific headers (non-Windows)
#if defined(__unix__) || defined(__APPLE__)
#include <unistd.h>
#include <sys/stat.h>
#endif


#ifndef DANSE
#ifdef MC_ANCIENT_COMPATIBILITY
int traceenabled = 0;
int defaultmain  = 0;
#endif
/* else defined directly in the McCode generated C code */

static   long mcseed                 = 0; /* seed for random generator */
#pragma acc declare create ( mcseed )
static   long mcstartdate            = 0; /* start simulation time */
static   int  mcdisable_output_files = 0; /* --no-output-files */
mcstatic int  mcgravitation          = 0; /* use gravitation flag, for PROP macros */
mcstatic int  mcdotrace              = 0; /* flag for --trace and messages for DISPLAY */
#pragma acc declare create ( mcdotrace )
int      mcallowbackprop             = 0;         /* flag to enable negative/backprop */

/* OpenACC-related segmentation parameters: */
int vecsize = 128;
int numgangs = 7813;
long gpu_innerloop = 2147483647;

/* Monitor_nD list/buffer-size default */
long MONND_BUFSIZ = 1000000;

/* Number of particle histories to simulate. */
#ifdef NEUTRONICS
mcstatic unsigned long long int mcncount             = 1;
mcstatic unsigned long long int mcrun_num            = 0;
#else
#ifdef MCDEFAULT_NCOUNT
mcstatic unsigned long long int mcncount             = MCDEFAULT_NCOUNT;
#else
mcstatic unsigned long long int mcncount             = 1000000;
#endif
#pragma acc declare create ( mcncount )
mcstatic unsigned long long int mcrun_num            = 0;
#pragma acc declare create ( mcrun_num )
#endif /* NEUTRONICS */

#else
#include "mcstas-globals.h"
#endif /* !DANSE */

#ifndef NX_COMPRESION
#define NX_COMPRESSION NX_COMP_NONE
#endif

/* String nullification on GPU and other replacements */
#ifdef OPENACC
int noprintf() {
  return 0;
}

int str_comp(char *str1, char *str2) {
  while (*str1 && *str1 == *str2) {
    str1++;
    str2++;
  }
  return (*str1 - *str2);
}

size_t str_len(const char *s)
{
  size_t len = 0;
  if(s != NULL)
  {
    while(*s != '\0')
    {
      ++len;
      ++s;
    }
  }
  return len;
}

#endif

/* SECTION: Predefine (component) parameters ================================= */

int nans_match(double a, double b){
  return (*(uint64_t*)&a == *(uint64_t*)&b);
}
int is_unset(double x){
  return nans_match(x, UNSET);
}
int is_set(double x){
  return !nans_match(x, UNSET);
}
int is_valid(double x){
  return !isnan(x)||is_unset(x);
}
int all_unset(int n, ...){
  va_list ptr;
  va_start(ptr, n);
  int ret=1;
  for (int i=0; i<n; ++i) if(is_set(va_arg(ptr, double))) ret=0;
  va_end(ptr);
  return ret;
}
int all_set(int n, ...){
  va_list ptr;
  va_start(ptr, n);
  int ret=1;
  for (int i=0; i<n; ++i) if(is_unset(va_arg(ptr, double))) ret=0;
  va_end(ptr);
  return ret;
}
int any_unset(int n, ...){
  va_list ptr;
  va_start(ptr, n);
  int ret=0;
  for (int i=0; i<n; ++i) if(is_unset(va_arg(ptr, double))) ret=1;
  va_end(ptr);
  return ret;
}
int any_set(int n, ...){
  va_list ptr;
  va_start(ptr, n);
  int ret=0;
  for (int i=0; i<n; ++i) if(is_set(va_arg(ptr, double))) ret=1;
  va_end(ptr);
  return ret;
}


/* SECTION: Dynamic Arrays ================================================== */
IArray1d create_iarr1d(int n){
  IArray1d arr2d;
  arr2d = calloc(n, sizeof(int));
  return arr2d;
}
void destroy_iarr1d(IArray1d a){
  free(a);
}

IArray2d create_iarr2d(int nx, int ny){
  IArray2d arr2d;
  arr2d = calloc(nx, sizeof(int *));

  int *p1;
  p1 = calloc(nx*ny, sizeof(int));

  int i;
  for (i=0; i<nx; i++){
    arr2d[i] = &(p1[i*ny]);
  }
  return arr2d;
}
void destroy_iarr2d(IArray2d a){
  free(a[0]);
  free(a);
}

IArray3d create_iarr3d(int nx, int ny, int nz){
  IArray3d arr3d;
  int i, j;

  // 1d
  arr3d = calloc(nx, sizeof(int **));

  // d2
  int **p1;
  p1 = calloc(nx*ny, sizeof(int *));

  for (i=0; i<nx; i++){
    arr3d[i] = &(p1[i*ny]);
  }

  // 3d
  int *p2;
  p2 = calloc(nx*ny*nz, sizeof(int));
  for (i=0; i<nx; i++){
    for (j=0; j<ny; j++){
      arr3d[i][j] = &(p2[(i*ny+j)*nz]);
    }
  }
  return arr3d;
}

void destroy_iarr3d(IArray3d a){
  free(a[0][0]);
  free(a[0]);
  free(a);
}

DArray1d create_darr1d(int n){
  DArray1d arr2d;
  arr2d = calloc(n, sizeof(double));
  return arr2d;
}

void destroy_darr1d(DArray1d a){
  free(a);
}

DArray2d create_darr2d(int nx, int ny){
  DArray2d arr2d;
  arr2d = calloc(nx, sizeof(double *));

  double *p1;
  p1 = calloc(nx*ny, sizeof(double));

  int i;
  for (i=0; i<nx; i++){
    arr2d[i] = &(p1[i*ny]);
  }
  return arr2d;
}

void destroy_darr2d(DArray2d a){
  free(a[0]);
  free(a);
}

DArray3d create_darr3d(int nx, int ny, int nz){
  DArray3d arr3d;

  int i, j;

  // 1d
  arr3d = calloc(nx, sizeof(double **));

  // d2
  double **p1;
  p1 = calloc(nx*ny, sizeof(double *));

  for (i=0; i<nx; i++){
    arr3d[i] = &(p1[i*ny]);
  }

  // 3d
  double *p2;
  p2 = calloc(nx*ny*nz, sizeof(double));
  for (i=0; i<nx; i++){
    for (j=0; j<ny; j++){
      arr3d[i][j] = &(p2[(i*ny+j)*nz]);
    }
  }
  return arr3d;
}

void destroy_darr3d(DArray3d a){
  free(a[0][0]);
  free(a[0]);
  free(a);
}


/* SECTION: MPI handling ==================================================== */

#ifdef USE_MPI
/* MPI rank */
static int mpi_node_rank;
static int mpi_node_root = 0;


/*******************************************************************************
* mc_MPI_Reduce: Gathers arrays from MPI nodes using Reduce function.
*******************************************************************************/
int mc_MPI_Sum(double *sbuf, long count)
{
  if (!sbuf || count <= 0) return(MPI_SUCCESS); /* nothing to reduce */
  else {
    /* we must cut the buffer into blocks not exceeding the MPI max buffer size of 32000 */
    long   offset=0;
    double *rbuf=NULL;
    int    length=MPI_REDUCE_BLOCKSIZE; /* defined in mccode-r.h */
    int    i=0;
    rbuf = calloc(count, sizeof(double));
    if (!rbuf)
      exit(-fprintf(stderr, "Error: Out of memory %li (mc_MPI_Sum)\n", count*sizeof(double)));
    while (offset < count) {
      if (!length || offset+length > count-1) length=count-offset;
      else length=MPI_REDUCE_BLOCKSIZE;
      if (MPI_Allreduce((double*)(sbuf+offset), (double*)(rbuf+offset),
              length, MPI_DOUBLE, MPI_SUM, MPI_COMM_WORLD) != MPI_SUCCESS)
        return MPI_ERR_COUNT;
      offset += length;
    }

    for (i=0; i<count; i++) sbuf[i] = rbuf[i];
    free(rbuf);
  }
  return MPI_SUCCESS;
} /* mc_MPI_Sum */

/*******************************************************************************
* mc_MPI_Send: Send array to MPI node by blocks to avoid buffer limit
*******************************************************************************/
int mc_MPI_Send(void *sbuf,
                  long count, MPI_Datatype dtype,
                  int dest)
{
  int dsize;
  long offset=0;
  int  tag=1;
  int  length=MPI_REDUCE_BLOCKSIZE; /* defined in mccode-r.h */

  if (!sbuf || count <= 0) return(MPI_SUCCESS); /* nothing to send */
  MPI_Type_size(dtype, &dsize);

  while (offset < count) {
    if (offset+length > count-1) length=count-offset;
    else length=MPI_REDUCE_BLOCKSIZE;
    if (MPI_Send((void*)(sbuf+offset*dsize), length, dtype, dest, tag++, MPI_COMM_WORLD) != MPI_SUCCESS)
      return MPI_ERR_COUNT;
    offset += length;
  }

  return MPI_SUCCESS;
} /* mc_MPI_Send */

/*******************************************************************************
* mc_MPI_Recv: Receives arrays from MPI nodes by blocks to avoid buffer limit
*             the buffer must have been allocated previously.
*******************************************************************************/
int mc_MPI_Recv(void *sbuf,
                  long count, MPI_Datatype dtype,
                  int source)
{
  int dsize;
  long offset=0;
  int  tag=1;
  int  length=MPI_REDUCE_BLOCKSIZE; /* defined in mccode-r.h */

  if (!sbuf || count <= 0) return(MPI_SUCCESS); /* nothing to recv */
  MPI_Type_size(dtype, &dsize);

  while (offset < count) {
    if (offset+length > count-1) length=count-offset;
    else length=MPI_REDUCE_BLOCKSIZE;
    if (MPI_Recv((void*)(sbuf+offset*dsize), length, dtype, source, tag++,
            MPI_COMM_WORLD, MPI_STATUS_IGNORE) != MPI_SUCCESS)
      return MPI_ERR_COUNT;
    offset += length;
  }

  return MPI_SUCCESS;
} /* mc_MPI_Recv */

#endif /* USE_MPI */

/* SECTION: parameters handling ============================================= */

/* Instrument input parameter type handling. */
/*******************************************************************************
* mcparm_double: extract double value from 's' into 'vptr'
*******************************************************************************/
static int
mcparm_double(char *s, void *vptr)
{
  char *p;
  double *v = (double *)vptr;

  if (!s) { *v = 0; return(1); }
  *v = strtod(s, &p);
  if(*s == '\0' || (p != NULL && *p != '\0') || errno == ERANGE)
    return 0;                        /* Failed */
  else
    return 1;                        /* Success */
}

/*******************************************************************************
* mcparminfo_double: display parameter type double
*******************************************************************************/
static char *
mcparminfo_double(char *parmname)
{
  return "double";
}

/*******************************************************************************
* mcparmerror_double: display error message when failed extract double
*******************************************************************************/
static void
mcparmerror_double(char *parm, char *val)
{
  fprintf(stderr, "Error: Invalid value '%s' for floating point parameter %s (mcparmerror_double)\n",
          val, parm);
}

/*******************************************************************************
* mcparmprinter_double: convert double to string
*******************************************************************************/
static void
mcparmprinter_double(char *f, void *vptr)
{
  double *v = (double *)vptr;
  sprintf(f, "%g", *v);
}

/*******************************************************************************
* mcparm_int: extract int value from 's' into 'vptr'
*******************************************************************************/
static int
mcparm_int(char *s, void *vptr)
{
  char *p;
  int *v = (int *)vptr;
  long x;

  if (!s) { *v = 0; return(1); }
  *v = 0;
  x = strtol(s, &p, 10);
  if(x < INT_MIN || x > INT_MAX)
    return 0;                        /* Under/overflow */
  *v = x;
  if(*s == '\0' || (p != NULL && *p != '\0') || errno == ERANGE)
    return 0;                        /* Failed */
  else
    return 1;                        /* Success */
}

/*******************************************************************************
* mcparminfo_int: display parameter type int
*******************************************************************************/
static char *
mcparminfo_int(char *parmname)
{
  return "int";
}

/*******************************************************************************
* mcparmerror_int: display error message when failed extract int
*******************************************************************************/
static void
mcparmerror_int(char *parm, char *val)
{
  fprintf(stderr, "Error: Invalid value '%s' for integer parameter %s (mcparmerror_int)\n",
          val, parm);
}

/*******************************************************************************
* mcparmprinter_int: convert int to string
*******************************************************************************/
static void
mcparmprinter_int(char *f, void *vptr)
{
  int *v = (int *)vptr;
  sprintf(f, "%d", *v);
}

/*******************************************************************************
* mcparm_string: extract char* value from 's' into 'vptr' (copy)
*******************************************************************************/
static int
mcparm_string(char *s, void *vptr)
{
  char **v = (char **)vptr;
  if (!s) { *v = NULL; return(1); }
  *v = (char *)malloc(strlen(s) + 1);
  if(*v == NULL)
  {
    exit(-fprintf(stderr, "Error: Out of memory %li (mcparm_string).\n", (long)strlen(s) + 1));
  }
  strcpy(*v, s);
  return 1;                        /* Success */
}

/*******************************************************************************
* mcparminfo_string: display parameter type string
*******************************************************************************/
static char *
mcparminfo_string(char *parmname)
{
  return "string";
}

/*******************************************************************************
* mcparmerror_string: display error message when failed extract string
*******************************************************************************/
static void
mcparmerror_string(char *parm, char *val)
{
  fprintf(stderr, "Error: Invalid value '%s' for string parameter %s (mcparmerror_string)\n",
          val, parm);
}

/*******************************************************************************
* mcparmprinter_string: convert string to string (including esc chars)
*******************************************************************************/
static void
mcparmprinter_string(char *f, void *vptr)
{
  char **v = (char **)vptr;
  char *p;

  if (!*v) { *f='\0'; return; }
  strcpy(f, "");
  for(p = *v; *p != '\0'; p++)
  {
    switch(*p)
    {
      case '\n':
        strcat(f, "\\n");
        break;
      case '\r':
        strcat(f, "\\r");
        break;
      case '"':
        strcat(f, "\\\"");
        break;
      case '\\':
        strcat(f, "\\\\");
        break;
      default:
        strncat(f, p, 1);
    }
  }
  /* strcat(f, "\""); */
} /* mcparmprinter_string */

/* now we may define the parameter structure, using previous functions */
static struct
  {
    int (*getparm)(char *, void *);
    char * (*parminfo)(char *);
    void (*error)(char *, char *);
    void (*printer)(char *, void *);
} mcinputtypes[] = {
  {
    mcparm_int, mcparminfo_int, mcparmerror_int,
    mcparmprinter_int
  }, {
    mcparm_string, mcparminfo_string, mcparmerror_string,
    mcparmprinter_string
  }, {
    mcparm_string, mcparminfo_string, mcparmerror_string,
    mcparmprinter_string
  }, {
    mcparm_double, mcparminfo_double, mcparmerror_double,
    mcparmprinter_double
  }, {
    mcparm_double, mcparminfo_double, mcparmerror_double,
    mcparmprinter_double
  }
};

/*******************************************************************************
* mcestimate_error: compute sigma from N,p,p2 in Gaussian large numbers approx
*******************************************************************************/
double mcestimate_error(double N, double p1, double p2)
{
  double pmean, n1;
  if(N <= 1)
    return p1;
  pmean = p1 / N;
  n1 = N - 1;
  /* Note: underflow may cause p2 to become zero; the fabs() below guards
     against this. */
  return sqrt((N/n1)*fabs(p2 - pmean*pmean));
}

double (*mcestimate_error_p)
  (double V2, double psum, double p2sum)=mcestimate_error;

/* ========================================================================== */

/*                               MCCODE_R_IO_C                                */

/* ========================================================================== */

#ifndef MCCODE_R_IO_C
#define MCCODE_R_IO_C "$Revision$"

/* SECTION: file i/o handling ================================================ */

#ifndef HAVE_STRCASESTR
// from msysgit: https://code.google.com/p/msysgit/source/browse/compat/strcasestr.c
char *strcasestr(const char *haystack, const char *needle)
{
  int nlen = strlen(needle);
  int hlen = strlen(haystack) - nlen + 1;
  int i;

  for (i = 0; i < hlen; i++) {
    int j;
    for (j = 0; j < nlen; j++) {
            unsigned char c1 = haystack[i+j];
            unsigned char c2 = needle[j];
            if (toupper(c1) != toupper(c2))
                    goto next;
    }
    return (char *) haystack + i;
  next:
    ;
  }
  return NULL;
}


#endif
#ifndef HAVE_STRCASECMP
int strcasecmp( const char *s1, const char *s2 )
{
  int c1, c2;
  do {
    c1 = tolower( (unsigned char) *s1++ );
    c2 = tolower( (unsigned char) *s2++ );
  } while (c1 == c2 && c1 != 0);
  return c2 > c1 ? -1 : c1 > c2;
}
#endif

#ifndef STRACPY
/* this is a replacement to strncpy, but ensures that the copy ends with NULL */
/* http://stracpy.blogspot.fr/2011/04/stracpy-strncpy-replacement.html */
#define STRACPY
char *stracpy(char *destination, const char *source, size_t amount)
{
        if (!destination || !source || !amount) return(NULL);
        while(amount--)
          if((*destination++ = *source++) == '\0') break;
        *destination = '\0';
        return destination;
}
#endif

/*******************************************************************************
* mcfull_file: allocates a full file name=dirname+file. Catenate extension if missing.
*******************************************************************************/
char *mcfull_file(char *name, char *ext)
{
  int   dirlen=0;
  char *mem   =NULL;

  dirlen = dirname ? strlen(dirname) : 0;
  mem = (char*)malloc(dirlen + strlen(name) + CHAR_BUF_LENGTH);
  if(!mem) {
    exit(-fprintf(stderr, "Error: Out of memory %li (mcfull_file)\n", (long)(dirlen + strlen(name) + 256)));
  }
  strcpy(mem, "");

  /* prepend directory name to path if name does not contain a path */
  if (dirlen > 0 && !strchr(name, MC_PATHSEP_C)) {
    strcat(mem, dirname);
    strcat(mem, MC_PATHSEP_S);
  } /* dirlen */

  strcat(mem, name);
  if (!strchr(name, '.') && ext && strlen(ext))
  { /* add extension if not in file name already */
    strcat(mem, ".");
    strcat(mem, ext);
  }
  return(mem);
} /* mcfull_file */

/*******************************************************************************
* mcnew_file: opens a new file within dirname if non NULL
*             the file is opened in "a" (append, create if does not exist)
*             the extension 'ext' is added if the file name does not include one.
*             the last argument is set to 0 if file did not exist, else to 1.
*******************************************************************************/
FILE *mcnew_file(char *name, char *ext, int *exists)
{
  char *mem;
  FILE *file=NULL;

  if (!name || strlen(name) == 0 || mcdisable_output_files) return(NULL);

  mem  = mcfull_file(name, ext); /* create dirname/name.ext */

  /* check for existence */
  file = fopen(mem, "r"); /* for reading -> fails if does not exist */
  if (file) {
    fclose(file);
    *exists=1;
  } else
    *exists=0;

  /* open the file for writing/appending */
#ifdef USE_NEXUS
  if (mcformat && strcasestr(mcformat, "NeXus")) {
    /* NXhandle nxhandle is defined in the .h with USE_NEXUS */
    NXaccess mode = (*exists ? NXACC_CREATE5 | NXACC_RDWR : NXACC_CREATE5);

    if (NXopen(mem, mode, &nxhandle) != NX_OK)
      file = NULL;
    else
      file = (FILE*)&nxhandle; /* to make it non NULL */
  } else
#endif
    file = fopen(mem, "a+");

  if(!file)
    fprintf(stderr, "Warning: could not open output file '%s' for %s (mcnew_file)\n",
      mem, *exists ? "append" : "create");
  free(mem);

  return file;
} /* mcnew_file */

/*******************************************************************************
* mcdetector_statistics: compute detector statistics, error bars, [x I I_err N] 1D
* RETURN:            updated detector structure
* Used by: detector_import
*******************************************************************************/
MCDETECTOR mcdetector_statistics(
  MCDETECTOR detector)
{

  if (!detector.p1 || !detector.m)
    return(detector);

  /* compute statistics and update MCDETECTOR structure ===================== */
  double sum_z  = 0, min_z  = 0, max_z  = 0;
  double fmon_x =0,  smon_x = 0, fmon_y =0, smon_y=0, mean_z=0;
  double Nsum=0, P2sum=0;

  double sum_xz = 0, sum_yz = 0, sum_x = 0, sum_y = 0, sum_x2z = 0, sum_y2z = 0;
  int    i,j;
  char   hasnan=0, hasinf=0;
  char   israw = ((char*)strcasestr(detector.format,"raw") != NULL);
  double *this_p1=NULL; /* new 1D McCode array [x I E N]. Freed after writing data */

  /* if McCode/PGPLOT and rank==1 we create a new m*4 data block=[x I E N] */
  if (detector.rank == 1 && strcasestr(detector.format,"McCode")) {
    this_p1 = (double *)calloc(detector.m*detector.n*detector.p*4, sizeof(double));
    if (!this_p1)
      exit(-fprintf(stderr, "Error: Out of memory creating %li 1D " MCCODE_STRING " data set for file '%s' (detector_import)\n",
        detector.m*detector.n*detector.p*4*sizeof(double*), detector.filename));
  }

  max_z = min_z = detector.p1[0];

  /* compute sum and moments (not for lists) */
  if (!strcasestr(detector.format,"list") && detector.m)
  for(j = 0; j < detector.n*detector.p; j++)
  {
    for(i = 0; i < detector.m; i++)
    {
      double x,y,z;
      double N, E;
      long   index= !detector.istransposed ? i*detector.n*detector.p + j : i+j*detector.m;
      char   hasnaninf=0;

      if (detector.m)
        x = detector.xmin + (i + 0.5)/detector.m*(detector.xmax - detector.xmin);
      else x = 0;
      if (detector.n && detector.p)
        y = detector.ymin + (j + 0.5)/detector.n/detector.p*(detector.ymax - detector.ymin);
      else y = 0;
      z = detector.p1[index];
      N = detector.p0 ? detector.p0[index] : 1;
      E = detector.p2 ? detector.p2[index] : 0;
      if (detector.p2 && !israw)
        detector.p2[index] = (*mcestimate_error_p)(detector.p0[index],detector.p1[index],detector.p2[index]); /* set sigma */

      if (detector.rank == 1 && this_p1 && strcasestr(detector.format,"McCode")) {
        /* fill-in 1D McCode array [x I E N] */
        this_p1[index*4]   = x;
        this_p1[index*4+1] = z;
        this_p1[index*4+2] = detector.p2 ? detector.p2[index] : 0;
        this_p1[index*4+3] = N;
      }

      if (isnan(z) || isnan(E) || isnan(N)) hasnaninf=hasnan=1;
      if (isinf(z) || isinf(E) || isinf(N)) hasnaninf=hasinf=1;

      /* compute stats integrals */
      if (!hasnaninf) {
        sum_xz += x*z;
        sum_yz += y*z;
        sum_x  += x;
        sum_y  += y;
        sum_z  += z;
        sum_x2z += x*x*z;
        sum_y2z += y*y*z;
        if (z > max_z) max_z = z;
        if (z < min_z) min_z = z;

        Nsum += N;
        P2sum += E;
      }

    }
  } /* for j */

  /* compute 1st and 2nd moments. For lists, sum_z=0 so this is skipped. */
  if (sum_z && detector.n*detector.m*detector.p)
  {
    fmon_x = sum_xz/sum_z;
    fmon_y = sum_yz/sum_z;
    smon_x = sum_x2z/sum_z-fmon_x*fmon_x; smon_x = smon_x > 0 ? sqrt(smon_x) : 0;
    smon_y = sum_y2z/sum_z-fmon_y*fmon_y; smon_y = smon_y > 0 ? sqrt(smon_y) : 0;
    mean_z = sum_z/detector.n/detector.m/detector.p;
  }
  /* store statistics into detector */
  detector.intensity = sum_z;
  detector.error     = Nsum ? (*mcestimate_error_p)(Nsum, sum_z, P2sum) : 0;
  detector.events    = Nsum;
  detector.min       = min_z;
  detector.max       = max_z;
  detector.mean      = mean_z;
  detector.centerX   = fmon_x;
  detector.halfwidthX= smon_x;
  detector.centerY   = fmon_y;
  detector.halfwidthY= smon_y;

  /* if McCode/PGPLOT and rank==1 replace p1 with new m*4 1D McCode and clear others */
  if (detector.rank == 1 && this_p1 && strcasestr(detector.format,"McCode")) {

    detector.p1 = this_p1;
    detector.n  = detector.m; detector.m  = 4;
    detector.p0 = detector.p2 = NULL;
    detector.istransposed = 1;
  }

  if (detector.n*detector.m*detector.p > 1)
    snprintf(detector.signal, CHAR_BUF_LENGTH,
      "Min=%g; Max=%g; Mean=%g;", detector.min, detector.max, detector.mean);
  else
    strcpy(detector.signal, "None");
  snprintf(detector.values, CHAR_BUF_LENGTH,
    "%g %g %g", detector.intensity, detector.error, detector.events);

  switch (detector.rank) {
    case 1:  snprintf(detector.statistics, CHAR_BUF_LENGTH, "X0=%g; dX=%g;",
      detector.centerX, detector.halfwidthX); break;
    case 2:
    case 3:  snprintf(detector.statistics, CHAR_BUF_LENGTH, "X0=%g; dX=%g; Y0=%g; dY=%g;",
      detector.centerX, detector.halfwidthX, detector.centerY, detector.halfwidthY);
      break;
    default: strcpy(detector.statistics, "None");
  }

  if (hasnan)
    printf("WARNING: Nan detected in component/file %s %s\n",
      detector.component, strlen(detector.filename) ? detector.filename : "");
  if (hasinf)
    printf("WARNING: Inf detected in component/file %s %s\n",
      detector.component, strlen(detector.filename) ? detector.filename : "");

  return(detector);

} /* mcdetector_statistics */

/*******************************************************************************
* detector_import: build detector structure, merge non-lists from MPI
*                    compute basic stat, write "Detector:" line
* RETURN:            detector structure. Invalid data if detector.p1 == NULL
*                    Invalid detector sets m=0 and filename=""
*                    Simulation data  sets m=0 and filename=siminfo_name
* This function is equivalent to the old 'mcdetector_out', returning a structure
*******************************************************************************/
MCDETECTOR detector_import(
  char *format,
  char *component, char *title,
  long m, long n,  long p,
  char *xlabel, char *ylabel, char *zlabel,
  char *xvar, char *yvar, char *zvar,
  double x1, double x2, double y1, double y2, double z1, double z2,
  char *filename,
  double *p0, double *p1, double *p2,
  Coords position)
{
  time_t t;       /* for detector.date */
  long   date_l;  /* date as a long number */
  char   istransposed=0;
  char   c[CHAR_BUF_LENGTH]; /* temp var for signal label */

  MCDETECTOR detector;

  /* build MCDETECTOR structure ============================================= */
  /* make sure we do not have NULL for char fields */

  /* these also apply to simfile */
  strncpy (detector.filename,  filename ? filename : "",        CHAR_BUF_LENGTH);
  strncpy (detector.format,    format   ? format   : "McCode" , CHAR_BUF_LENGTH);
  /* add extension if missing */
  if (strlen(detector.filename) && !strchr(detector.filename, '.'))
  { /* add extension if not in file name already */
    strcat(detector.filename, ".dat");
  }
  strncpy (detector.component, component ? component : MCCODE_STRING " component", CHAR_BUF_LENGTH);

  snprintf(detector.instrument, CHAR_BUF_LENGTH, "%s (%s)", instrument_name, instrument_source);
  snprintf(detector.user, CHAR_BUF_LENGTH,      "%s on %s",
        getenv("USER") ? getenv("USER") : MCCODE_NAME,
        getenv("HOST") ? getenv("HOST") : "localhost");
  time(&t);         /* get current write time */
  date_l = (long)t; /* same but as a long */
  snprintf(detector.date, CHAR_BUF_LENGTH, "%s", ctime(&t));
  if (strlen(detector.date))   detector.date[strlen(detector.date)-1] = '\0'; /* remove last \n in date */
  detector.date_l = date_l;

  if (!mcget_run_num() || mcget_run_num() >= mcget_ncount())
    snprintf(detector.ncount, CHAR_BUF_LENGTH, "%llu", mcget_ncount()
#ifdef USE_MPI
*mpi_node_count
#endif
  );
  else
    snprintf(detector.ncount, CHAR_BUF_LENGTH, "%g/%g", (double)mcget_run_num(), (double)mcget_ncount());

  detector.p0         = p0;
  detector.p1         = p1;
  detector.p2         = p2;

  /* handle transposition (not for NeXus) */
  if (!strcasestr(detector.format, "NeXus")) {
    if (m<0 || n<0 || p<0)             istransposed = !istransposed;
    if (strcasestr(detector.format, "transpose")) istransposed = !istransposed;
    if (istransposed) { /* do the swap once for all */
      long i=m; m=n; n=i;
    }
  }

  m=labs(m); n=labs(n); p=labs(p); /* make sure dimensions are positive */
  detector.istransposed = istransposed;

  /* determine detector rank (dimensionality) */
  if (!m || !n || !p || !p1) detector.rank = 4; /* invalid: exit with m=0 filename="" */
  else if (m*n*p == 1)       detector.rank = 0; /* 0D */
  else if (n == 1 || m == 1) detector.rank = 1; /* 1D */
  else if (p == 1)           detector.rank = 2; /* 2D */
  else                       detector.rank = 3; /* 3D */

  /* from rank, set type */
  switch (detector.rank) {
    case 0:  strcpy(detector.type,  "array_0d"); m=n=p=1; break;
    case 1:  snprintf(detector.type, CHAR_BUF_LENGTH, "array_1d(%ld)", m*n*p); m *= n*p; n=p=1; break;
    case 2:  snprintf(detector.type, CHAR_BUF_LENGTH, "array_2d(%ld, %ld)", m, n*p); n *= p; p=1; break;
    case 3:  snprintf(detector.type, CHAR_BUF_LENGTH, "array_3d(%ld, %ld, %ld)", m, n, p); break;
    default: m=0; strcpy(detector.type, ""); strcpy(detector.filename, "");/* invalid */
  }

  detector.m    = m;
  detector.n    = n;
  detector.p    = p;

  /* these only apply to detector files ===================================== */

  snprintf(detector.position, CHAR_BUF_LENGTH, "%g %g %g", position.x, position.y, position.z);
  /* may also store actual detector orientation in the future */

  strncpy(detector.title,      title && strlen(title) ? title : component,       CHAR_BUF_LENGTH);
  strncpy(detector.xlabel,     xlabel && strlen(xlabel) ? xlabel : "X", CHAR_BUF_LENGTH); /* axis labels */
  strncpy(detector.ylabel,     ylabel && strlen(ylabel) ? ylabel : "Y", CHAR_BUF_LENGTH);
  strncpy(detector.zlabel,     zlabel && strlen(zlabel) ? zlabel : "Z", CHAR_BUF_LENGTH);
  strncpy(detector.xvar,       xvar && strlen(xvar) ? xvar :       "x", CHAR_BUF_LENGTH); /* axis variables */
  strncpy(detector.yvar,       yvar && strlen(yvar) ? yvar :       detector.xvar, CHAR_BUF_LENGTH);
  strncpy(detector.zvar,       zvar && strlen(zvar) ? zvar :       detector.yvar, CHAR_BUF_LENGTH);

  /* set "variables" as e.g. "I I_err N" */
  strcpy(c, "I ");
  if (strlen(detector.zvar))      strncpy(c, detector.zvar,32);
  else if (strlen(detector.yvar)) strncpy(c, detector.yvar,32);
  else if (strlen(detector.xvar)) strncpy(c, detector.xvar,32);

  if (detector.rank == 1)
    snprintf(detector.variables, CHAR_BUF_LENGTH, "%s %s %s_err N", detector.xvar, c, c);
  else
    snprintf(detector.variables, CHAR_BUF_LENGTH, "%s %s_err N", c, c);

  /* limits */
  detector.xmin = x1;
  detector.xmax = x2;
  detector.ymin = y1;
  detector.ymax = y2;
  detector.zmin = z1;
  detector.zmax = z2;
  if (abs(detector.rank) == 1)
    snprintf(detector.limits, CHAR_BUF_LENGTH, "%g %g", x1, x2);
  else if (detector.rank == 2)
    snprintf(detector.limits, CHAR_BUF_LENGTH, "%g %g %g %g", x1, x2, y1, y2);
  else
    snprintf(detector.limits, CHAR_BUF_LENGTH, "%g %g %g %g %g %g", x1, x2, y1, y2, z1, z2);

  /* if MPI and nodes_nb > 1: reduce data sets when using MPI =============== */
#ifdef USE_MPI
  if (!strcasestr(detector.format,"list") && mpi_node_count > 1 && m) {
    /* we save additive data: reduce everything into mpi_node_root */
    if (p0) mc_MPI_Sum(p0, m*n*p);
    if (p1) mc_MPI_Sum(p1, m*n*p);
    if (p2) mc_MPI_Sum(p2, m*n*p);
    if (!p0) {  /* additive signal must be then divided by the number of nodes */
      int i;
      for (i=0; i<m*n*p; i++) {
        p1[i] /= mpi_node_count;
        if (p2) p2[i] /= mpi_node_count;
      }
    }
  }
#endif /* USE_MPI */

  /* compute statistics, Nsum, intensity, Error bars */
  detector = mcdetector_statistics(detector);

#ifdef USE_MPI
  /* slaves are done */
  if(mpi_node_rank != mpi_node_root) {
    return detector;
  }
#endif

  /* output "Detector:" line ================================================ */
  /* when this is a detector written by a component (not the SAVE from instrument),
     not an event lists */
  if (!m) return(detector);
  if (!strcasestr(detector.format,"list")) {
    if (!strcmp(detector.component, instrument_name)) {
      if (strlen(detector.filename))  /* we name it from its filename, or from its title */
        strncpy(c, detector.filename, CHAR_BUF_LENGTH);
      else
        snprintf(c, CHAR_BUF_LENGTH, "%s", instrument_name);
    } else
      strncpy(c, detector.component, CHAR_BUF_LENGTH);  /* usual detectors written by components */

    printf("Detector: %s_I=%g %s_ERR=%g %s_N=%g",
           c, detector.intensity,
           c, detector.error,
           c, detector.events);
    printf(" \"%s\"\n", strlen(detector.filename) ? detector.filename : detector.component);
  }


  return(detector);
} /* detector_import */

/* end MCDETECTOR import section ============================================ */

















/* ========================================================================== */

/*                               ASCII output                                 */
/*     The SIM file is YAML based, the data files have '#' headers            */

/* ========================================================================== */


/*******************************************************************************
* mcinfo_out: output instrument tags/info (only in SIM)
* Used in: siminfo_init (ascii), mcinfo(stdout)
*******************************************************************************/
static void mcinfo_out(char *pre, FILE *f)
{
  char Parameters[CHAR_BUF_LENGTH] = "";
  int  i;

  if (!f || mcdisable_output_files) return;

  /* create parameter string ================================================ */
  for(i = 0; i < numipar; i++)
  {
    char ThisParam[CHAR_BUF_LENGTH];
    if (strlen(mcinputtable[i].name) > CHAR_BUF_LENGTH) break;
    snprintf(ThisParam, CHAR_BUF_LENGTH, " %s(%s)", mcinputtable[i].name,
            (*mcinputtypes[mcinputtable[i].type].parminfo)
                (mcinputtable[i].name));
    strcat(Parameters, ThisParam);
    if (strlen(Parameters) >= CHAR_BUF_LENGTH-64) break;
  }

  /* output data ============================================================ */
  if (f != stdout)
    fprintf(f, "%sFile: %s%c%s\n",    pre, dirname, MC_PATHSEP_C, siminfo_name);
  else
    fprintf(f, "%sCreator: %s\n",     pre, MCCODE_STRING);

  fprintf(f, "%sSource: %s\n",   pre, instrument_source);
  fprintf(f, "%sParameters: %s\n",    pre, Parameters);

  fprintf(f, "%sTrace_enabled: %s\n", pre, traceenabled ? "yes" : "no");
  fprintf(f, "%sDefault_main: %s\n",  pre, defaultmain ?  "yes" : "no");
  fprintf(f, "%sEmbedded_runtime: %s\n", pre,
#ifdef MC_EMBEDDED_RUNTIME
         "yes"
#else
         "no"
#endif
         );

  fflush(f);
} /* mcinfo_out */

/*******************************************************************************
* mcruninfo_out: output simulation tags/info (both in SIM and data files)
* Used in: siminfo_init (ascii case), mcdetector_out_xD_ascii
*******************************************************************************/
static void mcruninfo_out(char *pre, FILE *f)
{
  int i;
  char Parameters[CHAR_BUF_LENGTH];

  if (!f || mcdisable_output_files) return;

  fprintf(f, "%sFormat: %s%s\n",      pre,
    mcformat && strlen(mcformat) ? mcformat : MCCODE_NAME,
    mcformat && strcasestr(mcformat,"McCode") ? " with text headers" : "");
  fprintf(f, "%sURL: %s\n",         pre, "http://www.mccode.org");
  fprintf(f, "%sCreator: %s\n",     pre, MCCODE_STRING);
  fprintf(f, "%sInstrument: %s\n", pre, instrument_source);
  fprintf(f, "%sNcount: %llu\n",        pre, mcget_ncount());
  fprintf(f, "%sTrace: %s\n",       pre, mcdotrace ? "yes" : "no");
  fprintf(f, "%sGravitation: %s\n", pre, mcgravitation ? "yes" : "no");
  snprintf(Parameters, CHAR_BUF_LENGTH, "%ld", mcseed);
  fprintf(f, "%sSeed: %s\n",        pre, Parameters);
  fprintf(f, "%sDirectory: %s\n",        pre, dirname ? dirname : ".");
#ifdef USE_MPI
  if (mpi_node_count > 1)
    fprintf(f, "%sNodes: %i\n",        pre, mpi_node_count);
#endif

  /* output parameter string ================================================ */
  for(i = 0; i < numipar; i++) {
      if (mcinputtable[i].par){
	/* Parameters with a default value */
	if(mcinputtable[i].val && strlen(mcinputtable[i].val)){
	  (*mcinputtypes[mcinputtable[i].type].printer)(Parameters, mcinputtable[i].par);
	  fprintf(f, "%sParam: %s=%s\n", pre, mcinputtable[i].name, Parameters);
        /* ... and those without */
	}else{
	  fprintf(f, "%sParam: %s=NULL\n", pre, mcinputtable[i].name);
	}
      }
  }
  fflush(f);
} /* mcruninfo_out */

/*******************************************************************************
* siminfo_out:    wrapper to fprintf(siminfo_file)
*******************************************************************************/
void siminfo_out(char *format, ...)
{
  va_list ap;

  if(siminfo_file && !mcdisable_output_files)
  {
    va_start(ap, format);
    vfprintf(siminfo_file, format, ap);
    va_end(ap);
  }
} /* siminfo_out */


/*******************************************************************************
* mcdatainfo_out: output detector header
*   mcdatainfo_out(prefix, file_handle, detector) writes info to data file
*******************************************************************************/
static void
mcdatainfo_out(char *pre, FILE *f, MCDETECTOR detector)
{
  if (!f || !detector.m || mcdisable_output_files) return;

  /* output data ============================================================ */
  fprintf(f, "%sDate: %s (%li)\n",       pre, detector.date, detector.date_l);
  fprintf(f, "%stype: %s\n",       pre, detector.type);
  fprintf(f, "%sSource: %s\n",     pre, detector.instrument);
  fprintf(f, "%scomponent: %s\n",  pre, detector.component);
  fprintf(f, "%sposition: %s\n",   pre, detector.position);

  fprintf(f, "%stitle: %s\n",      pre, detector.title);
  fprintf(f, !mcget_run_num() || mcget_run_num() >= mcget_ncount() ?
             "%sNcount: %s\n" :
             "%sratio: %s\n",  pre, detector.ncount);

  if (strlen(detector.filename)) {
    fprintf(f, "%sfilename: %s\n", pre, detector.filename);
  }

  fprintf(f, "%sstatistics: %s\n", pre, detector.statistics);
  fprintf(f, "%ssignal: %s\n",     pre, detector.signal);
  fprintf(f, "%svalues: %s\n",     pre, detector.values);

  if (detector.rank >= 1)
  {
    fprintf(f, "%sxvar: %s\n",     pre, detector.xvar);
    fprintf(f, "%syvar: %s\n",     pre, detector.yvar);
    fprintf(f, "%sxlabel: %s\n",   pre, detector.xlabel);
    fprintf(f, "%sylabel: %s\n",   pre, detector.ylabel);
    if (detector.rank > 1) {
      fprintf(f, "%szvar: %s\n",   pre, detector.zvar);
      fprintf(f, "%szlabel: %s\n", pre, detector.zlabel);
    }
  }

  fprintf(f,
    abs(detector.rank)==1 ?
             "%sxlimits: %s\n" :
             "%sxylimits: %s\n", pre, detector.limits);
  fprintf(f, "%svariables: %s\n", pre,
    strcasestr(detector.format, "list") ? detector.ylabel : detector.variables);

  fflush(f);

} /* mcdatainfo_out */

/* mcdetector_out_array_ascii: output a single array to a file
 *   m: columns
 *   n: rows
 *   p: array
 *   f: file handle (already opened)
 */
static void mcdetector_out_array_ascii(long m, long n, double *p, FILE *f, char istransposed)
{
  if(f)
  {
    int i,j;
    for(j = 0; j < n; j++)
    {
      for(i = 0; i < m; i++)
      {
          fprintf(f, "%.10g ", p[!istransposed ? i*n + j : j*m+i]);
      }
      fprintf(f,"\n");
    }
  }
} /* mcdetector_out_array_ascii */

/*******************************************************************************
* mcdetector_out_0D_ascii: called by mcdetector_out_0D for ascii output
*******************************************************************************/
MCDETECTOR mcdetector_out_0D_ascii(MCDETECTOR detector)
{
  int exists=0;
  FILE *outfile = NULL;

  /* Write data set information to simulation description file. */
  MPI_MASTER(
    siminfo_out("\nbegin data\n"); // detector.component
    mcdatainfo_out("  ", siminfo_file, detector);
    siminfo_out("end data\n");
    /* Don't write if filename is NULL: mcnew_file handles this (return NULL) */
    outfile = mcnew_file(detector.component, "dat", &exists);
    if(outfile)
    {
      /* write data file header and entry in simulation description file */
      mcruninfo_out( "# ", outfile);
      mcdatainfo_out("# ", outfile, detector);
      /* write I I_err N */
      fprintf(outfile, "%g %g %g\n",
        detector.intensity, detector.error, detector.events);
      fclose(outfile);
    }
  ); /* MPI_MASTER */
  return(detector);
} /* mcdetector_out_0D_ascii */

/*******************************************************************************
* mcdetector_out_1D_ascii: called by mcdetector_out_1D for ascii output
*******************************************************************************/
MCDETECTOR mcdetector_out_1D_ascii(MCDETECTOR detector)
{
  int exists=0;
  FILE *outfile = NULL;

  MPI_MASTER(
    /* Write data set information to simulation description file. */
    siminfo_out("\nbegin data\n"); // detector.filename
    mcdatainfo_out("  ", siminfo_file, detector);
    siminfo_out("end data\n");
    /* Loop over array elements, writing to file. */
    /* Don't write if filename is NULL: mcnew_file handles this (return NULL) */
    outfile = mcnew_file(detector.filename, "dat", &exists);
    if(outfile)
    {
      /* write data file header and entry in simulation description file */
      mcruninfo_out( "# ", outfile);
      mcdatainfo_out("# ", outfile, detector);
      /* output the 1D array columns */
      mcdetector_out_array_ascii(detector.m, detector.n, detector.p1, outfile, detector.istransposed);

      fclose(outfile);
    }
  ); /* MPI_MASTER */
  return(detector);

}  /* mcdetector_out_1D_ascii */

/*******************************************************************************
* mcdetector_out_2D_ascii: called by mcdetector_out_2D for ascii output
*******************************************************************************/
MCDETECTOR mcdetector_out_2D_ascii(MCDETECTOR detector)
{
  int exists=0;
  FILE *outfile = NULL;

  MPI_MASTER(
    /* Loop over array elements, writing to file. */
    /* Don't write if filename is NULL: mcnew_file handles this (return NULL) */
    outfile = mcnew_file(detector.filename, "dat", &exists);
    if(outfile)
    {
      /* write header only if file has just been created (not appending) */
      if (!exists) {
        /* Write data set information to simulation description file. */
        siminfo_out("\nbegin data\n"); // detector.filename
        mcdatainfo_out("  ", siminfo_file, detector);
        siminfo_out("end data\n");

        mcruninfo_out( "# ", outfile);
        mcdatainfo_out("# ", outfile,   detector);
        fprintf(outfile, "# Data [%s/%s] %s:\n", detector.component, detector.filename, detector.zvar);
      }
      mcdetector_out_array_ascii(detector.m, detector.n*detector.p, detector.p1,
        outfile, detector.istransposed);
      if (detector.p2) {
        fprintf(outfile, "# Errors [%s/%s] %s_err:\n", detector.component, detector.filename, detector.zvar);
        mcdetector_out_array_ascii(detector.m, detector.n*detector.p, detector.p2,
          outfile, detector.istransposed);
      }
      if (detector.p0) {
        fprintf(outfile, "# Events [%s/%s] N:\n", detector.component, detector.filename);
        mcdetector_out_array_ascii(detector.m, detector.n*detector.p, detector.p0,
          outfile, detector.istransposed);
      }
      fclose(outfile);

      if (!exists) {
        if (strcasestr(detector.format, "list"))
          printf("Events:   \"%s\"\n",
            strlen(detector.filename) ? detector.filename : detector.component);
      }
    } /* if outfile */
  ); /* MPI_MASTER */
#ifdef USE_MPI
  if (strcasestr(detector.format, "list") && mpi_node_count > 1) {
    int node_i=0;
    /* loop along MPI nodes to write sequentially */
    for(node_i=0; node_i<mpi_node_count; node_i++) {
      /* MPI: slaves wait for the master to write its block, then append theirs */
      MPI_Barrier(MPI_COMM_WORLD);
      if (node_i != mpi_node_root && node_i == mpi_node_rank) {
        if(strlen(detector.filename) && !mcdisable_output_files)	/* Don't write if filename is NULL */
          outfile = mcnew_file(detector.filename, "dat", &exists);
        if (!exists)
          fprintf(stderr, "Warning: [MPI node %i] file '%s' does not exist yet, "
                          "MASTER should have opened it before.\n",
            mpi_node_rank, detector.filename);
        if(outfile) {
          mcdetector_out_array_ascii(detector.m, detector.n*detector.p, detector.p1,
            outfile, detector.istransposed);
          fclose(outfile);
        }
      }
    }
  } /* if strcasestr list */
#endif
  return(detector);
} /* mcdetector_out_2D_ascii */

/*******************************************************************************
* strcpy_valid: makes a valid string for variable names.
*   copy 'original' into 'valid', replacing invalid characters by '_'
*   char arrays must be pre-allocated
*******************************************************************************/
static char *strcpy_valid(char *valid, char *original)
{
  long i;
  int  n=CHAR_BUF_LENGTH; /* max length of valid names */

  if (original == NULL || !strlen(original)) return(NULL);

  if (n > strlen(original)) n = strlen(original);
  else original += strlen(original)-n;
  strncpy(valid, original, n);

  for (i=0; i < n; i++)
  {
    if ( (valid[i] > 122)
      || (valid[i] < 32)
      || (strchr("!\"#$%&'()*+,-.:;<=>?@[\\]^`/ \n\r\t", valid[i]) != NULL) )
    {
      if (i) valid[i] = '_'; else valid[i] = 'm';
    }
  }
  valid[i] = '\0';

  return(valid);
} /* strcpy_valid */

/* end ascii output section ================================================= */







#ifdef USE_NEXUS

/* ========================================================================== */

/*                               NeXus output                                 */

/* ========================================================================== */

#define nxprintf(...)    nxstr('d', __VA_ARGS__)
#define nxprintattr(...) nxstr('a', __VA_ARGS__)

/*******************************************************************************
* nxstr: output a tag=value data set (char) in NeXus/current group
*   when 'format' is larger that 1024 chars it is used as value for the 'tag'
*   else the value is assembled with format and following arguments.
*   type='d' -> data set
*        'a' -> attribute for current data set
*******************************************************************************/
static int nxstr(char type, NXhandle *f, char *tag, char *format, ...)
{
  va_list ap;
  char value[CHAR_BUF_LENGTH];
  int  i;
  int  ret=NX_OK;

  if (!tag || !format || !strlen(tag) || !strlen(format)) return(NX_OK);

  /* assemble the value string */
  if (strlen(format) < CHAR_BUF_LENGTH) {
    va_start(ap, format);
    ret = vsnprintf(value, CHAR_BUF_LENGTH, format, ap);
    va_end(ap);

    i = strlen(value);
  } else {
    i = strlen(format);
  }

  if (type == 'd') {
    /* open/put/close data set */
    if (NXmakedata (f, tag, NX_CHAR, 1, &i) != NX_OK) return(NX_ERROR);
    NXopendata (f, tag);
    if (strlen(format) < CHAR_BUF_LENGTH)
      ret = NXputdata  (f, value);
    else
      ret = NXputdata  (f, format);
    NXclosedata(f);
  } else {
    if (strlen(format) < CHAR_BUF_LENGTH)
      ret = NXputattr  (f, tag, value, strlen(value), NX_CHAR);
    else
      ret = NXputattr  (f, tag, format, strlen(format), NX_CHAR);
  }

  return(ret);

} /* nxstr */

/*******************************************************************************
* mcinfo_readfile: read a full file into a string buffer which is allocated
*   Think to free the buffer after use.
* Used in: mcinfo_out_nexus (nexus)
*******************************************************************************/
char *mcinfo_readfile(char *filename)
{
  FILE *f = fopen(filename, "rb");
  if (!f) return(NULL);
  fseek(f, 0, SEEK_END);
  long fsize = ftell(f);
  rewind(f);
  char *string = malloc(fsize + 1);
  if (string) {
    int n = fread(string, fsize, 1, f);
    fclose(f);

    string[fsize] = 0;
  }
  return(string);
}

/*******************************************************************************
* mcinfo_out: output instrument/simulation groups in NeXus file
* Used in: siminfo_init (nexus)
*******************************************************************************/
static void mcinfo_out_nexus(NXhandle f)
{
  FILE  *fid;     /* for intrument source code/C/IDF */
  char  *buffer=NULL;
  time_t t     =time(NULL); /* for date */
  char   entry0[CHAR_BUF_LENGTH];
  int    count=0;
  char   name[CHAR_BUF_LENGTH];
  char   class[CHAR_BUF_LENGTH];

  if (!f || mcdisable_output_files) return;

  /* write NeXus NXroot attributes */
  /* automatically added: file_name, HDF5_Version, file_time, NeXus_version */
  nxprintattr(f, "creator",   "%s generated with " MCCODE_STRING, instrument_name);

  /* count the number of existing NXentry and create the next one */
  NXgetgroupinfo(f, &count, name, class);
  sprintf(entry0, "entry%i", count+1);

  /* create the main NXentry (mandatory in NeXus) */
  if (NXmakegroup(f, entry0, "NXentry") == NX_OK)
  if (NXopengroup(f, entry0, "NXentry") == NX_OK) {

    nxprintf(nxhandle, "program_name", MCCODE_STRING);
    nxprintf(f, "start_time", ctime(&t));
    nxprintf(f, "title", "%s%s%s simulation generated by instrument %s",
      dirname && strlen(dirname) ? dirname : ".", MC_PATHSEP_S, siminfo_name,
      instrument_name);
    nxprintattr(f, "program_name", MCCODE_STRING);
    nxprintattr(f, "instrument",   instrument_name);
    nxprintattr(f, "simulation",   "%s%s%s",
        dirname && strlen(dirname) ? dirname : ".", MC_PATHSEP_S, siminfo_name);

    /* write NeXus instrument group */
    if (NXmakegroup(f, "instrument", "NXinstrument") == NX_OK)
    if (NXopengroup(f, "instrument", "NXinstrument") == NX_OK) {
      int   i;
      char *string=NULL;

      /* write NeXus parameters(types) data =================================== */
      string = (char*)malloc(CHAR_BUF_LENGTH);
      if (string) {
        strcpy(string, "");
        for(i = 0; i < numipar; i++)
        {
          char ThisParam[CHAR_BUF_LENGTH];
          snprintf(ThisParam, CHAR_BUF_LENGTH, " %s(%s)", mcinputtable[i].name,
                  (*mcinputtypes[mcinputtable[i].type].parminfo)
                      (mcinputtable[i].name));
          if (strlen(string) + strlen(ThisParam) < CHAR_BUF_LENGTH)
            strcat(string, ThisParam);
        }
        nxprintattr(f, "Parameters",    string);
        free(string);
      }

      nxprintattr(f, "name",          instrument_name);
      nxprintf   (f, "name",          instrument_name);
      nxprintattr(f, "Source",        instrument_source);

      nxprintattr(f, "Trace_enabled", traceenabled ? "yes" : "no");
      nxprintattr(f, "Default_main",  defaultmain ?  "yes" : "no");
      nxprintattr(f, "Embedded_runtime",
  #ifdef MC_EMBEDDED_RUNTIME
           "yes"
  #else
           "no"
  #endif
           );

      /* add instrument source code when available */
      buffer = mcinfo_readfile(instrument_source);
      if (buffer && strlen(buffer)) {
        long length=strlen(buffer);
        nxprintf (f, "description", buffer);
        NXopendata(f,"description");
        nxprintattr(f, "file_name", instrument_source);
        nxprintattr(f, "file_size", "%li", length);
        nxprintattr(f, "MCCODE_STRING", MCCODE_STRING);
        NXclosedata(f);
        nxprintf (f,"instrument_source", "%s " MCCODE_NAME " " MCCODE_PARTICLE " Monte Carlo simulation", instrument_name);
        free(buffer);
      } else
        nxprintf (f, "description", "File %s not found (instrument description %s is missing)",
          instrument_source, instrument_name);

      /* add Mantid/IDF.xml when available */
      char *IDFfile=NULL;
      IDFfile = (char*)malloc(CHAR_BUF_LENGTH);
      sprintf(IDFfile,"%s%s",instrument_source,".xml");
      buffer = mcinfo_readfile(IDFfile);
      if (buffer && strlen(buffer)) {
        NXmakegroup (nxhandle, "instrument_xml", "NXnote");
        NXopengroup (nxhandle, "instrument_xml", "NXnote");
        nxprintf(f, "data", buffer);
        nxprintf(f, "description", "IDF.xml file found with instrument %s", instrument_source);
        nxprintf(f, "type", "text/xml");
        NXclosegroup(f); /* instrument_xml */
        free(buffer);
      }
      free(IDFfile);
      NXclosegroup(f); /* instrument */
    } /* NXinstrument */

    /* write NeXus simulation group */
    if (NXmakegroup(f, "simulation", "NXnote") == NX_OK)
    if (NXopengroup(f, "simulation", "NXnote") == NX_OK) {

      nxprintattr(f, "name",   "%s%s%s",
        dirname && strlen(dirname) ? dirname : ".", MC_PATHSEP_S, siminfo_name);

      nxprintf   (f, "name",      "%s",     siminfo_name);
      nxprintattr(f, "Format",    mcformat && strlen(mcformat) ? mcformat : MCCODE_NAME);
      nxprintattr(f, "URL",       "http://www.mccode.org");
      nxprintattr(f, "program",   MCCODE_STRING);
      nxprintattr(f, "Instrument",instrument_source);
      nxprintattr(f, "Trace",     mcdotrace ?     "yes" : "no");
      nxprintattr(f, "Gravitation",mcgravitation ? "yes" : "no");
      nxprintattr(f, "Seed",      "%li", mcseed);
      nxprintattr(f, "Directory", dirname);
    #ifdef USE_MPI
      if (mpi_node_count > 1)
        nxprintf(f, "Nodes", "%i",        mpi_node_count);
    #endif

      /* output parameter string ================================================ */
      if (NXmakegroup(f, "Param", "NXparameters") == NX_OK)
      if (NXopengroup(f, "Param", "NXparameters") == NX_OK) {
        int i;
        char string[CHAR_BUF_LENGTH];
        for(i = 0; i < numipar; i++) {
          if (mcget_run_num() || (mcinputtable[i].val && strlen(mcinputtable[i].val))) {
            if (mcinputtable[i].par == NULL)
              strncpy(string, (mcinputtable[i].val ? mcinputtable[i].val : ""), CHAR_BUF_LENGTH);
            else
              (*mcinputtypes[mcinputtable[i].type].printer)(string, mcinputtable[i].par);

            nxprintf(f,  mcinputtable[i].name, "%s", string);
            nxprintattr(f, mcinputtable[i].name, string);
          }
        }
        NXclosegroup(f); /* Param */
      } /* NXparameters */

      NXclosegroup(f); /* simulation */
    } /* NXsimulation */

    /* create a group to hold all monitors */
    NXmakegroup(f, "data", "NXdetector");

    /* leave the NXentry opened (closed at exit) */
  } /* NXentry */
} /* mcinfo_out_nexus */

/*******************************************************************************
* mcdatainfo_out_nexus: output detector header
*   mcdatainfo_out_nexus(detector) create group and write info to NeXus data file
*   open data:NXdetector then filename:NXdata and write headers/attributes
*   requires: NXentry to be opened
*******************************************************************************/
static void
mcdatainfo_out_nexus(NXhandle f, MCDETECTOR detector)
{
  char data_name[CHAR_BUF_LENGTH];
  if (!f || !detector.m || mcdisable_output_files) return;

  strcpy_valid(data_name,
    detector.filename && strlen(detector.filename) ?
      detector.filename : detector.component);

  /* the NXdetector group has been created in mcinfo_out_nexus (siminfo_init) */
  if (NXopengroup(f, "data", "NXdetector") == NX_OK) {

    /* create and open the data group */
    /* this may fail when appending to list -> ignore/skip */
    NXMDisableErrorReporting(); /* unactivate NeXus error messages, as creation may fail */

    if (NXmakegroup(f, data_name, "NXdata") == NX_OK)
    if (NXopengroup(f, data_name, "NXdata") == NX_OK) {

      /* output metadata (as attributes) ======================================== */
      nxprintattr(f, "Date",       detector.date);
      nxprintattr(f, "type",       detector.type);
      nxprintattr(f, "Source",     detector.instrument);
      nxprintattr(f, "component",  detector.component);
      nxprintattr(f, "position",   detector.position);

      nxprintattr(f, "title",      detector.title);
      nxprintattr(f, !mcget_run_num() || mcget_run_num() >= mcget_ncount() ?
                 "Ncount" :
                 "ratio",  detector.ncount);

      if (strlen(detector.filename)) {
        nxprintattr(f, "filename", detector.filename);
      }

      nxprintattr(f, "statistics", detector.statistics);
      nxprintattr(f, "signal",     detector.signal);
      nxprintattr(f, "values",     detector.values);

      if (detector.rank >= 1)
      {
        nxprintattr(f, "xvar",     detector.xvar);
        nxprintattr(f, "yvar",     detector.yvar);
        nxprintattr(f, "xlabel",   detector.xlabel);
        nxprintattr(f, "ylabel",   detector.ylabel);
        if (detector.rank > 1) {
          nxprintattr(f, "zvar",   detector.zvar);
          nxprintattr(f, "zlabel", detector.zlabel);
        }
      }

      nxprintattr(f, abs(detector.rank)==1 ?
                 "xlimits" :
                 "xylimits", detector.limits);
      nxprintattr(f, "variables",
        strcasestr(detector.format, "list") ? detector.ylabel : detector.variables);
      nxprintf(f, "distance", detector.position);
      nxprintf(f, "acquisition_mode",
        strcasestr(detector.format, "list") ? "event" : "summed");

      NXclosegroup(f);
    } /* NXdata (filename) */
    NXMEnableErrorReporting();  /* re-enable NeXus error messages */
    NXclosegroup(f);
  } /* NXdetector (data) */

} /* mcdatainfo_out_nexus */

/*******************************************************************************
* mcdetector_out_axis_nexus: write detector axis into current NXdata
*   requires: NXdata to be opened
*******************************************************************************/
int mcdetector_out_axis_nexus(NXhandle f, char *label, char *var, int rank, long length, double min, double max)
{
  if (!f || length <= 1 || mcdisable_output_files || max == min) return(NX_OK);
  else {
    double axis[length];
    char valid[CHAR_BUF_LENGTH];
    int dim=(int)length;
    int i;
    int nprimary=1;
    /* create an axis from [min:max] */
    for(i = 0; i < length; i++)
      axis[i] = min+(max-min)*(i+0.5)/length;
    /* create the data set */
    strcpy_valid(valid, label);
    NXcompmakedata(f, valid, NX_FLOAT64, 1, &dim, NX_COMPRESSION, &dim);
    /* open it */
    if (NXopendata(f, valid) != NX_OK) {
      fprintf(stderr, "Warning: could not open axis rank %i '%s' (NeXus)\n",
        rank, valid);
      return(NX_ERROR);
    }
    /* put the axis and its attributes */
    NXputdata  (f, axis);
    nxprintattr(f, "long_name",  label);
    nxprintattr(f, "short_name", var);
    NXputattr  (f, "axis",       &rank,     1, NX_INT32);
    nxprintattr(f, "units",      var);
    NXputattr  (f, "primary",    &nprimary, 1, NX_INT32);
    NXclosedata(f);

    return(NX_OK);
  }
} /* mcdetector_out_axis_nexus */

/*******************************************************************************
* mcdetector_out_array_nexus: write detector array into current NXdata (1D,2D)
*   requires: NXdata to be opened
*******************************************************************************/
int mcdetector_out_array_nexus(NXhandle f, char *part, double *data, MCDETECTOR detector)
{

  int dims[3]={detector.m,detector.n,detector.p};  /* number of elements to write */
  int fulldims[3]={detector.m,detector.n,detector.p};
  int signal=1;
  int exists=0;
  int current_dims[3]={0,0,0};
  int ret=NX_OK;

  if (!f || !data || !detector.m || mcdisable_output_files) return(NX_OK);

  /* when this is a list, we set 1st dimension to NX_UNLIMITED for creation */
  if (strcasestr(detector.format, "list")) fulldims[0] = NX_UNLIMITED;

  /* create the data set in NXdata group */
  NXMDisableErrorReporting(); /* unactivate NeXus error messages, as creation may fail */
  ret = NXcompmakedata(f, part, NX_FLOAT64, detector.rank, fulldims, NX_COMPRESSION, dims);
  if (ret != NX_OK) {
    /* failed: data set already exists */
    int datatype=0;
    int rank=0;
    exists=1;
    /* inquire current size of data set (nb of events stored) */
    NXopendata(f, part);
    NXgetinfo(f, &rank, current_dims, &datatype);
    NXclosedata(f);
  }
  NXMEnableErrorReporting();  /* re-enable NeXus error messages */

  /* open the data set */
  if (NXopendata(f, part) == NX_ERROR) {
    fprintf(stderr, "Warning: could not open DataSet %s '%s' (NeXus)\n",
      part, detector.title);
    return(NX_ERROR);
  }
  if (strcasestr(detector.format, "list")) {
    current_dims[1] = current_dims[2] = 0; /* set starting location for writing slab */
    NXputslab(f, data, current_dims, dims);
    if (!exists)
      printf("Events:   \"%s\"\n",
        strlen(detector.filename) ? detector.filename : detector.component);
    else
      printf("Append:   \"%s\"\n",
	     strlen(detector.filename) ? detector.filename : detector.component);
  } else {
    NXputdata (f, data);
  }

  if (strstr(part,"data") || strstr(part, "events")) {
    NXputattr(f, "signal", &signal, 1, NX_INT32);
    nxprintattr(f, "short_name", detector.filename && strlen(detector.filename) ?
      detector.filename : detector.component);
  }
  nxprintattr(f, "long_name", "%s '%s'", part, detector.title);
  NXclosedata(f);

  return(NX_OK);
} /* mcdetector_out_array_nexus */

/*******************************************************************************
* mcdetector_out_data_nexus: write detector axes+data into current NXdata
*   The data:NXdetector is opened, then filename:NXdata
*   requires: NXentry to be opened
*******************************************************************************/
int mcdetector_out_data_nexus(NXhandle f, MCDETECTOR detector)
{
  char data_name[CHAR_BUF_LENGTH];

  if (!f || !detector.m || mcdisable_output_files) return(NX_OK);

  strcpy_valid(data_name,
    detector.filename && strlen(detector.filename) ?
      detector.filename : detector.component);

  /* the NXdetector group has been created in mcinfo_out_nexus (siminfo_init) */
  if (NXopengroup(f, "data", "NXdetector") == NX_OK) {

    /* the NXdata group has been created in mcdatainfo_out_nexus */
    if (NXopengroup(f, data_name, "NXdata") == NX_OK) {

      /* write axes, for histogram data sets, not for lists */
      if (!strcasestr(detector.format, "list")) {
        mcdetector_out_axis_nexus(f, detector.xlabel, detector.xvar,
          1, detector.m, detector.xmin, detector.xmax);

        mcdetector_out_axis_nexus(f, detector.ylabel, detector.yvar,
          2, detector.n, detector.ymin, detector.ymax);

        mcdetector_out_axis_nexus(f, detector.zlabel, detector.zvar,
          3, detector.p, detector.zmin, detector.zmax);

      } /* !list */

      /* write the actual data (appended if already exists) */
      if (!strcasestr(detector.format, "list")) {
        mcdetector_out_array_nexus(f, "data", detector.p1, detector);
        mcdetector_out_array_nexus(f, "errors", detector.p2, detector);
        mcdetector_out_array_nexus(f, "ncount", detector.p0, detector);
      } else
        mcdetector_out_array_nexus(  f, "events", detector.p1, detector);

      NXclosegroup(f);
    } /* NXdata */
    NXclosegroup(f);
  } /* NXdetector */

  return(NX_OK);
} /* mcdetector_out_array_nexus */

#ifdef USE_MPI
/*******************************************************************************
* mcdetector_out_list_slaves: slaves send their list data to master which writes
*   requires: NXentry to be opened
* WARNING: this method has a flaw: it requires all nodes to flush the lists
*   the same number of times. In case one node is just below the buffer size
*   when finishing (e.g. monitor_nd), it may not trigger save but others may.
*   Then the number of recv/send is not constant along nodes, and simulation stalls.
*******************************************************************************/
MCDETECTOR mcdetector_out_list_slaves(MCDETECTOR detector)
{
  int     node_i=0;
  MPI_MASTER(
	     printf("\n** MPI master gathering slave node list data ** \n");
  );

  if (mpi_node_rank != mpi_node_root) {
    /* MPI slave: slaves send their data to master: 2 MPI_Send calls */
    /* m, n, p must be sent first, since all slaves do not have the same number of events */
    int mnp[3]={detector.m,detector.n,detector.p};

    if (mc_MPI_Send(mnp, 3, MPI_INT, mpi_node_root)!= MPI_SUCCESS)
      fprintf(stderr, "Warning: proc %i to master: MPI_Send mnp list error (mcdetector_out_list_slaves)\n", mpi_node_rank);
    if (!detector.p1
     || mc_MPI_Send(detector.p1, mnp[0]*mnp[1]*mnp[2], MPI_DOUBLE, mpi_node_root) != MPI_SUCCESS)
      fprintf(stderr, "Warning: proc %i to master: MPI_Send p1 list error: mnp=%i (mcdetector_out_list_slaves)\n", mpi_node_rank, abs(mnp[0]*mnp[1]*mnp[2]));
    /* slaves are done: sent mnp and p1 */
    return (detector);
  } /* end slaves */

  /* MPI master: receive data from slaves sequentially: 2 MPI_Recv calls */

  if (mpi_node_rank == mpi_node_root) {
    for(node_i=0; node_i<mpi_node_count; node_i++) {
      double *this_p1=NULL;                               /* buffer to hold the list from slaves */
      int     mnp[3]={0,0,0};  /* size of this buffer */
      if (node_i != mpi_node_root) { /* get data from slaves */
	if (mc_MPI_Recv(mnp, 3, MPI_INT, node_i) != MPI_SUCCESS)
	  fprintf(stderr, "Warning: master from proc %i: "
		  "MPI_Recv mnp list error (mcdetector_write_data)\n", node_i);
	if (mnp[0]*mnp[1]*mnp[2]) {
	  this_p1 = (double *)calloc(mnp[0]*mnp[1]*mnp[2], sizeof(double));
	  if (!this_p1 || mc_MPI_Recv(this_p1, abs(mnp[0]*mnp[1]*mnp[2]), MPI_DOUBLE, node_i)!= MPI_SUCCESS)
	    fprintf(stderr, "Warning: master from proc %i: "
		    "MPI_Recv p1 list error: mnp=%i (mcdetector_write_data)\n", node_i, mnp[0]*mnp[1]*mnp[2]);
	  else {
	    printf(". MPI master writing data for slave node %i\n",node_i);
	    detector.p1 = this_p1;
	    detector.m  = mnp[0]; detector.n  = mnp[1]; detector.p  = mnp[2];

	    mcdetector_out_data_nexus(nxhandle, detector);
	  }
	}
      } /* if not master */
    } /* for */
  MPI_MASTER(
	     printf("\n** Done ** \n");
  );
  }
}
#endif

MCDETECTOR mcdetector_out_0D_nexus(MCDETECTOR detector)
{
  /* Write data set information to NeXus file. */
  MPI_MASTER(
    mcdatainfo_out_nexus(nxhandle, detector);
  );

  return(detector);
} /* mcdetector_out_0D_ascii */

MCDETECTOR mcdetector_out_1D_nexus(MCDETECTOR detector)
{
  MPI_MASTER(
  mcdatainfo_out_nexus(nxhandle, detector);
  mcdetector_out_data_nexus(nxhandle, detector);
  );
  return(detector);
} /* mcdetector_out_1D_ascii */

MCDETECTOR mcdetector_out_2D_nexus(MCDETECTOR detector)
{
  MPI_MASTER(
  mcdatainfo_out_nexus(nxhandle, detector);
  mcdetector_out_data_nexus(nxhandle, detector);
  );

#ifdef USE_MPI // and USE_NEXUS
  /* NeXus: slave nodes have master write their lists */
  if (strcasestr(detector.format, "list") && mpi_node_count > 1) {
    mcdetector_out_list_slaves(detector);
  }
#endif /* USE_MPI */

  return(detector);
} /* mcdetector_out_2D_nexus */

#endif /* USE_NEXUS*/








/* ========================================================================== */

/*                            Main input functions                            */
/*            DETECTOR_OUT_xD function calls -> ascii or NeXus                */

/* ========================================================================== */

/*******************************************************************************
* siminfo_init:   open SIM and write header
*******************************************************************************/
FILE *siminfo_init(FILE *f)
{
  int exists=0;

  /* check format */
  if (!mcformat || !strlen(mcformat)
   || !strcasecmp(mcformat, "MCSTAS") || !strcasecmp(mcformat, "MCXTRACE")
   || !strcasecmp(mcformat, "PGPLOT") || !strcasecmp(mcformat, "GNUPLOT") || !strcasecmp(mcformat, "MCCODE")
   || !strcasecmp(mcformat, "MATLAB")) {
    mcformat="McCode";
#ifdef USE_NEXUS
  } else if (strcasestr(mcformat, "NeXus")) {
    /* Do nothing */
#endif
  } else {
    fprintf(stderr,
	    "Warning: You have requested the output format %s which is unsupported by this binary. Resetting to standard %s format.\n",mcformat ,"McCode");
    mcformat="McCode";
  }

  /* open the SIM file if not defined yet */
  if (siminfo_file || mcdisable_output_files)
    return (siminfo_file);

#ifdef USE_NEXUS
  /* only master writes NeXus header: calls NXopen(nxhandle) */
  if (mcformat && strcasestr(mcformat, "NeXus")) {
	  MPI_MASTER(
	  siminfo_file = mcnew_file(siminfo_name, "h5", &exists);
    if(!siminfo_file)
      fprintf(stderr,
	      "Warning: could not open simulation description file '%s'\n",
	      siminfo_name);
	  else
	    mcinfo_out_nexus(nxhandle);
	  );
    return(siminfo_file); /* points to nxhandle */
  }
#endif

  /* write main description file (only MASTER) */
  MPI_MASTER(

  siminfo_file = mcnew_file(siminfo_name, "sim", &exists);
  if(!siminfo_file)
    fprintf(stderr,
	    "Warning: could not open simulation description file '%s'\n",
	    siminfo_name);
  else
  {
    /* write SIM header */
    time_t t=time(NULL);
    siminfo_out("%s simulation description file for %s.\n",
      MCCODE_NAME, instrument_name);
    siminfo_out("Date:    %s", ctime(&t)); /* includes \n */
    siminfo_out("Program: %s\n\n", MCCODE_STRING);

    siminfo_out("begin instrument: %s\n", instrument_name);
    mcinfo_out(   "  ", siminfo_file);
    siminfo_out("end instrument\n");

    siminfo_out("\nbegin simulation: %s\n", dirname);
    mcruninfo_out("  ", siminfo_file);
    siminfo_out("end simulation\n");

  }
  return (siminfo_file);

  ); /* MPI_MASTER */

} /* siminfo_init */

/*******************************************************************************
*   siminfo_close:  close SIM
*******************************************************************************/
void siminfo_close()
{
#ifdef USE_MPI
  if(mpi_node_rank == mpi_node_root) {
#endif
  if(siminfo_file && !mcdisable_output_files) {
#ifdef USE_NEXUS
    if (mcformat && strcasestr(mcformat, "NeXus")) {
      time_t t=time(NULL);
      nxprintf(nxhandle, "end_time", ctime(&t));
      nxprintf(nxhandle, "duration", "%li", (long)t-mcstartdate);
      NXclosegroup(nxhandle); /* NXentry */
      NXclose(&nxhandle);
    } else {
#endif
      fclose(siminfo_file);
#ifdef USE_NEXUS
    }
#endif
#ifdef USE_MPI
  }
#endif
    siminfo_file = NULL;
  }
} /* siminfo_close */

/*******************************************************************************
* mcdetector_out_0D: wrapper for 0D (single value).
*   Output single detector/monitor data (p0, p1, p2).
*   Title is t, component name is c.
*******************************************************************************/
MCDETECTOR mcdetector_out_0D(char *t, double p0, double p1, double p2,
                         char *c, Coords posa)
{
  /* import and perform basic detector analysis (and handle MPI reduce) */
  MCDETECTOR detector = detector_import(mcformat,
    c, (t ? t : MCCODE_STRING " data"),
    1, 1, 1,
    "I", "", "",
    "I", "", "",
    0, 0, 0, 0, 0, 0, "",
    &p0, &p1, &p2, posa); /* write Detector: line */

#ifdef USE_NEXUS
  if (strcasestr(detector.format, "NeXus"))
    return(mcdetector_out_0D_nexus(detector));
  else
#endif
    return(mcdetector_out_0D_ascii(detector));

} /* mcdetector_out_0D */



/*******************************************************************************
* mcdetector_out_1D: wrapper for 1D.
*   Output 1d detector data (p0, p1, p2) for n bins linearly
*   distributed across the range x1..x2 (x1 is lower limit of first
*   bin, x2 is upper limit of last bin). Title is t, axis labels are xl
*   and yl. File name is f, component name is c.
*
*   t:    title
*   xl:   x-label
*   yl:   y-label
*   xvar: measured variable length
*   x1:   x axus min
*   x2:   x axis max
*   n:    1d data vector lenght
*   p0:   pntr to start of data block#0
*   p1:   pntr to start of data block#1
*   p2:   pntr to start of data block#2
*   f:    filename
*
*   Not included in the macro, and here forwarded to detector_import:
*   c:    ?
*   posa: ?
*******************************************************************************/
MCDETECTOR mcdetector_out_1D(char *t, char *xl, char *yl,
        char *xvar, double x1, double x2,
        long n,
        double *p0, double *p1, double *p2, char *f,
        char *c, Coords posa)
{
  /* import and perform basic detector analysis (and handle MPI_Reduce) */
  MCDETECTOR detector = detector_import(mcformat,
    c, (t ? t : MCCODE_STRING " 1D data"),
    n, 1, 1,
    xl, yl, (n > 1 ? "Signal per bin" : " Signal"),
    xvar, "(I,I_err)", "I",
    x1, x2, 0, 0, 0, 0, f,
    p0, p1, p2, posa); /* write Detector: line */
  if (!detector.p1 || !detector.m) return(detector);

#ifdef USE_NEXUS
  if (strcasestr(detector.format, "NeXus"))
    return(mcdetector_out_1D_nexus(detector));
  else
#endif
    return(mcdetector_out_1D_ascii(detector));

} /* mcdetector_out_1D */

/*******************************************************************************
* mcdetector_out_2D: wrapper for 2D.
*   Special case for list: master creates file first, then slaves append their
*   blocks without header-
*
*   t:    title
*   xl:   x-label
*   yl:   y-label
*   x1:   x axus min
*   x2:   x axis max
*   y1:   y axis min
*   y2:   y axis max
*   m:    dim 1 (x) size
*   n:    dim 2 (y) size
*   p0:   pntr to start of data block#0
*   p1:   pntr to start of data block#1
*   p2:   pntr to start of data block#2
*   f:    filename
*
*   Not included in the macro, and here forwarded to detector_import:
*   c:    ?
*   posa: ?
*******************************************************************************/
MCDETECTOR mcdetector_out_2D(char *t, char *xl, char *yl,
                  double x1, double x2, double y1, double y2,
                  long m, long n,
                  double *p0, double *p1, double *p2, char *f,
                  char *c, Coords posa)
{
  char xvar[CHAR_BUF_LENGTH];
  char yvar[CHAR_BUF_LENGTH];

  /* create short axes labels */
  if (xl && strlen(xl)) { strncpy(xvar, xl, CHAR_BUF_LENGTH); xvar[2]='\0'; }
  else strcpy(xvar, "x");
  if (yl && strlen(yl)) { strncpy(yvar, yl, CHAR_BUF_LENGTH); yvar[2]='\0'; }
  else strcpy(yvar, "y");

  MCDETECTOR detector;

  /* import and perform basic detector analysis (and handle MPI_Reduce) */
  if (labs(m) == 1) {/* n>1 on Y, m==1 on X: 1D, no X axis*/
    detector = detector_import(mcformat,
      c, (t ? t : MCCODE_STRING " 1D data"),
      n, 1, 1,
      yl, "", "Signal per bin",
      yvar, "(I,Ierr)", "I",
      y1, y2, x1, x2, 0, 0, f,
      p0, p1, p2, posa); /* write Detector: line */
  } else if (labs(n)==1) {/* m>1 on X, n==1 on Y: 1D, no Y axis*/
    detector = detector_import(mcformat,
      c, (t ? t : MCCODE_STRING " 1D data"),
      m, 1, 1,
      xl, "", "Signal per bin",
      xvar, "(I,Ierr)", "I",
      x1, x2, y1, y2, 0, 0, f,
      p0, p1, p2, posa); /* write Detector: line */
  }else {
    detector = detector_import(mcformat,
      c, (t ? t : MCCODE_STRING " 2D data"),
      m, n, 1,
      xl, yl, "Signal per bin",
      xvar, yvar, "I",
      x1, x2, y1, y2, 0, 0, f,
      p0, p1, p2, posa); /* write Detector: line */
  }

  if (!detector.p1 || !detector.m) return(detector);

#ifdef USE_NEXUS
  if (strcasestr(detector.format, "NeXus"))
    return(mcdetector_out_2D_nexus(detector));
  else
#endif
    return(mcdetector_out_2D_ascii(detector));

} /* mcdetector_out_2D */

/*******************************************************************************
* mcdetector_out_list: wrapper for list output (calls out_2D with mcformat+"list").
*   m=number of events, n=size of each event
*******************************************************************************/
MCDETECTOR mcdetector_out_list(char *t, char *xl, char *yl,
                  long m, long n,
                  double *p1, char *f,
                  char *c, Coords posa)
{
  char       format_new[CHAR_BUF_LENGTH];
  char      *format_org;
  MCDETECTOR detector;

  format_org = mcformat;
  strcpy(format_new, mcformat);
  strcat(format_new, " list");
  mcformat = format_new;

  detector = mcdetector_out_2D(t, xl, yl,
                  1,labs(m),1,labs(n),
                  m,n,
                  NULL, p1, NULL, f,
                  c, posa);

  mcformat = format_org;
  return(detector);
}

/*******************************************************************************
 * mcuse_dir: set data/sim storage directory and create it,
 * or exit with error if exists
 ******************************************************************************/
static void
mcuse_dir(char *dir)
{
  if (!dir || !strlen(dir)) return;
#ifdef MC_PORTABLE
  fprintf(stderr, "Error: "
          "Directory output cannot be used with portable simulation (mcuse_dir)\n");
  exit(1);
#else  /* !MC_PORTABLE */
  /* handle file://directory URL type */
  if (strncmp(dir, "file://", strlen("file://")))
    dirname = dir;
  else
    dirname = dir+strlen("file://");


#ifdef USE_MPI
  if(mpi_node_rank == mpi_node_root) {
#endif
    if(mkdir(dirname, 0777)) {
#ifndef DANSE
      fprintf(stderr, "Error: unable to create directory '%s' (mcuse_dir)\n", dir);
      fprintf(stderr, "(Maybe the directory already exists?)\n");
#endif
#ifdef USE_MPI
      MPI_Abort(MPI_COMM_WORLD, -1);
#endif
    exit(-1);
    }
#ifdef USE_MPI
    }
#endif

  /* remove trailing PATHSEP (if any) */
  while (strlen(dirname) && dirname[strlen(dirname) - 1] == MC_PATHSEP_C)
    dirname[strlen(dirname) - 1]='\0';
#endif /* !MC_PORTABLE */
} /* mcuse_dir */

/*******************************************************************************
* mcinfo: display instrument simulation info to stdout and exit
*******************************************************************************/
static void
mcinfo(void)
{
  fprintf(stdout, "begin instrument: %s\n", instrument_name);
  mcinfo_out("  ", stdout);
  fprintf(stdout, "end instrument\n");
  fprintf(stdout, "begin simulation: %s\n", dirname ? dirname : ".");
  mcruninfo_out("  ", stdout);
  fprintf(stdout, "end simulation\n");
  exit(0); /* includes MPI_Finalize in MPI mode */
} /* mcinfo */

#endif /* ndef MCCODE_R_IO_C */

/* end of the I/O section =================================================== */







/*******************************************************************************
* mcset_ncount: set total number of rays to generate
*******************************************************************************/
void mcset_ncount(unsigned long long int count)
{
  mcncount = count;
}

/* mcget_ncount: get total number of rays to generate */
unsigned long long int mcget_ncount(void)
{
  return mcncount;
}

/* mcget_run_num: get curent number of rays */
/* Within the TRACE scope we are now using _particle->uid directly */
unsigned long long int mcget_run_num() // shuld be (_class_particle* _particle) somehow
{
  /* This function only remains for the few cases outside TRACE where we need to know
     the number of simulated particles */
  return mcrun_num;
}

/* mcsetn_arg: get ncount from a string argument */
static void
mcsetn_arg(char *arg)
{
  mcset_ncount((long long int) strtod(arg, NULL));
}

/* mcsetseed: set the random generator seed from a string argument */
static void
mcsetseed(char *arg)
{
  mcseed = atol(arg);
  if(!mcseed) {
  //  srandom(mcseed);
  //} else {
    fprintf(stderr, "Error: seed must not be zero (mcsetseed)\n");
    exit(1);
  }
}

/* Following part is only embedded when not redundent with mccode-r.h ========= */

#ifndef MCCODE_H

/* SECTION: MCDISPLAY support. =============================================== */

/*******************************************************************************
* Just output MCDISPLAY keywords to be caught by an external plotter client.
*******************************************************************************/

void mcdis_magnify(char *what){
  // Do nothing here, better use interactive zoom from the tools
}

void mcdis_line(double x1, double y1, double z1,
                double x2, double y2, double z2){
  printf("MCDISPLAY: multiline(2,%g,%g,%g,%g,%g,%g)\n",
         x1,y1,z1,x2,y2,z2);
}

void mcdis_dashed_line(double x1, double y1, double z1,
		       double x2, double y2, double z2, int n){
  int i;
  const double dx = (x2-x1)/(2*n+1);
  const double dy = (y2-y1)/(2*n+1);
  const double dz = (z2-z1)/(2*n+1);

  for(i = 0; i < n+1; i++)
    mcdis_line(x1 + 2*i*dx,     y1 + 2*i*dy,     z1 + 2*i*dz,
	       x1 + (2*i+1)*dx, y1 + (2*i+1)*dy, z1 + (2*i+1)*dz);
}

void mcdis_multiline(int count, ...){
  va_list ap;
  double x,y,z;

  printf("MCDISPLAY: multiline(%d", count);
  va_start(ap, count);
  while(count--)
    {
    x = va_arg(ap, double);
    y = va_arg(ap, double);
    z = va_arg(ap, double);
    printf(",%g,%g,%g", x, y, z);
    }
  va_end(ap);
  printf(")\n");
}

void mcdis_rectangle(char* plane, double x, double y, double z,
		     double width, double height){
  /* draws a rectangle in the plane           */
  /* x is ALWAYS width and y is ALWAYS height */
  if (strcmp("xy", plane)==0) {
    mcdis_multiline(5,
		    x - width/2, y - height/2, z,
		    x + width/2, y - height/2, z,
		    x + width/2, y + height/2, z,
		    x - width/2, y + height/2, z,
		    x - width/2, y - height/2, z);
  } else if (strcmp("xz", plane)==0) {
    mcdis_multiline(5,
		    x - width/2, y, z - height/2,
		    x + width/2, y, z - height/2,
		    x + width/2, y, z + height/2,
		    x - width/2, y, z + height/2,
		    x - width/2, y, z - height/2);
  } else if (strcmp("yz", plane)==0) {
    mcdis_multiline(5,
		    x, y - height/2, z - width/2,
		    x, y - height/2, z + width/2,
		    x, y + height/2, z + width/2,
		    x, y + height/2, z - width/2,
		    x, y - height/2, z - width/2);
  } else {

    fprintf(stderr, "Error: Definition of plane %s unknown\n", plane);
    exit(1);
  }
}

/*  draws a box with center at (x, y, z) and
    width (deltax), height (deltay), length (deltaz) */
void mcdis_box(double x, double y, double z,
	       double width, double height, double length){

  mcdis_rectangle("xy", x, y, z-length/2, width, height);
  mcdis_rectangle("xy", x, y, z+length/2, width, height);
  mcdis_line(x-width/2, y-height/2, z-length/2,
	     x-width/2, y-height/2, z+length/2);
  mcdis_line(x-width/2, y+height/2, z-length/2,
	     x-width/2, y+height/2, z+length/2);
  mcdis_line(x+width/2, y-height/2, z-length/2,
	     x+width/2, y-height/2, z+length/2);
  mcdis_line(x+width/2, y+height/2, z-length/2,
	     x+width/2, y+height/2, z+length/2);
}

void mcdis_circle(char *plane, double x, double y, double z, double r){
  printf("MCDISPLAY: circle('%s',%g,%g,%g,%g)\n", plane, x, y, z, r);
}

/* Draws a circle with center (x,y,z), radius (r), and in the plane
 * with normal (nx,ny,nz)*/
void mcdis_Circle(double x, double y, double z, double r, double nx, double ny, double nz){
    int i;
    if(nx==0 && ny && nz==0){
        for (i=0;i<24; i++){
            mcdis_line(x+r*sin(i*2*PI/24),y,z+r*cos(i*2*PI/24),
                    x+r*sin((i+1)*2*PI/24),y,z+r*cos((i+1)*2*PI/24));
        }
    }else{
        double mx,my,mz;
        /*generate perpendicular vector using (nx,ny,nz) and (0,1,0)*/
        vec_prod(mx,my,mz, 0,1,0, nx,ny,nz);
        NORM(mx,my,mz);
        /*draw circle*/
        for (i=0;i<24; i++){
            double ux,uy,uz;
            double wx,wy,wz;
            rotate(ux,uy,uz, mx,my,mz, i*2*PI/24, nx,ny,nz);
            rotate(wx,wy,wz, mx,my,mz, (i+1)*2*PI/24, nx,ny,nz);
            mcdis_line(x+ux*r,y+uy*r,z+uz*r,
                    x+wx*r,y+wy*r,z+wz*r);
        }
    }
}

/* Draws a cylinder with center at (x,y,z) with extent (r,height).
 * The cylinder axis is along the vector nx,ny,nz.
 * N determines how many vertical lines are drawn.*/
void mcdis_cylinder( double x, double y, double z,
        double r, double height, int N, double nx, double ny, double nz){
    int i;
    /*no lines make little sense - so trigger the default*/
    if(N<=0) N=5;

    NORM(nx,ny,nz);
    double h_2=height/2.0;
    mcdis_Circle(x+nx*h_2,y+ny*h_2,z+nz*h_2,r,nx,ny,nz);
    mcdis_Circle(x-nx*h_2,y-ny*h_2,z-nz*h_2,r,nx,ny,nz);

    double mx,my,mz;
    /*generate perpendicular vector using (nx,ny,nz) and (0,1,0)*/
    if(nx==0 && ny && nz==0){
        mx=my=0;mz=1;
    }else{
        vec_prod(mx,my,mz, 0,1,0, nx,ny,nz);
        NORM(mx,my,mz);
    }
    /*draw circle*/
    for (i=0; i<24; i++){
        double ux,uy,uz;
        rotate(ux,uy,uz, mx,my,mz, i*2*PI/24, nx,ny,nz);
        mcdis_line(x+nx*h_2+ux*r, y+ny*h_2+uy*r, z+nz*h_2+uz*r,
                 x-nx*h_2+ux*r, y-ny*h_2+uy*r, z-nz*h_2+uz*r);
    }
}

/* draws a sphere with center at (x,y,z) with extent (r)
 * The sphere is drawn using N longitudes and N latitudes.*/
void mcdis_sphere(double x, double y, double z, double r, int N){
    double nx,ny,nz;
    int i;
    /*no lines make little sense - so trigger the default*/
    if(N<=0) N=5;

    nx=0;ny=0;nz=1;
    mcdis_Circle(x,y,z,r,nx,ny,nz);
    for (i=1;i<N;i++){
        rotate(nx,ny,nz, nx,ny,nz, PI/N, 0,1,0);
        mcdis_Circle(x,y,z,r,nx,ny,nz);
    }
    /*lastly draw a great circle perpendicular to all N circles*/
    //mcdis_Circle(x,y,z,radius,1,0,0);

    for (i=1;i<=N;i++){
        double yy=-r+ 2*r*((double)i/(N+1));
        mcdis_Circle(x,y+yy ,z,  sqrt(r*r-yy*yy) ,0,1,0);
    }
}

/* SECTION: coordinates handling ============================================ */

/*******************************************************************************
* Since we use a lot of geometric calculations using Cartesian coordinates,
* we collect some useful routines here. However, it is also permissible to
* work directly on the underlying struct coords whenever that is most
* convenient (that is, the type Coords is not abstract).
*
* Coordinates are also used to store rotation angles around x/y/z axis.
*
* Since coordinates are used much like a basic type (such as double), the
* structure itself is passed and returned, rather than a pointer.
*
* At compile-time, the values of the coordinates may be unknown (for example
* a motor position). Hence coordinates are general expressions and not simple
* numbers. For this we used the type Coords_exp which has three CExp
* fields. For runtime (or calculations possible at compile time), we use
* Coords which contains three double fields.
*******************************************************************************/

/* coords_set: Assign coordinates. */
Coords coords_set(MCNUM x, MCNUM y, MCNUM z)
{
  Coords a;

  a.x = x;
  a.y = y;
  a.z = z;
  return a;
}

/* coords_get: get coordinates. Required when 'x','y','z' are #defined as ray pars */
Coords coords_get(Coords a, MCNUM *x, MCNUM *y, MCNUM *z)
{
  *x = a.x;
  *y = a.y;
  *z = a.z;
  return a;
}

/* coords_add: Add two coordinates. */
Coords coords_add(Coords a, Coords b)
{
  Coords c;

  c.x = a.x + b.x;
  c.y = a.y + b.y;
  c.z = a.z + b.z;
  if (fabs(c.z) < 1e-14) c.z=0.0;
  return c;
}

/* coords_sub: Subtract two coordinates. */
Coords coords_sub(Coords a, Coords b)
{
  Coords c;

  c.x = a.x - b.x;
  c.y = a.y - b.y;
  c.z = a.z - b.z;
  if (fabs(c.z) < 1e-14) c.z=0.0;
  return c;
}

/* coords_neg: Negate coordinates. */
Coords coords_neg(Coords a)
{
  Coords b;

  b.x = -a.x;
  b.y = -a.y;
  b.z = -a.z;
  return b;
}

/* coords_scale: Scale a vector. */
Coords coords_scale(Coords b, double scale) {
  Coords a;

  a.x = b.x*scale;
  a.y = b.y*scale;
  a.z = b.z*scale;
  return a;
}

/* coords_sp: Scalar product: a . b */
double coords_sp(Coords a, Coords b) {
  double value;

  value = a.x*b.x + a.y*b.y + a.z*b.z;
  return value;
}

/* coords_xp: Cross product: a = b x c. */
Coords coords_xp(Coords b, Coords c) {
  Coords a;

  a.x = b.y*c.z - c.y*b.z;
  a.y = b.z*c.x - c.z*b.x;
  a.z = b.x*c.y - c.x*b.y;
  return a;
}

/* coords_len: Gives length of coords set. */
double coords_len(Coords a) {
  return sqrt(a.x*a.x + a.y*a.y + a.z*a.z);
}

/* coords_mirror: Mirror a in plane (through the origin) defined by normal n*/
Coords coords_mirror(Coords a, Coords n) {
  double t = scalar_prod(n.x, n.y, n.z, n.x, n.y, n.z);
  Coords b;
  if (t!=1) {
    t = sqrt(t);
    n.x /= t;
    n.y /= t;
    n.z /= t;
  }
  t=scalar_prod(a.x, a.y, a.z, n.x, n.y, n.z);
  b.x = a.x-2*t*n.x;
  b.y = a.y-2*t*n.y;
  b.z = a.z-2*t*n.z;
  return b;
}

/* coords_print: Print out vector values. */
void coords_print(Coords a) {
  #ifndef OPENACC
  fprintf(stdout, "(%f, %f, %f)\n", a.x, a.y, a.z);
  #endif
  return;
}

mcstatic void coords_norm(Coords* c) {
	double temp = coords_sp(*c,*c);

	// Skip if we will end dividing by zero
	if (temp == 0) return;

	temp = sqrt(temp);

	c->x /= temp;
	c->y /= temp;
	c->z /= temp;
}

/* coords_test_zero: check if zero vector*/
int coords_test_zero(Coords a){
  return ( a.x==0 && a.y==0 && a.z==0 );
}

/*******************************************************************************
* The Rotation type implements a rotation transformation of a coordinate
* system in the form of a double[3][3] matrix.
*
* Contrary to the Coords type in coords.c, rotations are passed by
* reference. Functions that yield new rotations do so by writing to an
* explicit result parameter; rotations are not returned from functions. The
* reason for this is that arrays cannot by returned from functions (though
* structures can; thus an alternative would have been to wrap the
* double[3][3] array up in a struct). Such are the ways of C programming.
*
* A rotation represents the tranformation of the coordinates of a vector when
* changing between coordinate systems that are rotated with respect to each
* other. For example, suppose that coordinate system Q is rotated 45 degrees
* around the Z axis with respect to coordinate system P. Let T be the
* rotation transformation representing a 45 degree rotation around Z. Then to
* get the coordinates of a vector r in system Q, apply T to the coordinates
* of r in P. If r=(1,0,0) in P, it will be (sqrt(1/2),-sqrt(1/2),0) in
* Q. Thus we should be careful when interpreting the sign of rotation angles:
* they represent the rotation of the coordinate systems, not of the
* coordinates (which has opposite sign).
*******************************************************************************/

/*******************************************************************************
* rot_set_rotation: Get transformation for rotation first phx around x axis,
* then phy around y, then phz around z.
*******************************************************************************/
void rot_set_rotation(Rotation t, double phx, double phy, double phz)
{
  if ((phx == 0) && (phy == 0) && (phz == 0)) {
    t[0][0] = 1.0;
    t[0][1] = 0.0;
    t[0][2] = 0.0;
    t[1][0] = 0.0;
    t[1][1] = 1.0;
    t[1][2] = 0.0;
    t[2][0] = 0.0;
    t[2][1] = 0.0;
    t[2][2] = 1.0;
  } else {
    double cx = cos(phx);
    double sx = sin(phx);
    double cy = cos(phy);
    double sy = sin(phy);
    double cz = cos(phz);
    double sz = sin(phz);

    t[0][0] = cy*cz;
    t[0][1] = sx*sy*cz + cx*sz;
    t[0][2] = sx*sz - cx*sy*cz;
    t[1][0] = -cy*sz;
    t[1][1] = cx*cz - sx*sy*sz;
    t[1][2] = sx*cz + cx*sy*sz;
    t[2][0] = sy;
    t[2][1] = -sx*cy;
    t[2][2] = cx*cy;
  }
}

/*******************************************************************************
* rot_test_identity: Test if rotation is identity
*******************************************************************************/
int rot_test_identity(Rotation t)
{
  return (t[0][0] + t[1][1] + t[2][2] == 3);
}

/*******************************************************************************
* rot_mul: Matrix multiplication of transformations (this corresponds to
* combining transformations). After rot_mul(T1, T2, T3), doing T3 is
* equal to doing first T2, then T1.
* Note that T3 must not alias (use the same array as) T1 or T2.
*******************************************************************************/
void rot_mul(Rotation t1, Rotation t2, Rotation t3)
{
  if (rot_test_identity(t1)) {
    rot_copy(t3, t2);
  } else if (rot_test_identity(t2)) {
    rot_copy(t3, t1);
  } else {
    int i,j;
    for(i = 0; i < 3; i++)
      for(j = 0; j < 3; j++)
	t3[i][j] = t1[i][0]*t2[0][j] + t1[i][1]*t2[1][j] + t1[i][2]*t2[2][j];
  }
}

/*******************************************************************************
* rot_copy: Copy a rotation transformation (arrays cannot be assigned in C).
*******************************************************************************/
void rot_copy(Rotation dest, Rotation src)
{
  int i,j;
  for(i = 0; i < 3; i++)
    for(j = 0; j < 3; j++)
      dest[i][j] = src[i][j];
}

/*******************************************************************************
* rot_transpose: Matrix transposition, which is inversion for Rotation matrices
*******************************************************************************/
void rot_transpose(Rotation src, Rotation dst)
{
  dst[0][0] = src[0][0];
  dst[0][1] = src[1][0];
  dst[0][2] = src[2][0];
  dst[1][0] = src[0][1];
  dst[1][1] = src[1][1];
  dst[1][2] = src[2][1];
  dst[2][0] = src[0][2];
  dst[2][1] = src[1][2];
  dst[2][2] = src[2][2];
}

/*******************************************************************************
* rot_apply: returns t*a
*******************************************************************************/
Coords rot_apply(Rotation t, Coords a)
{
  Coords b;
  if (rot_test_identity(t)) {
    return a;
  } else {
    b.x = t[0][0]*a.x + t[0][1]*a.y + t[0][2]*a.z;
    b.y = t[1][0]*a.x + t[1][1]*a.y + t[1][2]*a.z;
    b.z = t[2][0]*a.x + t[2][1]*a.y + t[2][2]*a.z;
    return b;
  }
}

/**
 * Pretty-printing of rotation matrices.
 */
void rot_print(Rotation rot) {
	printf("[ %4.2f %4.2f %4.2f ]\n",
			rot[0][0], rot[0][1], rot[0][2]);
	printf("[ %4.2f %4.2f %4.2f ]\n",
			rot[1][0], rot[1][1], rot[1][2]);
	printf("[ %4.2f %4.2f %4.2f ]\n\n",
			rot[2][0], rot[2][1], rot[2][2]);
}

/**
 * Vector product: used by vec_prod (mccode-r.h). Use coords_xp for Coords.
 */
void vec_prod_func(double *x, double *y, double *z,
		double x1, double y1, double z1,
		double x2, double y2, double z2) {
    *x = (y1)*(z2) - (y2)*(z1);
    *y = (z1)*(x2) - (z2)*(x1);
    *z = (x1)*(y2) - (x2)*(y1);
}

/**
 * Scalar product: use coords_sp for Coords.
 */
double scalar_prod(
		double x1, double y1, double z1,
		double x2, double y2, double z2) {
	return ((x1 * x2) + (y1 * y2) + (z1 * z2));
}

mcstatic void norm_func(double *x, double *y, double *z) {
	double temp = (*x * *x) + (*y * *y) + (*z * *z);
	if (temp != 0) {
		temp = sqrt(temp);
		*x /= temp;
		*y /= temp;
		*z /= temp;
	}
}


/* SECTION: GPU algorithms ================================================== */


/*
*  Divide-and-conquer strategy for parallelizing this task: Sort absorbed
*  particles last.
*
*   particles:  the particle array, required to checking _absorbed
*   pbuffer:    same-size particle buffer array required for parallel sort
*   len:        sorting area-of-interest size (e.g. from previous calls)
*   buffer_len: total array size
*   flag_split: if set, multiply live particles into absorbed slots, up to buffer_len
*   multiplier: output arg, becomes the  SPLIT multiplier if flag_split is set
*/
#ifdef FUNNEL
long sort_absorb_last(_class_particle* particles, _class_particle* pbuffer, long len, long buffer_len, long flag_split, long* multiplier) {
  #define SAL_THREADS 1024 // num parallel sections
  if (len<SAL_THREADS) return sort_absorb_last_serial(particles, len);

  if (multiplier != NULL) *multiplier = -1; // set default out value for multiplier
  long newlen = 0;
  long los[SAL_THREADS]; // target array startidxs
  long lens[SAL_THREADS]; // target array sublens
  long l = floor(len/(SAL_THREADS-1)); // subproblem_len
  long ll = len - l*(SAL_THREADS-1); // last_subproblem_len

  // TODO: The l vs ll is too simplistic, since ll can become much larger
  // than l, resulting in idling. We should distribute lengths more evenly.

  // step 1: sort sub-arrays
  #pragma acc parallel loop present(particles, pbuffer)
  for (unsigned long tidx=0; tidx<SAL_THREADS; tidx++) {
    long lo = l*tidx;
    long loclen = l;
    if (tidx==(SAL_THREADS-1)) loclen = ll; // last sub-problem special case
    long i = lo;
    long j = lo + loclen - 1;

    // write into pbuffer at i and j
    #pragma acc loop seq
    while (i < j) {
      #pragma acc loop seq
      while (!particles[i]._absorbed && i<j) {
        pbuffer[i] = particles[i];
        i++;
      }
      #pragma acc loop seq
      while (particles[j]._absorbed && i<j) {
        pbuffer[j] = particles[j];
        j--;
      }
      if (i < j) {
        pbuffer[j] = particles[i];
        pbuffer[i] = particles[j];
        i++;
        j--;
      }
    }
    // transfer edge case
    if (i==j)
      pbuffer[i] = particles[i];

    lens[tidx] = i - lo;
    if (i==j && !particles[i]._absorbed) lens[tidx]++;
  }

  // determine lo's
  long accumlen = 0;
  #pragma acc loop seq
  for (long idx=0; idx<SAL_THREADS; idx++) {
    los[idx] = accumlen;
    accumlen = accumlen + lens[idx];
  }

  // step 2: write non-absorbed sub-arrays to psorted/output from the left
  #pragma acc parallel loop present(pbuffer)
  for (unsigned long tidx=0; tidx<SAL_THREADS; tidx++) {
    long j, k;
    #pragma acc loop seq
    for (long i=0; i<lens[tidx]; i++) {
      j = i + l*tidx;
      k = i + los[tidx];
      particles[k] = pbuffer[j];
    }
  }
  //for (int ii=0;ii<accumlen;ii++) printf("%ld ", (psorted[ii]->_absorbed));

  // return (no SPLIT)
  if (flag_split != 1)
    return accumlen;

  // SPLIT - repeat the non-absorbed block N-1 times, where len % accumlen = N + R
  int mult = buffer_len / accumlen; // TODO: possibly use a new arg, bufferlen, rather than len

  // not enough space for full-block split, return
  if (mult <= 1)
    return accumlen;

  // copy non-absorbed block
  #pragma acc parallel loop present(particles)
  for (long tidx = 0; tidx < accumlen; tidx++) { // tidx: thread index
    unsigned long randstate[7];
    _class_particle sourcebuffer;
    _class_particle targetbuffer;
    // assign reduced weight to all particles
    particles[tidx].p=particles[tidx].p/mult;
    #pragma acc loop seq
    for (long bidx = 1; bidx < mult; bidx++) { // bidx: block index
      // preserve absorbed particle (for randstate)
      sourcebuffer = particles[bidx*accumlen + tidx];
      // buffer full particle struct
      targetbuffer = particles[tidx];
      // reassign previous randstate
      targetbuffer.randstate[0] = sourcebuffer.randstate[0];
      targetbuffer.randstate[1] = sourcebuffer.randstate[1];
      targetbuffer.randstate[2] = sourcebuffer.randstate[2];
      targetbuffer.randstate[3] = sourcebuffer.randstate[3];
      targetbuffer.randstate[4] = sourcebuffer.randstate[4];
      targetbuffer.randstate[5] = sourcebuffer.randstate[5];
      targetbuffer.randstate[6] = sourcebuffer.randstate[6];
      // apply
      particles[bidx*accumlen + tidx] = targetbuffer;
    }
  }

  // set out split multiplier value
  *multiplier = mult;

  // return expanded array size
  return accumlen * mult;
}

#endif

/*
*  Fallback serial version of the one above.
*/
long sort_absorb_last_serial(_class_particle* particles, long len) {
  long i = 0;
  long j = len - 1;
  _class_particle pbuffer;

  // bubble
  while (i < j) {
    while (!particles[i]._absorbed && i<j) i++;
    while (particles[j]._absorbed && i<j) j--;
    if (i < j) {
      pbuffer = particles[j];
      particles[j] = particles[i];
      particles[i] = pbuffer;
      i++;
      j--;
    }
  }

  // return new length
  if (i==j && !particles[i]._absorbed)
    return i + 1;
  else
    return i;
}

/*******************************************************************************
* mccoordschange: applies rotation to (x y z) and (vx vy vz) and Spin (sx,sy,sz)
*******************************************************************************/
void mccoordschange(Coords a, Rotation t, _class_particle *particle)
{
  Coords b, c;

  b.x = particle->x;
  b.y = particle->y;
  b.z = particle->z;
  c = rot_apply(t, b);
  b = coords_add(c, a);
  particle->x = b.x;
  particle->y = b.y;
  particle->z = b.z;

#if MCCODE_PARTICLE_CODE == 2112
    if (particle->vz != 0.0 || particle->vx != 0.0 || particle->vy != 0.0)
      mccoordschange_polarisation(t, &(particle->vx), &(particle->vy), &(particle->vz));

    if (particle->sz != 0.0 || particle->sx != 0.0 || particle->sy != 0.0)
      mccoordschange_polarisation(t, &(particle->sx), &(particle->sy), &(particle->sz));
#elif MCCODE_PARTICLE_CODE == 22
    if (particle->kz != 0.0 || particle->kx != 0.0 || particle->ky != 0.0)
      mccoordschange_polarisation(t, &(particle->kx), &(particle->ky), &(particle->kz));

    if (particle->Ez != 0.0 || particle->Ex != 0.0 || particle->Ey != 0.0)
      mccoordschange_polarisation(t, &(particle->Ex), &(particle->Ey), &(particle->Ez));
#endif
}

/*******************************************************************************
* mccoordschange_polarisation: applies rotation to vector (sx sy sz)
*******************************************************************************/
void mccoordschange_polarisation(Rotation t, double *sx, double *sy, double *sz)
{
  Coords b, c;

  b.x = *sx;
  b.y = *sy;
  b.z = *sz;
  c = rot_apply(t, b);
  *sx = c.x;
  *sy = c.y;
  *sz = c.z;
}

/* SECTION: vector math  ==================================================== */

/* normal_vec_func: Compute normal vector to (x,y,z). */
void normal_vec(double *nx, double *ny, double *nz,
                double x, double y, double z)
{
  double ax = fabs(x);
  double ay = fabs(y);
  double az = fabs(z);
  double l;
  if(x == 0 && y == 0 && z == 0)
  {
    *nx = 0;
    *ny = 0;
    *nz = 0;
    return;
  }
  if(ax < ay)
  {
    if(ax < az)
    {                           /* Use X axis */
      l = sqrt(z*z + y*y);
      *nx = 0;
      *ny = z/l;
      *nz = -y/l;
      return;
    }
  }
  else
  {
    if(ay < az)
    {                           /* Use Y axis */
      l = sqrt(z*z + x*x);
      *nx = z/l;
      *ny = 0;
      *nz = -x/l;
      return;
    }
  }
  /* Use Z axis */
  l = sqrt(y*y + x*x);
  *nx = y/l;
  *ny = -x/l;
  *nz = 0;
} /* normal_vec */

/*******************************************************************************
 * solve_2nd_order: second order equation solve: A*t^2 + B*t + C = 0
 * solve_2nd_order(&t1, NULL, A,B,C)
 *   returns 0 if no solution was found, or set 't1' to the smallest positive
 *   solution.
 * solve_2nd_order(&t1, &t2, A,B,C)
 *   same as with &t2=NULL, but also returns the second solution.
 * EXAMPLE usage for intersection of a trajectory with a plane in gravitation
 * field (gx,gy,gz):
 * The neutron starts at point r=(x,y,z) with velocityv=(vx vy vz). The plane
 * has a normal vector n=(nx,ny,nz) and contains the point W=(wx,wy,wz).
 * The problem consists in solving the 2nd order equation:
 *      1/2.n.g.t^2 + n.v.t + n.(r-W) = 0
 * so that A = 0.5 n.g; B = n.v; C = n.(r-W);
 * Without acceleration, t=-n.(r-W)/n.v
 ******************************************************************************/
int solve_2nd_order_old(double *t1, double *t2,
                  double A,  double B,  double C)
{
  int ret=0;

  if (!t1) return 0;
  *t1 = 0;
  if (t2) *t2=0;

  if (fabs(A) < 1E-10) /* approximate to linear equation: A ~ 0 */
  {
    if (B) {  *t1 = -C/B; ret=1; if (t2) *t2=*t1; }
    /* else no intersection: A=B=0 ret=0 */
  }
  else
  {
    double D;
    D = B*B - 4*A*C;
    if (D >= 0) /* Delta > 0: two solutions */
    {
      double sD, dt1, dt2;
      sD = sqrt(D);
      dt1 = (-B + sD)/2/A;
      dt2 = (-B - sD)/2/A;
      /* we identify very small values with zero */
      if (fabs(dt1) < 1e-10) dt1=0.0;
      if (fabs(dt2) < 1e-10) dt2=0.0;

      /* now we choose the smallest positive solution */
      if      (dt1<=0.0 && dt2>0.0) ret=2; /* dt2 positive */
      else if (dt2<=0.0 && dt1>0.0) ret=1; /* dt1 positive */
      else if (dt1> 0.0 && dt2>0.0)
      {  if (dt1 < dt2) ret=1; else ret=2; } /* all positive: min(dt1,dt2) */
      /* else two solutions are negative. ret=-1 */
      if (ret==1) { *t1 = dt1;  if (t2) *t2=dt2; }
      else        { *t1 = dt2;  if (t2) *t2=dt1; }
      ret=2;  /* found 2 solutions and t1 is the positive one */
    } /* else Delta <0: no intersection. ret=0 */
  }
  return(ret);
} /* solve_2nd_order */

int solve_2nd_order(double *t0, double *t1, double A, double B, double C){
  int retval=0;
  double sign=copysign(1.0,B);
  double dt0,dt1;

  dt0=0;
  dt1=0;
  if(t1){ *t1=0;}

  /*protect against rounding errors by locally equating DBL_EPSILON with 0*/
  if (fabs(A)<DBL_EPSILON){
    A=0;
  }
  if (fabs(B)<DBL_EPSILON){
    B=0;
  }
  if (fabs(C)<DBL_EPSILON){
    C=0;
  }

  /*check if coefficient are sane*/
  if( A==0  && B==0){
    retval=0;
  }else{
    if(A==0){
      /*equation is linear*/
      dt0=-C/B;
      retval=1;
    }else if (C==0){
      /*one root is 0*/
      if(sign<0){
        dt0=0;dt1=-B/A;
      }else{
        dt0=-B/A;dt1=0;
      }
      retval=2;
    }else{
      /*a regular 2nd order eq. Also works out fine for B==0.*/
      double D;
      D=B*B-4*A*C;
      if (D>=0){
        dt0=(-B - sign*sqrt(B*B-4*A*C))/(2*A);
        dt1=C/(A*dt0);
        retval=2;
      }else{
        /*no real roots*/
        retval=0;
      }
    }
    /*sort the solutions*/
    if (retval==1){
      /*put both solutions in t0 and t1*/
      *t0=dt0;
      if(t1) *t1=dt1;
    }else{
      /*we have two solutions*/
      /*swap if both are positive and t1 smaller than t0 or t1 the only positive*/
      int swap=0;
      if(dt1>0 && ( dt1<dt0 || dt0<=0) ){
        swap=1;
      }
      if (swap){
        *t0=dt1;
        if(t1) *t1=dt0;
      }else{
        *t0=dt0;
        if(t1) *t1=dt0;
      }
    }

  }
  return retval;

} /*solve_2nd_order_improved*/


/*******************************************************************************
 * randvec_target_circle: Choose random direction towards target at (x,y,z)
 * with given radius.
 * If radius is zero, choose random direction in full 4PI, no target.
 ******************************************************************************/
void _randvec_target_circle(double *xo, double *yo, double *zo, double *solid_angle,
        double xi, double yi, double zi, double radius,
        _class_particle* _particle)
{
  double l2, phi, theta, nx, ny, nz, xt, yt, zt, xu, yu, zu;

  if(radius == 0.0)
  {
    /* No target, choose uniformly a direction in full 4PI solid angle. */
    theta = acos(1 - rand0max(2));
    phi = rand0max(2 * PI);
    if(solid_angle)
      *solid_angle = 4*PI;
    nx = 1;
    ny = 0;
    nz = 0;
    yi = sqrt(xi*xi+yi*yi+zi*zi);
    zi = 0;
    xi = 0;
  }
  else
  {
    double costheta0;
    l2 = xi*xi + yi*yi + zi*zi; /* sqr Distance to target. */
    costheta0 = sqrt(l2/(radius*radius+l2));
    if (radius < 0) costheta0 *= -1;
    if(solid_angle)
    {
      /* Compute solid angle of target as seen from origin. */
        *solid_angle = 2*PI*(1 - costheta0);
    }

    /* Now choose point uniformly on circle surface within angle theta0 */
    theta = acos (1 - rand0max(1 - costheta0)); /* radius on circle */
    phi = rand0max(2 * PI); /* rotation on circle at given radius */
    /* Now, to obtain the desired vector rotate (xi,yi,zi) angle theta around a
       perpendicular axis u=i x n and then angle phi around i. */
    if(xi == 0 && zi == 0)
    {
      nx = 1;
      ny = 0;
      nz = 0;
    }
    else
    {
      nx = -zi;
      nz = xi;
      ny = 0;
    }
  }

  /* [xyz]u = [xyz]i x n[xyz] (usually vertical) */
  vec_prod(xu,  yu,  zu, xi, yi, zi,        nx, ny, nz);
  /* [xyz]t = [xyz]i rotated theta around [xyz]u */
  rotate  (xt,  yt,  zt, xi, yi, zi, theta, xu, yu, zu);
  /* [xyz]o = [xyz]t rotated phi around n[xyz] */
  rotate (*xo, *yo, *zo, xt, yt, zt, phi, xi, yi, zi);
}
/* randvec_target_circle */

/*******************************************************************************
 * randvec_target_rect_angular: Choose random direction towards target at
 * (xi,yi,zi) with given ANGULAR dimension height x width. height=phi_x=[0,PI],
 * width=phi_y=[0,2*PI] (radians)
 * If height or width is zero, choose random direction in full 4PI, no target.
 *******************************************************************************/
void _randvec_target_rect_angular(double *xo, double *yo, double *zo, double *solid_angle,
        double xi, double yi, double zi, double width, double height, Rotation A,
        _class_particle* _particle)
{
  double theta, phi, nx, ny, nz, xt, yt, zt, xu, yu, zu;
  Coords tmp;
  Rotation Ainverse;

  rot_transpose(A, Ainverse);

  if(height == 0.0 || width == 0.0)
  {
    randvec_target_circle(xo, yo, zo, solid_angle, xi, yi, zi, 0);
    return;
  }
  else
  {
    if(solid_angle)
    {
      /* Compute solid angle of target as seen from origin. */
      *solid_angle = 2*fabs(width*sin(height/2));
    }

    /* Go to global coordinate system */

    tmp = coords_set(xi, yi, zi);
    tmp = rot_apply(Ainverse, tmp);
    coords_get(tmp, &xi, &yi, &zi);

    /* Now choose point uniformly on the unit sphere segment with angle theta/phi */
    phi   = width*randpm1()/2.0;
    theta = asin(randpm1()*sin(height/2.0));
    /* Now, to obtain the desired vector rotate (xi,yi,zi) angle theta around
       n, and then phi around u. */
    if(xi == 0 && zi == 0)
    {
      nx = 1;
      ny = 0;
      nz = 0;
    }
    else
    {
      nx = -zi;
      nz = xi;
      ny = 0;
    }
  }

  /* [xyz]u = [xyz]i x n[xyz] (usually vertical) */
  vec_prod(xu,  yu,  zu, xi, yi, zi,        nx, ny, nz);
  /* [xyz]t = [xyz]i rotated theta around [xyz]u */
  rotate  (xt,  yt,  zt, xi, yi, zi, theta, nx, ny, nz);
  /* [xyz]o = [xyz]t rotated phi around n[xyz] */
  rotate (*xo, *yo, *zo, xt, yt, zt, phi, xu,  yu,  zu);

  /* Go back to local coordinate system */
  tmp = coords_set(*xo, *yo, *zo);
  tmp = rot_apply(A, tmp);
  coords_get(tmp, &*xo, &*yo, &*zo);
}
/* randvec_target_rect_angular */

/*******************************************************************************
 * randvec_target_rect_real: Choose random direction towards target at (xi,yi,zi)
 * with given dimension height x width (in meters !).
 *
 * Local emission coordinate is taken into account and corrected for 'order' times.
 * (See remarks posted to mcstas-users by George Apostolopoulus <gapost@ipta.demokritos.gr>)
 *
 * If height or width is zero, choose random direction in full 4PI, no target.
 *
 * Traditionally, this routine had the name randvec_target_rect - this is now a
 * a define (see mcstas-r.h) pointing here. If you use the old rouine, you are NOT
 * taking the local emmission coordinate into account.
*******************************************************************************/
void _randvec_target_rect_real(double *xo, double *yo, double *zo, double *solid_angle,
        double xi, double yi, double zi,
        double width, double height, Rotation A,
        double lx, double ly, double lz, int order,
        _class_particle* _particle)
{
  double dx, dy, dist, dist_p, nx, ny, nz, mx, my, mz, n_norm, m_norm;
  double cos_theta;
  Coords tmp;
  Rotation Ainverse;

  rot_transpose(A, Ainverse);

  if(height == 0.0 || width == 0.0)
  {
    randvec_target_circle(xo, yo, zo, solid_angle,
               xi, yi, zi, 0);
    return;
  }
  else
  {
    /* Now choose point uniformly on rectangle within width x height */
    dx = width*randpm1()/2.0;
    dy = height*randpm1()/2.0;

    /* Determine distance to target plane*/
    dist = sqrt(xi*xi + yi*yi + zi*zi);
    /* Go to global coordinate system */

    tmp = coords_set(xi, yi, zi);
    tmp = rot_apply(Ainverse, tmp);
    coords_get(tmp, &xi, &yi, &zi);

    /* Determine vector normal to trajectory axis (z) and gravity [0 1 0] */
    vec_prod(nx, ny, nz, xi, yi, zi, 0, 1, 0);

    /* This now defines the x-axis, normalize: */
    n_norm=sqrt(nx*nx + ny*ny + nz*nz);
    nx = nx/n_norm;
    ny = ny/n_norm;
    nz = nz/n_norm;

    /* Now, determine our y-axis (vertical in many cases...) */
    vec_prod(mx, my, mz, xi, yi, zi, nx, ny, nz);
    m_norm=sqrt(mx*mx + my*my + mz*mz);
    mx = mx/m_norm;
    my = my/m_norm;
    mz = mz/m_norm;

    /* Our output, random vector can now be defined by linear combination: */

    *xo = xi + dx * nx + dy * mx;
    *yo = yi + dx * ny + dy * my;
    *zo = zi + dx * nz + dy * mz;

    /* Go back to local coordinate system */
    tmp = coords_set(*xo, *yo, *zo);
    tmp = rot_apply(A, tmp);
    coords_get(tmp, &*xo, &*yo, &*zo);

    /* Go back to local coordinate system */
    tmp = coords_set(xi, yi, zi);
    tmp = rot_apply(A, tmp);
    coords_get(tmp, &xi, &yi, &zi);

    if (solid_angle) {
      /* Calculate vector from local point to remote random point */
      lx = *xo - lx;
      ly = *yo - ly;
      lz = *zo - lz;
      dist_p = sqrt(lx*lx + ly*ly + lz*lz);

      /* Adjust the 'solid angle' */
      /* 1/r^2 to the chosen point times cos(\theta) between the normal */
      /* vector of the target rectangle and direction vector of the chosen point. */
      cos_theta = (xi * lx + yi * ly + zi * lz) / (dist * dist_p);
      *solid_angle = width * height / (dist_p * dist_p);
      int counter;
      for (counter = 0; counter < order; counter++) {
        *solid_angle = *solid_angle * cos_theta;
      }
    }
  }
}
/* randvec_target_rect_real */


/* SECTION: random numbers ==================================================

  How to add a new RNG:

  - Use an rng with a manegable state vector, e.g. of lengt 4 or 7. The state
  will sit on the particle struct as a "randstate_t state[RANDSTATE_LEN]"
  - If the rng has a long state (as MT), set an empty "srandom" and initialize
  it explicitly using the appropriate define (RNG_ALG)
  - Add a seed and a random function (the transforms will be reused)
  - Write the proper defines in mccode-r.h, e.g. randstate_t and RANDSTATE_LEN,
  srandom and random.
  - Compile using -DRNG_ALG=<selector int value>

============================================================================= */


/* "Mersenne Twister", by Makoto Matsumoto and Takuji Nishimura. */
/* See http://www.math.keio.ac.jp/~matumoto/emt.html for original source. */
/*
   A C-program for MT19937, with initialization improved 2002/1/26.
   Coded by Takuji Nishimura and Makoto Matsumoto.

   Before using, initialize the state by using mt_srandom(seed)
   or init_by_array(init_key, key_length).

   Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,
   All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions
   are met:

     1. Redistributions of source code must retain the above copyright
        notice, this list of conditions and the following disclaimer.

     2. Redistributions in binary form must reproduce the above copyright
        notice, this list of conditions and the following disclaimer in the
        documentation and/or other materials provided with the distribution.

     3. The names of its contributors may not be used to endorse or promote
        products derived from this software without specific prior written
        permission.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
   CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.


   Any feedback is very welcome.
   http://www.math.keio.ac.jp/matumoto/emt.html
   email: matumoto@math.keio.ac.jp
*/
#include <stdio.h>
/* Period parameters */
#define N 624
#define M 397
#define MATRIX_A 0x9908b0dfUL   /* constant vector a */
#define UPPER_MASK 0x80000000UL /* most significant w-r bits */
#define LOWER_MASK 0x7fffffffUL /* least significant r bits */

unsigned long mt[N]; /* the array for the state vector  */
int mti=N+1; /* mti==N+1 means mt[N] is not initialized */

// required for common rng alg interface (see RNG_ALG usage in mccode-r.h)
void mt_srandom_empty() {}

// initializes mt[N] with a seed
void mt_srandom(unsigned long s)
{
    mt[0]= s & 0xffffffffUL;
    for (mti=1; mti<N; mti++) {
        mt[mti] =
            (1812433253UL * (mt[mti-1] ^ (mt[mti-1] >> 30)) + mti);
        /* See Knuth TAOCP Vol2. 3rd Ed. P.106 for multiplier. */
        /* In the previous versions, MSBs of the seed affect   */
        /* only MSBs of the array mt[].                        */
        /* 2002/01/09 modified by Makoto Matsumoto             */
        mt[mti] &= 0xffffffffUL;
        /* for >32 bit machines */
    }
}
/* Initialize by an array with array-length.
   Init_key is the array for initializing keys.
   key_length is its length. */
void init_by_array(unsigned long init_key[], unsigned long key_length)
{
    int i, j, k;
    mt_srandom(19650218UL);
    i=1; j=0;
    k = (N>key_length ? N : key_length);
    for (; k; k--) {
        mt[i] = (mt[i] ^ ((mt[i-1] ^ (mt[i-1] >> 30)) * 1664525UL))
          + init_key[j] + j; /* non linear */
        mt[i] &= 0xffffffffUL; /* for WORDSIZE > 32 machines */
        i++; j++;
        if (i>=N) { mt[0] = mt[N-1]; i=1; }
        if (j>=key_length) j=0;
    }
    for (k=N-1; k; k--) {
        mt[i] = (mt[i] ^ ((mt[i-1] ^ (mt[i-1] >> 30)) * 1566083941UL))
          - i; /* non linear */
        mt[i] &= 0xffffffffUL; /* for WORDSIZE > 32 machines */
        i++;
        if (i>=N) { mt[0] = mt[N-1]; i=1; }
    }

    mt[0] = 0x80000000UL; /* MSB is 1; assuring non-zero initial array */
}
/* generates a random number on [0,0xffffffff]-interval */
unsigned long mt_random(void)
{
    unsigned long y;
    unsigned long mag01[2]={0x0UL, MATRIX_A};
    /* mag01[x] = x * MATRIX_A  for x=0,1 */

    if (mti >= N) { /* generate N words at one time */
        int kk;

        if (mti == N+1)   /* if mt_srandom() has not been called, */
            mt_srandom(5489UL); /* a default initial seed is used */

        for (kk=0;kk<N-M;kk++) {
            y = (mt[kk]&UPPER_MASK)|(mt[kk+1]&LOWER_MASK);
            mt[kk] = mt[kk+M] ^ (y >> 1) ^ mag01[y & 0x1UL];
        }
        for (;kk<N-1;kk++) {
            y = (mt[kk]&UPPER_MASK)|(mt[kk+1]&LOWER_MASK);
            mt[kk] = mt[kk+(M-N)] ^ (y >> 1) ^ mag01[y & 0x1UL];
        }
        y = (mt[N-1]&UPPER_MASK)|(mt[0]&LOWER_MASK);
        mt[N-1] = mt[M-1] ^ (y >> 1) ^ mag01[y & 0x1UL];

        mti = 0;
    }

    y = mt[mti++];

    /* Tempering */
    y ^= (y >> 11);
    y ^= (y << 7) & 0x9d2c5680UL;
    y ^= (y << 15) & 0xefc60000UL;
    y ^= (y >> 18);

    return y;
}
#undef N
#undef M
#undef MATRIX_A
#undef UPPER_MASK
#undef LOWER_MASK
/* End of "Mersenne Twister". */


/*
KISS

 From: http://www.helsbreth.org/random/rng_kiss.html
 Scott Nelson 1999

 Based on Marsaglia's KISS or (KISS+SWB) <http://www.cs.yorku.ca/~oz/marsaglia-
rng.html>

 KISS - Keep it Simple Stupid PRNG

 the idea is to use simple, fast, individually promising
 generators to get a composite that will be fast, easy to code
 have a very long period and pass all the tests put to it.
 The three components of KISS are
        x(n)=a*x(n-1)+1 mod 2^32
        y(n)=y(n-1)(I+L^13)(I+R^17)(I+L^5),
        z(n)=2*z(n-1)+z(n-2) +carry mod 2^32
 The y's are a shift register sequence on 32bit binary vectors
 period 2^32-1;
 The z's are a simple multiply-with-carry sequence with period
 2^63+2^32-1.  The period of KISS is thus
      2^32*(2^32-1)*(2^63+2^32-1) > 2^127
*/

/* the KISS state is stored as a vector of 7 unsigned long        */
/*   0  1  2  3  4      5  6   */
/* [ x, y, z, w, carry, k, m ] */

unsigned long *kiss_srandom(unsigned long state[7], unsigned long seed) {
  if (seed == 0) seed = 1;
  state[0] = seed | 1; // x
  state[1] = seed | 2; // y
  state[2] = seed | 4; // z
  state[3] = seed | 8; // w
  state[4] = 0;        // carry
  return 0;
}

unsigned long kiss_random(unsigned long state[7]) {
    state[0] = state[0] * 69069 + 1;
    state[1] ^= state[1] << 13;
    state[1] ^= state[1] >> 17;
    state[1] ^= state[1] << 5;
    state[5] = (state[2] >> 2) + (state[3] >> 3) + (state[4] >> 2);
    state[6] = state[3] + state[3] + state[2] + state[4];
    state[2] = state[3];
    state[3] = state[6];
    state[4] = state[5] >> 30;
    return state[0] + state[1] + state[3];
}
/* end of "KISS" rng */


/* FAST KISS in another implementation (Hundt) */

//////////////////////////////////////////////////////////////////////////////
// fast keep it simple stupid generator
//////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// Thomas Mueller hash for initialization of rngs
// http://stackoverflow.com/questions/664014/
//        what-integer-hash-function-are-good-that-accepts-an-integer-hash-key
//////////////////////////////////////////////////////////////////////////////
randstate_t _hash(randstate_t x) {
  x = ((x >> 16) ^ x) * 0x45d9f3b;
  x = ((x >> 16) ^ x) * 0x45d9f3b;
  x = ((x >> 16) ^ x);
  return x;
}


// SECTION: random number transforms ==========================================



// generate a random number from normal law
double _randnorm(randstate_t* state)
{
  static double v1, v2, s; /* removing static breaks comparison with McStas <= 2.5 */
  static int phase = 0;
  double X, u1, u2;

  if(phase == 0)
  {
    do
    {
      u1 = _rand01(state);
      u2 = _rand01(state);
      v1 = 2*u1 - 1;
      v2 = 2*u2 - 1;
      s = v1*v1 + v2*v2;
    } while(s >= 1 || s == 0);

    X = v1*sqrt(-2*log(s)/s);
  }
  else
  {
    X = v2*sqrt(-2*log(s)/s);
  }

  phase = 1 - phase;
  return X;
}
// another one
double _randnorm2(randstate_t* state) {
  double x, y, r;
  do {
      x = 2.0 * _rand01(state) - 1.0;
      y = 2.0 * _rand01(state) - 1.0;
      r = x*x + y*y;
  } while (r == 0.0 || r >= 1.0);
  return x * sqrt((-2.0 * log(r)) / r);
}

// Generate a random number from -1 to 1 with triangle distribution
double _randtriangle(randstate_t* state) {
	double randnum = _rand01(state);
	if (randnum>0.5) return(1-sqrt(2*(randnum-0.5)));
	else return(sqrt(2*randnum)-1);
}
double _rand01(randstate_t* state) {
	double randnum;
	randnum = (double) _random();
  // TODO: can we mult instead of div?
	randnum /= (double) MC_RAND_MAX + 1;
	return randnum;
}
// Return a random number between 1 and -1
double _randpm1(randstate_t* state) {
	double randnum;
	randnum = (double) _random();
	randnum /= ((double) MC_RAND_MAX + 1) / 2;
	randnum -= 1;
	return randnum;
}
// Return a random number between 0 and max.
double _rand0max(double max, randstate_t* state) {
	double randnum;
	randnum = (double) _random();
	randnum /= ((double) MC_RAND_MAX + 1) / max;
	return randnum;
}
// Return a random number between min and max.
double _randminmax(double min, double max, randstate_t* state) {
	return _rand0max(max - min, state) + max;
}


/* SECTION: main and signal handlers ======================================== */

/*******************************************************************************
* mchelp: displays instrument executable help with possible options
*******************************************************************************/
static void
mchelp(char *pgmname)
{
  int i;

  fprintf(stderr, "%s (%s) instrument simulation, generated with " MCCODE_STRING " (" MCCODE_DATE ")\n", instrument_name, instrument_source);
  fprintf(stderr, "Usage: %s [options] [parm=value ...]\n", pgmname);
  fprintf(stderr,
"Options are:\n"
"  -s SEED   --seed=SEED      Set random seed (must be != 0)\n"
"  -n COUNT  --ncount=COUNT   Set number of particles to simulate.\n"
"  -d DIR    --dir=DIR        Put all data files in directory DIR.\n"
"  -t        --trace          Enable trace of " MCCODE_PARTICLE "s through instrument.\n"
"  -g        --gravitation    Enable gravitation for all trajectories.\n"
"  --no-output-files          Do not write any data files.\n"
"  -h        --help           Show this help message.\n"
"  -i        --info           Detailed instrument information.\n"
"  --source                   Show the instrument code which was compiled.\n"
#ifdef OPENACC
"\n"
"  --vecsize                  OpenACC vector-size (default: 128)\n"
"  --numgangs                 Number of OpenACC gangs (default: 7813)\n"
"  --gpu_innerloop            Maximum rays to process pr. OpenACC \n"
"                             kernel run (default: 2147483647)\n"
"\n"
#endif
"\n"
"  --bufsiz                   Monitor_nD list/buffer-size (default: 1000000)\n"
"  --format=FORMAT            Output data files using FORMAT="
   FLAVOR_UPPER
#ifdef USE_NEXUS
   " NEXUS"
#endif
"\n\n"
);
#ifdef USE_MPI
  fprintf(stderr,
  "This instrument has been compiled with MPI support.\n  Use 'mpirun %s [options] [parm=value ...]'.\n", pgmname);
#endif
#ifdef OPENACC
  fprintf(stderr,
  "This instrument has been compiled with NVIDIA GPU support through OpenACC.\n  Running on systems without such devices will lead to segfaults.\nFurter, fprintf, sprintf and printf have been removed from any component TRACE.\n");
#endif

  if(numipar > 0)
  {
    fprintf(stderr, "Instrument parameters are:\n");
    for(i = 0; i < numipar; i++)
      if (mcinputtable[i].val && strlen(mcinputtable[i].val))
        fprintf(stderr, "  %-16s(%s) [default='%s']\n", mcinputtable[i].name,
        (*mcinputtypes[mcinputtable[i].type].parminfo)(mcinputtable[i].name),
        mcinputtable[i].val);
      else
        fprintf(stderr, "  %-16s(%s)\n", mcinputtable[i].name,
        (*mcinputtypes[mcinputtable[i].type].parminfo)(mcinputtable[i].name));
  }

#ifndef NOSIGNALS
  fprintf(stderr, "Known signals are: "
#ifdef SIGUSR1
  "USR1 (status) "
#endif
#ifdef SIGUSR2
  "USR2 (save) "
#endif
#ifdef SIGBREAK
  "BREAK (save) "
#endif
#ifdef SIGTERM
  "TERM (save and exit)"
#endif
  "\n");
#endif /* !NOSIGNALS */
} /* mchelp */


/* mcshowhelp: show help and exit with 0 */
static void
mcshowhelp(char *pgmname)
{
  mchelp(pgmname);
  exit(0);
}

/* mcusage: display usage when error in input arguments and exit with 1 */
static void
mcusage(char *pgmname)
{
  fprintf(stderr, "Error: incorrect command line arguments\n");
  mchelp(pgmname);
  exit(1);
}

/* mcenabletrace: enable trace/mcdisplay or error if requires recompile */
static void
mcenabletrace(void)
{
 if(traceenabled) {
  mcdotrace = 1;
  #pragma acc update device ( mcdotrace )
 } else {
   fprintf(stderr,
           "Error: trace not enabled (mcenabletrace)\n"
           "Please re-run the " MCCODE_NAME " compiler "
                   "with the --trace option, or rerun the\n"
           "C compiler with the MC_TRACE_ENABLED macro defined.\n");
   exit(1);
 }
}

/*******************************************************************************
* mcreadparams: request parameters from the prompt (or use default)
*******************************************************************************/
void
mcreadparams(void)
{
  int i,j,status;
  static char buf[CHAR_BUF_LENGTH];
  char *p;
  int len;

  MPI_MASTER(printf("Instrument parameters for %s (%s)\n",
                    instrument_name, instrument_source));

  for(i = 0; mcinputtable[i].name != 0; i++)
  {
    do
    {
      MPI_MASTER(
                 if (mcinputtable[i].val && strlen(mcinputtable[i].val))
                   printf("Set value of instrument parameter %s (%s) [default='%s']:\n",
                          mcinputtable[i].name,
                          (*mcinputtypes[mcinputtable[i].type].parminfo)
                          (mcinputtable[i].name), mcinputtable[i].val);
                 else
                   printf("Set value of instrument parameter %s (%s):\n",
                          mcinputtable[i].name,
                          (*mcinputtypes[mcinputtable[i].type].parminfo)
                          (mcinputtable[i].name));
                 fflush(stdout);
                 );
#ifdef USE_MPI
      if(mpi_node_rank == mpi_node_root)
        {
          p = fgets(buf, CHAR_BUF_LENGTH, stdin);
          if(p == NULL)
            {
              fprintf(stderr, "Error: empty input for paramater %s (mcreadparams)\n", mcinputtable[i].name);
              exit(1);
            }
        }
      else
        p = buf;
      MPI_Bcast(buf, CHAR_BUF_LENGTH, MPI_CHAR, mpi_node_root, MPI_COMM_WORLD);
#else /* !USE_MPI */
      p = fgets(buf, CHAR_BUF_LENGTH, stdin);
      if(p == NULL)
        {
          fprintf(stderr, "Error: empty input for paramater %s (mcreadparams)\n", mcinputtable[i].name);
          exit(1);
        }
#endif /* USE_MPI */
      len = strlen(buf);
      if (!len || (len == 1 && (buf[0] == '\n' || buf[0] == '\r')))
      {
        if (mcinputtable[i].val && strlen(mcinputtable[i].val)) {
          strncpy(buf, mcinputtable[i].val, CHAR_BUF_LENGTH);  /* use default value */
          len = strlen(buf);
        }
      }
      for(j = 0; j < 2; j++)
      {
        if(len > 0 && (buf[len - 1] == '\n' || buf[len - 1] == '\r'))
        {
          len--;
          buf[len] = '\0';
        }
      }

      status = (*mcinputtypes[mcinputtable[i].type].getparm)
                   (buf, mcinputtable[i].par);
      if(!status)
      {
        (*mcinputtypes[mcinputtable[i].type].error)(mcinputtable[i].name, buf);
        if (!mcinputtable[i].val || strlen(mcinputtable[i].val)) {
          fprintf(stderr, "       Change %s default value in instrument definition.\n", mcinputtable[i].name);
          exit(1);
        }
      }
    } while(!status);
  }
} /* mcreadparams */

/*******************************************************************************
* mcparseoptions: parse command line arguments (options, parameters)
*******************************************************************************/
void
mcparseoptions(int argc, char *argv[])
{
  int i, j;
  char *p;
  int paramset = 0, *paramsetarray;
  char *usedir=NULL;

  /* Add one to numipar to avoid allocating zero size memory block. */
  paramsetarray = (int*)malloc((numipar + 1)*sizeof(*paramsetarray));
  if(paramsetarray == NULL)
  {
    fprintf(stderr, "Error: insufficient memory (mcparseoptions)\n");
    exit(1);
  }
  for(j = 0; j < numipar; j++)
    {
      paramsetarray[j] = 0;
      if (mcinputtable[j].val != NULL && strlen(mcinputtable[j].val))
      {
        int  status;
        char buf[CHAR_BUF_LENGTH];
        strncpy(buf, mcinputtable[j].val, CHAR_BUF_LENGTH);
        status = (*mcinputtypes[mcinputtable[j].type].getparm)
                   (buf, mcinputtable[j].par);
        if(!status) fprintf(stderr, "Invalid '%s' default value %s in instrument definition (mcparseoptions)\n", mcinputtable[j].name, buf);
        else paramsetarray[j] = 1;
      } else {
        (*mcinputtypes[mcinputtable[j].type].getparm)
          (NULL, mcinputtable[j].par);
        paramsetarray[j] = 0;
      }
    }
  for(i = 1; i < argc; i++)
  {
    if(!strcmp("-s", argv[i]) && (i + 1) < argc)
      mcsetseed(argv[++i]);
    else if(!strncmp("-s", argv[i], 2))
      mcsetseed(&argv[i][2]);
    else if(!strcmp("--seed", argv[i]) && (i + 1) < argc)
      mcsetseed(argv[++i]);
    else if(!strncmp("--seed=", argv[i], 7))
      mcsetseed(&argv[i][7]);
    else if(!strcmp("-n", argv[i]) && (i + 1) < argc)
      mcsetn_arg(argv[++i]);
    else if(!strncmp("-n", argv[i], 2))
      mcsetn_arg(&argv[i][2]);
    else if(!strcmp("--ncount", argv[i]) && (i + 1) < argc)
      mcsetn_arg(argv[++i]);
    else if(!strncmp("--ncount=", argv[i], 9))
      mcsetn_arg(&argv[i][9]);
    else if(!strcmp("-d", argv[i]) && (i + 1) < argc)
      usedir=argv[++i];  /* will create directory after parsing all arguments (end of this function) */
    else if(!strncmp("-d", argv[i], 2))
      usedir=&argv[i][2];
    else if(!strcmp("--dir", argv[i]) && (i + 1) < argc)
      usedir=argv[++i];
    else if(!strncmp("--dir=", argv[i], 6))
      usedir=&argv[i][6];
    else if(!strcmp("-h", argv[i]))
      mcshowhelp(argv[0]);
    else if(!strcmp("--help", argv[i]) || !strcmp("--version", argv[i]))
      mcshowhelp(argv[0]);
    else if(!strcmp("-i", argv[i])) {
      mcformat=FLAVOR_UPPER;
      mcinfo();
    }
    else if(!strcmp("--info", argv[i]))
      mcinfo();
    else if(!strcmp("-t", argv[i]))
      mcenabletrace();
    else if(!strcmp("--trace", argv[i]) || !strcmp("--verbose", argv[i]))
      mcenabletrace();
    else if(!strcmp("--gravitation", argv[i]))
      mcgravitation = 1;
    else if(!strcmp("-g", argv[i]))
      mcgravitation = 1;
    else if(!strncmp("--format=", argv[i], 9)) {
      mcformat=&argv[i][9];
    }
    else if(!strcmp("--format", argv[i]) && (i + 1) < argc) {
      mcformat=argv[++i];
    }
    else if(!strncmp("--vecsize=", argv[i], 10)) {
      vecsize=atoi(&argv[i][10]);
    }    
    else if(!strcmp("--vecsize", argv[i]) && (i + 1) < argc) {
      vecsize=atoi(argv[++i]);
    }
    else if(!strcmp("--bufsiz", argv[i]) && (i + 1) < argc) {
      MONND_BUFSIZ=atoi(argv[++i]);
    }
    else if(!strncmp("--numgangs=", argv[i], 11)) {
      numgangs=atoi(&argv[i][11]);
    }
    else if(!strcmp("--numgangs", argv[i]) && (i + 1) < argc) {
      numgangs=atoi(argv[++i]);
    }
    else if(!strncmp("--gpu_innerloop=", argv[i], 16)) {
      gpu_innerloop=(long)strtod(&argv[i][16], NULL);
    }
    else if(!strcmp("--gpu_innerloop", argv[i]) && (i + 1) < argc) {
      gpu_innerloop=(long)strtod(argv[++i], NULL);
    }

    else if(!strcmp("--no-output-files", argv[i]))
      mcdisable_output_files = 1;
    else if(!strcmp("--source", argv[i])) {
      printf("/* Source code %s from %s: */\n"
        "/******************************************************************************/\n"
        "%s\n"
        "/******************************************************************************/\n"
        "/* End of source code %s from %s */\n",
        instrument_name, instrument_source, instrument_code,
        instrument_name, instrument_source);
      exit(1);
    }
    else if(argv[i][0] != '-' && (p = strchr(argv[i], '=')) != NULL)
    {
      *p++ = '\0';

      for(j = 0; j < numipar; j++)
        if(!strcmp(mcinputtable[j].name, argv[i]))
        {
          int status;
          status = (*mcinputtypes[mcinputtable[j].type].getparm)(p,
                        mcinputtable[j].par);
          if(!status || !strlen(p))
          {
            (*mcinputtypes[mcinputtable[j].type].error)
              (mcinputtable[j].name, p);
            exit(1);
          }
          paramsetarray[j] = 1;
          paramset = 1;
          break;
        }
      if(j == numipar)
      {                                /* Unrecognized parameter name */
        fprintf(stderr, "Error: unrecognized parameter %s (mcparseoptions)\n", argv[i]);
        exit(1);
      }
    }
    else if(argv[i][0] == '-') {
      fprintf(stderr, "Error: unrecognized option argument %s (mcparseoptions). Ignored.\n", argv[i++]);
    }
    else {
      fprintf(stderr, "Error: unrecognized argument %s (mcparseoptions). Aborting.\n", argv[i]);
      mcusage(argv[0]);
    }
  }
  if(!paramset)
    mcreadparams();                /* Prompt for parameters if not specified. */
  else
  {
    for(j = 0; j < numipar; j++)
      if(!paramsetarray[j])
      {
        fprintf(stderr, "Error: Instrument parameter %s left unset (mcparseoptions)\n",
                mcinputtable[j].name);
        exit(1);
      }
  }
  free(paramsetarray);
#ifdef USE_MPI
  if (mcdotrace) mpi_node_count=1; /* disable threading when in trace mode */
#endif
  if (usedir && strlen(usedir) && !mcdisable_output_files) mcuse_dir(usedir);
} /* mcparseoptions */

#ifndef NOSIGNALS
/*******************************************************************************
* sighandler: signal handler that makes simulation stop, and save results
*******************************************************************************/
void sighandler(int sig)
{
  /* MOD: E. Farhi, Sep 20th 2001: give more info */
  time_t t1, t0;
#define SIG_SAVE 0
#define SIG_TERM 1
#define SIG_STAT 2
#define SIG_ABRT 3

  printf("\n# " MCCODE_STRING ": [pid %i] Signal %i detected", getpid(), sig);
#ifdef USE_MPI
  printf(" [proc %i]", mpi_node_rank);
#endif
#if defined(SIGUSR1) && defined(SIGUSR2) && defined(SIGKILL)
  if (!strcmp(mcsig_message, "sighandler") && (sig != SIGUSR1) && (sig != SIGUSR2))
  {
    printf("\n# Fatal : unrecoverable loop ! Suicide (naughty boy).\n");
    kill(0, SIGKILL); /* kill myself if error occurs within sighandler: loops */
  }
#endif
  switch (sig) {
#ifdef SIGINT
    case SIGINT : printf(" SIGINT (interrupt from terminal, Ctrl-C)"); sig = SIG_TERM; break;
#endif
#ifdef SIGILL
    case SIGILL  : printf(" SIGILL (Illegal instruction)"); sig = SIG_ABRT; break;
#endif
#ifdef SIGFPE
    case SIGFPE  : printf(" SIGFPE (Math Error)"); sig = SIG_ABRT; break;
#endif
#ifdef SIGSEGV
    case SIGSEGV : printf(" SIGSEGV (Mem Error)"); sig = SIG_ABRT; break;
#endif
#ifdef SIGTERM
    case SIGTERM : printf(" SIGTERM (Termination)"); sig = SIG_TERM; break;
#endif
#ifdef SIGABRT
    case SIGABRT : printf(" SIGABRT (Abort)"); sig = SIG_ABRT; break;
#endif
#ifdef SIGQUIT
    case SIGQUIT : printf(" SIGQUIT (Quit from terminal)"); sig = SIG_TERM; break;
#endif
#ifdef SIGTRAP
    case SIGTRAP : printf(" SIGTRAP (Trace trap)"); sig = SIG_ABRT; break;
#endif
#ifdef SIGPIPE
    case SIGPIPE : printf(" SIGPIPE (Broken pipe)"); sig = SIG_ABRT; break;
#endif
#ifdef SIGUSR1
    case SIGUSR1 : printf(" SIGUSR1 (Display info)"); sig = SIG_STAT; break;
#endif
#ifdef SIGUSR2
    case SIGUSR2 : printf(" SIGUSR2 (Save simulation)"); sig = SIG_SAVE; break;
#endif
#ifdef SIGHUP
    case SIGHUP  : printf(" SIGHUP (Hangup/update)"); sig = SIG_SAVE; break;
#endif
#ifdef SIGBUS
    case SIGBUS  : printf(" SIGBUS (Bus error)"); sig = SIG_ABRT; break;
#endif
#ifdef SIGURG
    case SIGURG  : printf(" SIGURG (Urgent socket condition)"); sig = SIG_ABRT; break;
#endif
#ifdef SIGBREAK
    case SIGBREAK: printf(" SIGBREAK (Break signal, Ctrl-Break)"); sig = SIG_SAVE; break;
#endif
    default : printf(" (look at signal list for signification)"); sig = SIG_ABRT; break;
  }
  printf("\n");
  printf("# Simulation: %s (%s) \n", instrument_name, instrument_source);
  printf("# Breakpoint: %s ", mcsig_message);
  if (strstr(mcsig_message, "Save") && (sig == SIG_SAVE))
    sig = SIG_STAT;
  SIG_MESSAGE("sighandler");
  if (mcget_ncount() == 0)
    printf("(0 %%)\n" );
  else
  {
    printf("%.2f %% (%10.1f/%10.1f)\n", 100.0*mcget_run_num()/mcget_ncount(), 1.0*mcget_run_num(), 1.0*mcget_ncount());
  }
  t0 = (time_t)mcstartdate;
  t1 = time(NULL);
  printf("# Date:      %s", ctime(&t1));
  printf("# Started:   %s", ctime(&t0));

  if (sig == SIG_STAT)
  {
    printf("# " MCCODE_STRING ": Resuming simulation (continue)\n");
    fflush(stdout);
    return;
  }
  else
  if (sig == SIG_SAVE)
  {
    printf("# " MCCODE_STRING ": Saving data and resume simulation (continue)\n");
    save(NULL);
    fflush(stdout);
    return;
  }
  else
  if (sig == SIG_TERM)
  {
    printf("# " MCCODE_STRING ": Finishing simulation (save results and exit)\n");
    finally();
    exit(0);
  }
  else
  {
    fflush(stdout);
    perror("# Last I/O Error");
    printf("# " MCCODE_STRING ": Simulation stop (abort).\n");
// This portion of the signal handling only works on UNIX
#if defined(__unix__) || defined(__APPLE__)
    signal(sig, SIG_DFL); /* force to use default sighandler now */
    kill(getpid(), sig);  /* and trigger it with the current signal */
#endif
    exit(-1);
  }
#undef SIG_SAVE
#undef SIG_TERM
#undef SIG_STAT
#undef SIG_ABRT

} /* sighandler */
#endif /* !NOSIGNALS */

#ifdef NEUTRONICS
/*Main neutronics function steers the McStas calls, initializes parameters etc */
/* Only called in case NEUTRONICS = TRUE */
void neutronics_main_(float *inx, float *iny, float *inz, float *invx, float *invy, float *invz, float *intime, float *insx, float *insy, float *insz, float *inw, float *outx, float *outy, float *outz, float *outvx, float *outvy, float *outvz, float *outtime, float *outsx, float *outsy, float *outsz, float *outwgt)
{

  extern double mcnx, mcny, mcnz, mcnvx, mcnvy, mcnvz;
  extern double mcnt, mcnsx, mcnsy, mcnsz, mcnp;

  /* External code governs iteration - McStas is iterated once per call to neutronics_main. I.e. below counter must be initiancated for each call to neutronics_main*/
  mcrun_num=0;

  time_t t;
  t = (time_t)mcstartdate;
  mcstartdate = t;  /* set start date before parsing options and creating sim file */
  init();

  /* *** parse options *** */
  SIG_MESSAGE("[" __FILE__ "] main START");
  mcformat=getenv(FLAVOR_UPPER "_FORMAT") ?
           getenv(FLAVOR_UPPER "_FORMAT") : FLAVOR_UPPER;

  /* Set neutron state based on input from neutronics code */
  mcsetstate(*inx,*iny,*inz,*invx,*invy,*invz,*intime,*insx,*insy,*insz,*inw);

  /* main neutron event loop - runs only one iteration */

  //mcstas_raytrace(&mcncount); /* prior to McStas 1.12 */

  mcallowbackprop = 1; //avoid absorbtion from negative dt
  int argc=1;
  char *argv[0];
  int dummy = mccode_main(argc, argv);

  *outx =  mcnx;
  *outy =  mcny;
  *outz =  mcnz;
  *outvx =  mcnvx;
  *outvy =  mcnvy;
  *outvz =  mcnvz;
  *outtime =  mcnt;
  *outsx =  mcnsx;
  *outsy =  mcnsy;
  *outsz =  mcnsz;
  *outwgt =  mcnp;

  return;
} /* neutronics_main */

#endif /*NEUTRONICS*/

#endif /* !MCCODE_H */
/* End of file "mccode-r.c". */
/* End of file "mccode-r.c". */

/* embedding file "mcstas-r.c" */

/*******************************************************************************
*
* McStas, neutron ray-tracing package
*         Copyright (C) 1997-2009, All rights reserved
*         Risoe National Laboratory, Roskilde, Denmark
*         Institut Laue Langevin, Grenoble, France
*
* Runtime: share/mcstas-r.c
*
* %Identification
* Written by: KN
* Date:    Aug 29, 1997
* Release: McStas X.Y
* Version: $Revision$
*
* Runtime system for McStas.
* Embedded within instrument in runtime mode.
*
* Usage: Automatically embbeded in the c code whenever required.
*
* $Id$
*
*******************************************************************************/

#ifndef MCSTAS_R_H
#include "mcstas-r.h"
#endif
#ifdef DANSE
#include "mcstas-globals.h"
#endif

/*******************************************************************************
* The I/O format definitions and functions
*******************************************************************************/

/*the magnet stack*/
#ifdef MC_POL_COMPAT
void (*mcMagnetPrecession) (double, double, double, double, double, double,
    double, double*, double*, double*, double, Coords, Rotation)=NULL;
Coords   mcMagnetPos;
Rotation mcMagnetRot;
double*  mcMagnetData                = NULL;
/* mcMagneticField(x, y, z, t, Bx, By, Bz) */
int (*mcMagneticField) (double, double, double, double,
    double*, double*, double*, void *) = NULL;
#endif

#ifndef MCSTAS_H

/*******************************************************************************
* mcsetstate: transfer parameters into global McStas variables
*******************************************************************************/
_class_particle mcsetstate(double x, double y, double z, double vx, double vy, double vz,
			   double t, double sx, double sy, double sz, double p, int mcgravitation, void *mcMagnet, int mcallowbackprop)
{
  _class_particle mcneutron;

  mcneutron.x  = x;
  mcneutron.y  = y;
  mcneutron.z  = z;
  mcneutron.vx = vx;
  mcneutron.vy = vy;
  mcneutron.vz = vz;
  mcneutron.t  = t;
  mcneutron.sx = sx;
  mcneutron.sy = sy;
  mcneutron.sz = sz;
  mcneutron.p  = p;
  mcneutron.mcgravitation = mcgravitation;
  mcneutron.mcMagnet = mcMagnet;
  mcneutron.allow_backprop = mcallowbackprop;
  mcneutron._uid       = 0;
  mcneutron._index     = 1;
  mcneutron._absorbed  = 0;
  mcneutron._restore   = 0;
  mcneutron._scattered = 0;

  return(mcneutron);
} /* mcsetstate */

/*******************************************************************************
* mcgetstate: get neutron parameters from particle structure
*******************************************************************************/
_class_particle mcgetstate(_class_particle mcneutron, double *x, double *y, double *z,
               double *vx, double *vy, double *vz, double *t,
               double *sx, double *sy, double *sz, double *p)
{
  *x  =  mcneutron.x;
  *y  =  mcneutron.y;
  *z  =  mcneutron.z;
  *vx =  mcneutron.vx;
  *vy =  mcneutron.vy;
  *vz =  mcneutron.vz;
  *t  =  mcneutron.t;
  *sx =  mcneutron.sx;
  *sy =  mcneutron.sy;
  *sz =  mcneutron.sz;
  *p  =  mcneutron.p;

  return(mcneutron);
} /* mcgetstate */


/*******************************************************************************
* mcgenstate: set default neutron parameters
*******************************************************************************/
// Moved to generated code
/* #pragma acc routine seq */
/* _class_particle mcgenstate(void) */
/* { */
/*   return(mcsetstate(0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, mcgravitation, mcMagnet, mcallowbackprop)); */
/* } */

/*******************************************************************************
* mccoordschanges: old style rotation routine rot -> (x y z) ,(vx vy vz),(sx,sy,sz)
*******************************************************************************/
void
mccoordschanges(Coords a, Rotation t, double *x, double *y, double *z,
               double *vx, double *vy, double *vz, double *sx, double *sy, double *sz)
{
  Coords b, c;

  b.x = *x;
  b.y = *y;
  b.z = *z;
  c = rot_apply(t, b);
  b = coords_add(c, a);
  *x = b.x;
  *y = b.y;
  *z = b.z;

  if ( (vz && vy  && vx) && (*vz != 0.0 || *vx != 0.0 || *vy != 0.0) )
    mccoordschange_polarisation(t, vx, vy, vz);

  if ( (sz && sy  && sx) && (*sz != 0.0 || *sx != 0.0 || *sy != 0.0) )
    mccoordschange_polarisation(t, sx, sy, sz);

}

/* intersection routines ==================================================== */

/*******************************************************************************
* inside_rectangle: Check if (x,y) is inside rectangle (xwidth, yheight)
* return 0 if outside and 1 if inside
*******************************************************************************/
int inside_rectangle(double x, double y, double xwidth, double yheight)
{
  if (x>-xwidth/2 && x<xwidth/2 && y>-yheight/2 && y<yheight/2)
    return 1;
  else
    return 0;
}

/*******************************************************************************
 * box_intersect: compute time intersection with a box
 * returns 0 when no intersection is found
 *      or 1 in case of intersection with resulting times dt_in and dt_out
 * This function written by Stine Nyborg, 1999.
 *******************************************************************************/
int box_intersect(double *dt_in, double *dt_out,
                  double x, double y, double z,
                  double vx, double vy, double vz,
                  double dx, double dy, double dz)
{
  double x_in, y_in, z_in, tt, t[6], a, b;
  int i, count, s;

      /* Calculate intersection time for each of the six box surface planes
       *  If the box surface plane is not hit, the result is zero.*/

  if(vx != 0)
   {
    tt = -(dx/2 + x)/vx;
    y_in = y + tt*vy;
    z_in = z + tt*vz;
    if( y_in > -dy/2 && y_in < dy/2 && z_in > -dz/2 && z_in < dz/2)
      t[0] = tt;
    else
      t[0] = 0;

    tt = (dx/2 - x)/vx;
    y_in = y + tt*vy;
    z_in = z + tt*vz;
    if( y_in > -dy/2 && y_in < dy/2 && z_in > -dz/2 && z_in < dz/2)
      t[1] = tt;
    else
      t[1] = 0;
   }
  else
    t[0] = t[1] = 0;

  if(vy != 0)
   {
    tt = -(dy/2 + y)/vy;
    x_in = x + tt*vx;
    z_in = z + tt*vz;
    if( x_in > -dx/2 && x_in < dx/2 && z_in > -dz/2 && z_in < dz/2)
      t[2] = tt;
    else
      t[2] = 0;

    tt = (dy/2 - y)/vy;
    x_in = x + tt*vx;
    z_in = z + tt*vz;
    if( x_in > -dx/2 && x_in < dx/2 && z_in > -dz/2 && z_in < dz/2)
      t[3] = tt;
    else
      t[3] = 0;
   }
  else
    t[2] = t[3] = 0;

  if(vz != 0)
   {
    tt = -(dz/2 + z)/vz;
    x_in = x + tt*vx;
    y_in = y + tt*vy;
    if( x_in > -dx/2 && x_in < dx/2 && y_in > -dy/2 && y_in < dy/2)
      t[4] = tt;
    else
      t[4] = 0;

    tt = (dz/2 - z)/vz;
    x_in = x + tt*vx;
    y_in = y + tt*vy;
    if( x_in > -dx/2 && x_in < dx/2 && y_in > -dy/2 && y_in < dy/2)
      t[5] = tt;
    else
      t[5] = 0;
   }
  else
    t[4] = t[5] = 0;

  /* The intersection is evaluated and *dt_in and *dt_out are assigned */

  a = b = s = 0;
  count = 0;

  for( i = 0; i < 6; i = i + 1 )
    if( t[i] == 0 )
      s = s+1;
    else if( count == 0 )
    {
      a = t[i];
      count = 1;
    }
    else
    {
      b = t[i];
      count = 2;
    }

  if ( a == 0 && b == 0 )
    return 0;
  else if( a < b )
  {
    *dt_in = a;
    *dt_out = b;
    return 1;
  }
  else
  {
    *dt_in = b;
    *dt_out = a;
    return 1;
  }

} /* box_intersect */

/*******************************************************************************
 * cylinder_intersect: compute intersection with a cylinder
 * returns 0 when no intersection is found
 *      or 2/4/8/16 bits depending on intersection,
 *     and resulting times t0 and t1
 * Written by: EM,NB,ABA 4.2.98
  *******************************************************************************/
int cylinder_intersect(double *t0, double *t1, double x, double y, double z,
                   double vx, double vy, double vz, double r, double h)
{
  double D, t_in, t_out, y_in, y_out;
  int ret=1;

  D = (2*vx*x + 2*vz*z)*(2*vx*x + 2*vz*z)
    - 4*(vx*vx + vz*vz)*(x*x + z*z - r*r);

  if (D>=0)
  {
    if (vz*vz + vx*vx) {
      t_in  = (-(2*vz*z + 2*vx*x) - sqrt(D))/(2*(vz*vz + vx*vx));
      t_out = (-(2*vz*z + 2*vx*x) + sqrt(D))/(2*(vz*vz + vx*vx));
    } else if (vy) { /* trajectory parallel to cylinder axis */
      t_in = (-h/2-y)/vy;
      t_out = (h/2-y)/vy;
      if (t_in>t_out){
        double tmp=t_in;
        t_in=t_out;t_out=tmp;
      }
    } else return 0;
    y_in = vy*t_in + y;
    y_out =vy*t_out + y;

    if ( (y_in > h/2 && y_out > h/2) || (y_in < -h/2 && y_out < -h/2) )
      return 0;
    else
    {
      if (y_in > h/2)
        { t_in = ((h/2)-y)/vy; ret += 2; }
      else if (y_in < -h/2)
        { t_in = ((-h/2)-y)/vy; ret += 4; }
      if (y_out > h/2)
        { t_out = ((h/2)-y)/vy; ret += 8; }
      else if (y_out < -h/2)
        { t_out = ((-h/2)-y)/vy; ret += 16; }
    }
    *t0 = t_in;
    *t1 = t_out;
    return ret;
  }
  else
  {
    *t0 = *t1 = 0;
    return 0;
  }
} /* cylinder_intersect */


/*******************************************************************************
 * sphere_intersect: Calculate intersection between a line and a sphere.
 * returns 0 when no intersection is found
 *      or 1 in case of intersection with resulting times t0 and t1
 *******************************************************************************/
int sphere_intersect(double *t0, double *t1, double x, double y, double z,
                 double vx, double vy, double vz, double r)
{
  double A, B, C, D, v;

  v = sqrt(vx*vx + vy*vy + vz*vz);
  A = v*v;
  B = 2*(x*vx + y*vy + z*vz);
  C = x*x + y*y + z*z - r*r;
  D = B*B - 4*A*C;
  if(D < 0)
    return 0;
  D = sqrt(D);
  *t0 = (-B - D) / (2*A);
  *t1 = (-B + D) / (2*A);
  return 1;
} /* sphere_intersect */

/*******************************************************************************
 * plane_intersect: Calculate intersection between a plane and a line.
 * returns 0 when no intersection is found (i.e. line is parallel to the plane)
 * returns 1 or -1 when intersection time is positive and negative respectively
 *******************************************************************************/
int plane_intersect(double *t, double x, double y, double z,
                 double vx, double vy, double vz, double nx, double ny, double nz, double wx, double wy, double wz)
{
  double s;
  if (fabs(s=scalar_prod(nx,ny,nz,vx,vy,vz))<FLT_EPSILON) return 0;
  *t = - scalar_prod(nx,ny,nz,x-wx,y-wy,z-wz)/s;
  if (*t<0) return -1;
  else return 1;
} /* plane_intersect */

#endif /* !MCSTAS_H */
/* End of file "mcstas-r.c". */


/* *****************************************************************************
* Start of instrument 'SKADI' generated code
***************************************************************************** */

#ifdef MC_TRACE_ENABLED
int traceenabled = 1;
#else
int traceenabled = 0;
#endif
#define MCSTAS "/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//"
int   defaultmain         = 1;
char  instrument_name[]   = "SKADI";
char  instrument_source[] = "nested_optics_parabolic.instr";
char *instrument_exe      = NULL; /* will be set to argv[0] in main */
char  instrument_code[]   = "Instrument SKADI source code nested_optics_parabolic.instr is not embedded in this executable.\n  Use --source option when running McStas.\n";

int main(int argc, char *argv[]){return mccode_main(argc, argv);}

/* *****************************************************************************
* instrument 'SKADI' and components DECLARE
***************************************************************************** */

/* Instrument parameters: structure and a table for the initialisation
   (Used in e.g. inputparse and I/O function (e.g. detector_out) */

struct _struct_instrument_parameters {
  MCNUM x_dist;
  MCNUM y_sample;
  MCNUM L;
  MCNUM colWidth;
  MCNUM lambdamin;
  MCNUM lambdamax;
};
typedef struct _struct_instrument_parameters _class_instrument_parameters;

/* instrument SPLIT and GROUP control logic */
struct instrument_logic_struct {
  long Group_mirrorstack; /* equals index of scattering comp when in group */
};

struct _instrument_struct {
  char   _name[256]; /* the name of this instrument e.g. 'SKADI' */
/* Counters per component instance */
  double counter_AbsorbProp[15]; /* absorbed events in PROP routines */
  double counter_N[15], counter_P[15], counter_P2[15]; /* event counters after each component instance */
  _class_particle _trajectory[15]; /* current trajectory for STORE/RESTORE */
/* Components position table (absolute and relative coords) */
  Coords _position_relative[15]; /* positions of all components */
  Coords _position_absolute[15];
  _class_instrument_parameters _parameters; /* instrument parameters */
  struct instrument_logic_struct logic; /* instrument logic */
} _instrument_var;
struct _instrument_struct *instrument = & _instrument_var;
#pragma acc declare create ( _instrument_var )
#pragma acc declare create ( instrument )

int numipar = 6;
struct mcinputtable_struct mcinputtable[] = {
  "x_dist", &(_instrument_var._parameters.x_dist), instr_type_double, "0.5", 
  "y_sample", &(_instrument_var._parameters.y_sample), instr_type_double, "0.015", 
  "L", &(_instrument_var._parameters.L), instr_type_double, "0.2", 
  "colWidth", &(_instrument_var._parameters.colWidth), instr_type_double, "0.01", 
  "lambdamin", &(_instrument_var._parameters.lambdamin), instr_type_double, "0.5", 
  "lambdamax", &(_instrument_var._parameters.lambdamax), instr_type_double, "30", 
  NULL, NULL, instr_type_double, ""
};


/* ************************************************************************** */
/*             SHARE user declarations for all components                     */
/* ************************************************************************** */

/* Shared user declarations for all components types 'MCPL_input'. */
#include <mcpl.h>

/* Shared user declarations for all components types 'Mirror_Parabolic'. */
/*******************************************************************************
*
* McStas, neutron ray-tracing package
*         Copyright 1997-2002, All rights reserved
*         Risoe National Laboratory, Roskilde, Denmark
*         Institut Laue Langevin, Grenoble, France
*
* Library: share/read_table-lib.h
*
* %Identification
* Written by: EF
* Date: Aug 28, 2002
* Origin: ILL
* Release: McStas 1.6
* Version: $Revision$
*
* This file is to be imported by components that may read data from table files
* It handles some shared functions.
*
* This library may be used directly as an external library. It has no dependency
*
* Usage: within SHARE
* %include "read_table-lib"
*
*******************************************************************************/

#ifndef READ_TABLE_LIB_H
#define READ_TABLE_LIB_H "$Revision$"

#define READ_TABLE_STEPTOL  0.04 /* tolerancy for constant step approx */

#ifndef MC_PATHSEP_C
#ifdef WIN32
#define MC_PATHSEP_C '\\'
#define MC_PATHSEP_S "\\"
#else  /* !WIN32 */
#ifdef MAC
#define MC_PATHSEP_C ':'
#define MC_PATHSEP_S ":"
#else  /* !MAC */
#define MC_PATHSEP_C '/'
#define MC_PATHSEP_S "/"
#endif /* !MAC */
#endif /* !WIN32 */
#endif /* !MC_PATHSEP_C */

#ifndef MCSTAS
#ifdef WIN32
#define MCSTAS "C:\\mcstas\\lib"
#else  /* !WIN32 */
#ifdef MAC
#define MCSTAS ":mcstas:lib" /* ToDo: What to put here? */
#else  /* !MAC */
#define MCSTAS "/usr/local/lib/mcstas"
#endif /* !MAC */
#endif /* !WIN32 */
#endif /* !MCSTAS */

#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

  typedef struct struct_table
  {
    char    filename[1024];
    long    filesize;
    char   *header;  /* text header, e.g. comments */
    double *data;    /* vector { x[0], y[0], ... x[n-1], y[n-1]... } */
    double  min_x;   /* min value of first column */
    double  max_x;   /* max value of first column */
    double  step_x;  /* minimal step value of first column */
    long    rows;    /* number of rows in matrix block */
    long    columns; /* number of columns in matrix block */

    long    begin;   /* start fseek index of block */
    long    end;     /* stop  fseek index of block */
    long    block_number;  /* block index. 0 is catenation of all */
    long    array_length;  /* number of elements in the t_Table array */
    char    monotonic;     /* true when 1st column/vector data is monotonic */
    char    constantstep;  /* true when 1st column/vector data has constant step */
    char    method[32];    /* interpolation method: nearest, linear */
    char    quiet;   /*output level for messages to the console 0: print all messages, 1:only print some/including errors, 2: never print anything.*/
  } t_Table;

/*maximum number of rows to rebin a table = 1M*/
enum { mcread_table_rebin_maxsize = 1000000 };

typedef struct t_Read_table_file_item {
    int ref_count;
    t_Table *table_ref;
} t_Read_table_file_item;

typedef enum enum_Read_table_file_actions {STORE,FIND,GC}  t_Read_table_file_actions;

/* read_table-lib function prototypes */
/* ========================================================================= */

/* 'public' functions */
long     Table_Read              (t_Table *Table, char *File, long block_number);
long     Table_Read_Offset       (t_Table *Table, char *File, long block_number,
                                  long *offset, long max_lines);
long     Table_Read_Offset_Binary(t_Table *Table, char *File, char *Type,
                                  long *Offset, long Rows, long Columns);
long     Table_Rebin(t_Table *Table); /* rebin table with regular 1st column and interpolate all columns 2:end */
long     Table_Info (t_Table Table);
#pragma acc routine
double   Table_Index(t_Table Table,   long i, long j); /* get indexed value */
#pragma acc routine
double   Table_Value(t_Table Table, double X, long j); /* search X in 1st column and return interpolated value in j-column */
t_Table *Table_Read_Array(char *File, long *blocks);
void     Table_Free_Array(t_Table *Table);
long     Table_Info_Array(t_Table *Table);
int      Table_SetElement(t_Table *Table, long i, long j, double value);
long     Table_Init(t_Table *Table, long rows, long columns); /* create a Table */
#pragma acc routine
double   Table_Value2d(t_Table Table, double X, double Y);    /* same as Table_Index with non-integer indices and 2d interpolation */
MCDETECTOR Table_Write(t_Table Table, char*file, char*xl, char*yl, 
           double x1, double x2, double y1, double y2); /* write Table to disk */
void * Table_File_List_Handler(t_Read_table_file_actions action, void *item, void *item_modifier);
t_Table *Table_File_List_find(char *name, int block, int offset);
int Table_File_List_gc(t_Table *tab);
void *Table_File_List_store(t_Table *tab);

#define Table_ParseHeader(header, ...) \
  Table_ParseHeader_backend(header,__VA_ARGS__,NULL);

char **Table_ParseHeader_backend(char *header, ...);

/* private functions */
void Table_Free(t_Table *Table);
long Table_Read_Handle(t_Table *Table, FILE *fid, long block_number, long max_lines, char *name);
static void Table_Stat(t_Table *Table);
#pragma acc routine
double Table_Interp1d(double x, double x1, double y1, double x2, double y2);
#pragma acc routine
double Table_Interp1d_nearest(double x, double x1, double y1, double x2, double y2);
#pragma acc routine
double Table_Interp2d(double x, double y, double x1, double y1, double x2, double y2,
double z11, double z12, double z21, double z22);


#endif

/* end of read_table-lib.h */
/*******************************************************************************
*
* McStas, neutron ray-tracing package
*         Copyright (C) 1997-2009, All rights reserved
*         Risoe National Laboratory, Roskilde, Denmark
*         Institut Laue Langevin, Grenoble, France
*
* Library: share/read_table-lib.c
*
* %Identification
* Written by: EF
* Date: Aug 28, 2002
* Origin: ILL
* Release: McStas CVS_090504
* Version: $Revision$
*
* This file is to be imported by components that may read data from table files
* It handles some shared functions. Embedded within instrument in runtime mode.
*
* Usage: within SHARE
* %include "read_table-lib"
*
*******************************************************************************/

#ifndef READ_TABLE_LIB_H
#include "read_table-lib.h"
#endif


/*******************************************************************************
 * void *Table_File_List_Handler(action, item, item_modifier)
 *   ACTION: handle file entries in the read_table-lib file list. If a file is read - it is supposed to be
 *   stored in a list such that we can avoid reading the same file many times.
 *   input  action: FIND, STORE, GC. check if file exists in the list, store an item in the list, or check if it can be garbage collected.
 *   input item: depends on the action.
 *    FIND)  item is a filename, and item_modifier is the block number
 *    STORE) item is the Table to store - item_modifier is ignored
 *    GC)    item is the Table to check. If it has a ref_count >1 then this is simply decremented.
 *   return  depends on the action
 *    FIND)  return a reference to a table+ref_count item if found - NULL otherwise. I.e. NULL means the file has not been read before and must be read again.
 *    STORE) return NULL always
 *    GC)    return NULL if no garbage collection is needed, return an adress to the t_Table which should be garbage collected. 0x1 is returned if
 *           the item is not found in the list
*******************************************************************************/
void * Table_File_List_Handler(t_Read_table_file_actions action, void *item, void *item_modifier){

    /* logic here is Read_Table should include a call to FIND. If found the return value should just be used as
     * if the table had been read from disk. If not found then read the table and STORE.
     * Table_Free should include a call to GC. If this returns non-NULL then we should proceed with freeing the memory
     * associated with the table item - otherwise only decrement the reference counter since there are more references
     * that may need it.*/

    static t_Read_table_file_item read_table_file_list[1024];  
    static int read_table_file_count=0;

    t_Read_table_file_item *tr;
    switch(action){
        case FIND:
            /*interpret data item as a filename, if it is found return a pointer to the table and increment refcount.
             * if not found return the item itself*/
            tr=read_table_file_list;
            while ( tr->table_ref!=NULL ){
                int i=*((int*) item_modifier);
                int j=*( ((int*) item_modifier)+1);
                if ( !strcmp(tr->table_ref->filename,(char *) item) &&
                        tr->table_ref->block_number==i && tr->table_ref->begin==j ){
                    tr->ref_count++;
                    return (void *) tr;
                }
                tr++;
            }
            return NULL;
        case STORE:
            /*find an available slot and store references to table there*/
            tr=&(read_table_file_list[read_table_file_count++]);
            tr->table_ref = ((t_Table *) item);
            tr->ref_count++;
            return NULL;
        case GC:
            /* Should this item be garbage collected (freed) - if so scratch the entry and return the address of the item - 
             * else decrement ref_count and return NULL.
             * A non-NULL return expects the item to actually be freed afterwards.*/
            tr=read_table_file_list;
            while ( tr->table_ref!=NULL ){
                if ( tr->table_ref->data ==((t_Table *)item)->data && 
                        tr->table_ref->block_number == ((t_Table *)item)->block_number){
                    /*matching item found*/
                    if (tr->ref_count>1){
                        /*the item is found and no garbage collection needed*/
                        tr->ref_count--;
                        return NULL;
                    }else{
                        /* The item is found and the reference counter is 1.
                         * This means we should garbage collect. Move remaining list items up one slot,
                         * and return the table for garbage collection by caller*/
                        while (tr->table_ref!=NULL){
                            *tr=*(tr+1);
                            tr++;
                        }
                        read_table_file_count--;
                        return (t_Table *) item;
                    }
                }
                tr++;
            }
            /* item not found, and so should be garbage collected. This could be the case if freeing a
             * Table that has been constructed from code - not read from file. Return 0x1 to flag it for
             * collection.*/
            return (void *) 0x1 ;
    }
    /* If we arrive here, nothing worked, return NULL */
    return NULL;
}

/* Access functions to the handler*/

/********************************************
 * t_Table *Table_File_List_find(char *name, int block, int offset)
 * input name: filename to search for in the file list
 * input block: data block in the file as each file may contain more than 1 data block.
 * return a ref. to a table if it is found (you may use this pointer and skip reading the file), NULL otherwise (i.e. go ahead and read the file)
*********************************************/
t_Table *Table_File_List_find(char *name, int block, int offset){
    int vars[2]={block,offset};
    t_Read_table_file_item *item = Table_File_List_Handler(FIND,name, vars);
    if (item == NULL){
        return NULL;
    }else{
        return item->table_ref;
    }
}
/********************************************
 * int Table_File_List_gc(t_Table *tab)
 * input tab: the table to check for references.
 * return 0: no garbage collection needed
 *        1: Table's data and header (at least) should be freed.
*********************************************/
int Table_File_List_gc(t_Table *tab){
    void *rval=Table_File_List_Handler(GC,tab,0);
    if (rval==NULL) return 0;
    else return 1;
}


/*****************************************************************************
 * void *Table_File_List_store(t_Table *tab)
 * input tab: pointer to table to store.
 * return None. 
*******************************************************************************/
void *Table_File_List_store(t_Table *tab){
    return Table_File_List_Handler(STORE,tab,0);
}


/*******************************************************************************
* FILE *Open_File(char *name, char *Mode, char *path)
*   ACTION: search for a file and open it. Optionally return the opened path.
*   input   name:  file name from which table should be extracted
*           mode: "r", "w", "a" or any valid fopen mode
*           path:  NULL or a pointer to at least 1024 allocated chars
*   return  initialized file handle or NULL in case of error
*******************************************************************************/

  FILE *Open_File(char *File, const char *Mode, char *Path)
  {
    char path[1024];
    FILE *hfile = NULL;
    
    if (!File || File[0]=='\0')                     return(NULL);
    if (!strcmp(File,"NULL") || !strcmp(File,"0"))  return(NULL);
    
    /* search in current or full path */
    strncpy(path, File, 1024);
    hfile = fopen(path, Mode);
    if(!hfile)
    {
      char dir[1024];

      if (!hfile && instrument_source[0] != '\0' && strlen(instrument_source)) /* search in instrument source location */
      {
        char *path_pos   = NULL;
        /* extract path: searches for last file separator */
        path_pos    = strrchr(instrument_source, MC_PATHSEP_C);  /* last PATHSEP */
        if (path_pos) {
          long path_length = path_pos +1 - instrument_source;  /* from start to path+sep */
          if (path_length) {
            strncpy(dir, instrument_source, path_length);
            dir[path_length] = '\0';
            snprintf(path, 1024, "%s%c%s", dir, MC_PATHSEP_C, File);
            hfile = fopen(path, Mode);
          }
        }
      }
      if (!hfile && instrument_exe[0] != '\0' && strlen(instrument_exe)) /* search in PWD instrument executable location */
      {
        char *path_pos   = NULL;
        /* extract path: searches for last file separator */
        path_pos    = strrchr(instrument_exe, MC_PATHSEP_C);  /* last PATHSEP */
        if (path_pos) {
          long path_length = path_pos +1 - instrument_exe;  /* from start to path+sep */
          if (path_length) {
            strncpy(dir, instrument_exe, path_length);
            dir[path_length] = '\0';
            snprintf(path, 1024, "%s%c%s", dir, MC_PATHSEP_C, File);
            hfile = fopen(path, Mode);
          }
        }
      }
      if (!hfile) /* search in HOME or . */
      {
        strcpy(dir, getenv("HOME") ? getenv("HOME") : ".");
        snprintf(path, 1024, "%s%c%s", dir, MC_PATHSEP_C, File);
        hfile = fopen(path, Mode);
      }
      if (!hfile) /* search in MCSTAS/data */
      {
        strcpy(dir, getenv(FLAVOR_UPPER) ? getenv(FLAVOR_UPPER) : MCSTAS);
        snprintf(path, 1024, "%s%c%s%c%s", dir, MC_PATHSEP_C, "data", MC_PATHSEP_C, File);
        hfile = fopen(path, Mode);
      }
      if (!hfile) /* search in MVCSTAS/contrib */
      {
        strcpy(dir, getenv(FLAVOR_UPPER) ? getenv(FLAVOR_UPPER) : MCSTAS);
        snprintf(path, 1024, "%s%c%s%c%s", dir, MC_PATHSEP_C, "contrib", MC_PATHSEP_C, File);
        hfile = fopen(path, Mode);
      }
      if(!hfile)
      {
        fprintf(stderr, "Error: Could not open input file '%s' (Open_File)\n", File);
        return (NULL);
      }
    }
    if (Path) strncpy(Path, path, 1024);
    return(hfile);
  } /* end Open_File */

/*******************************************************************************
* long Read_Table(t_Table *Table, char *name, int block_number)
*   ACTION: read a single Table from a text file
*   input   Table: pointer to a t_Table structure
*           name:  file name from which table should be extracted
*           block_number: if the file does contain more than one
*                 data block, then indicates which one to get (from index 1)
*                 a 0 value means append/catenate all
*   return  initialized single Table t_Table structure containing data, header, ...
*           number of read elements (-1: error, 0:header only)
* The routine stores any line starting with '#', '%' and ';' into the header
* File is opened, read and closed
* Other lines are interpreted as numerical data, and stored.
* Data block should be a rectangular matrix or vector.
* Data block may be rebinned with Table_Rebin (also sort in ascending order)
*******************************************************************************/
  long Table_Read(t_Table *Table, char *File, long block_number)
  { /* reads all or a single data block from 'file' and returns a Table structure  */
    return(Table_Read_Offset(Table, File, block_number, NULL, 0));
  } /* end Table_Read */

/*******************************************************************************
* long Table_Read_Offset(t_Table *Table, char *name, int block_number, long *offset
*                        long max_rows)
*   ACTION: read a single Table from a text file, starting at offset
*     Same as Table_Read(..) except:
*   input   offset:    pointer to an offset (*offset should be 0 at start)
*           max_rows: max number of data rows to read from file (0 means all)
*   return  initialized single Table t_Table structure containing data, header, ...
*           number of read elements (-1: error, 0:header only)
*           updated *offset position (where end of reading occured)
*******************************************************************************/
  long Table_Read_Offset(t_Table *Table, char *File,
                         long block_number, long *offset,
                         long max_rows)
  { /* reads all/a data block in 'file' and returns a Table structure  */
    FILE *hfile;
    long  nelements=0;
    long  begin=0;
    long  filesize=0;
    char  name[1024];
    char  path[1024];
    struct stat stfile;

    /*Need to be able to store the pointer*/
    if (!Table) return(-1);
    
    //if (offset && *offset) snprintf(name, 1024, "%s@%li", File, *offset);
    //else                   
    strncpy(name, File, 1024);
    if(offset && *offset){
        begin=*offset;
    }
    /* Check if the table has already been read from file.
     * If so just reuse the table, if not (this is flagged by returning NULL
     * set up a new table and read the data into it */
    t_Table *tab_p= Table_File_List_find(name,block_number,begin);
    if ( tab_p!=NULL ){
        /*table was found in the Table_File_List*/
        *Table=*tab_p;
        MPI_MASTER(
            if(Table->quiet<1)
              printf("Reusing input file '%s' (Table_Read_Offset)\n", name);
            );
        return Table->rows*Table->columns;
    }

    /* open the file */
    hfile = Open_File(File, "r", path);
    if (!hfile) return(-1);
    else {
      MPI_MASTER(
          if(Table->quiet<1)
            printf("Opening input file '%s' (Table_Read_Offset)\n", path);
          );
    }
    
    /* read file state */
    stat(path,&stfile); filesize = stfile.st_size;
    if (offset && *offset) fseek(hfile, *offset, SEEK_SET);
    begin     = ftell(hfile);
    
    Table_Init(Table, 0, 0);

    /* read file content and set the Table */
    nelements = Table_Read_Handle(Table, hfile, block_number, max_rows, name);
    Table->begin = begin;
    Table->end   = ftell(hfile);
    Table->filesize = (filesize>0 ? filesize : 0);
    Table_Stat(Table);
    
    Table_File_List_store(Table);

    if (offset) *offset=Table->end;
    fclose(hfile);
    return(nelements);

  } /* end Table_Read_Offset */

/*******************************************************************************
* long Table_Read_Offset_Binary(t_Table *Table, char *File, char *type,
*                               long *offset, long rows, long columns)
*   ACTION: read a single Table from a binary file, starting at offset
*     Same as Table_Read_Offset(..) except that it handles binary files.
*   input   type: may be "float"/NULL or "double"
*           offset: pointer to an offset (*offset should be 0 at start)
*           rows   : number of rows (0 means read all)
*           columns: number of columns
*   return  initialized single Table t_Table structure containing data, header, ...
*           number of read elements (-1: error, 0:header only)
*           updated *offset position (where end of reading occured)
*******************************************************************************/
  long Table_Read_Offset_Binary(t_Table *Table, char *File, char *type,
                                long *offset, long rows, long columns)
  { /* reads all/a data block in binary 'file' and returns a Table structure  */
    long    nelements, sizeofelement;
    long    filesize;
    FILE   *hfile;
    char    path[1024];
    struct stat stfile;
    double *data;
    long    i;
    long    begin;

    if (!Table) return(-1);

    Table_Init(Table, 0, 0);
    
    /* open the file */
    hfile = Open_File(File, "r", path);
    if (!hfile) return(-1);
    else {
      MPI_MASTER(
          if(Table->quiet<1)
            printf("Opening input file '%s' (Table_Read, Binary)\n", path);
      );
    }
    
    /* read file state */
    stat(File,&stfile);
    filesize = stfile.st_size;
    Table->filesize=filesize;
    
    /* read file content */
    if (type && !strcmp(type,"double")) sizeofelement = sizeof(double);
    else  sizeofelement = sizeof(float);
    if (offset && *offset) fseek(hfile, *offset, SEEK_SET);
    begin     = ftell(hfile);
    if (rows && filesize > sizeofelement*columns*rows)
      nelements = columns*rows;
    else nelements = (long)(filesize/sizeofelement);
    if (!nelements || filesize <= *offset) return(0);
    data    = (double*)malloc(nelements*sizeofelement);
    if (!data) {
      if(!(Table->quiet>1))
        fprintf(stderr,"Error: allocating %ld elements for %s file '%s'. Too big (Table_Read_Offset_Binary).\n", nelements, type, File);
      exit(-1);
    }
    nelements = fread(data, sizeofelement, nelements, hfile);

    if (!data || !nelements)
    {
      if(!(Table->quiet>1))
        fprintf(stderr,"Error: reading %ld elements from %s file '%s' (Table_Read_Offset_Binary)\n", nelements, type, File);
      exit(-1);
    }
    Table->begin   = begin;
    Table->end     = ftell(hfile);
    if (offset) *offset=Table->end;
    fclose(hfile);
    data = (double*)realloc(data, (double)nelements*sizeofelement);
    /* copy file data into Table */
    if (type && !strcmp(type,"double")) Table->data = data;
    else {
      float  *s;
      double *dataf;
      s     = (float*)data;
      dataf = (double*)malloc(sizeof(double)*nelements);
      for (i=0; i<nelements; i++)
        dataf[i]=s[i];
      free(data);
      Table->data = dataf;
    }
    strncpy(Table->filename, File, 1024);
    Table->rows    = nelements/columns;
    Table->columns = columns;
    Table->array_length = 1;
    Table->block_number = 1;

    Table_Stat(Table);

    return(nelements);
  } /* end Table_Read_Offset_Binary */

/*******************************************************************************
* long Table_Read_Handle(t_Table *Table, FILE *fid, int block_number, long max_rows, char *name)
*   ACTION: read a single Table from a text file handle (private)
*   input   Table:pointer to a t_Table structure
*           fid:  pointer to FILE handle
*           block_number: if the file does contain more than one
*                 data block, then indicates which one to get (from index 1)
*                 a 0 value means append/catenate all
*           max_rows: if non 0, only reads that number of lines
*   return  initialized single Table t_Table structure containing data, header, ...
*           modified Table t_Table structure containing data, header, ...
*           number of read elements (-1: error, 0:header only)
* The routine stores any line starting with '#', '%' and ';' into the header
* Other lines are interpreted as numerical data, and stored.
* Data block should be a rectangular matrix or vector.
* Data block may be rebined with Table_Rebin (also sort in ascending order)
*******************************************************************************/
  long Table_Read_Handle(t_Table *Table, FILE *hfile,
                         long block_number, long max_rows, char *name)
  { /* reads all/a data block from 'file' handle and returns a Table structure  */
    double *Data;
    char *Header              = NULL;
    long  malloc_size         = CHAR_BUF_LENGTH;
    long  malloc_size_h       = 4096;
    long  Rows = 0,   Columns = 0;
    long  count_in_array      = 0;
    long  count_in_header     = 0;
    long  block_Current_index = 0;
    char  flag_End_row_loop   = 0;

    if (!Table) return(-1);
    Table_Init(Table, 0, 0);
    if (name && name[0]!='\0') strncpy(Table->filename, name, 1024);

    if(!hfile) {
       fprintf(stderr, "Error: File handle is NULL (Table_Read_Handle).\n");
       return (-1);
    }
    Header = (char*)  calloc(malloc_size_h, sizeof(char));
    Data   = (double*)calloc(malloc_size,   sizeof(double));
    if ((Header == NULL) || (Data == NULL)) {
       fprintf(stderr, "Error: Could not allocate Table and Header (Table_Read_Handle).\n");
       return (-1);
    }

    int flag_In_array = 0;
    do { /* while (!flag_End_row_loop) */
      char  line[1024*CHAR_BUF_LENGTH];
      long  back_pos=0;   /* ftell start of line */

      back_pos = ftell(hfile);
      if (fgets(line, 1024*CHAR_BUF_LENGTH, hfile) != NULL) { /* analyse line */
        /* first skip blank and tabulation characters */
        int i = strspn(line, " \t");

        /* handle comments: stored in header */
        if (NULL != strchr("#%;/", line[i]))
        { /* line is a comment */
          count_in_header += strlen(line);
          if (count_in_header >= malloc_size_h) {
            /* if succeed and in array : add (and realloc if necessary) */
            malloc_size_h = count_in_header+4096;
            Header        = (char*)realloc(Header, malloc_size_h*sizeof(char));
          }
          strncat(Header, line, 4096);
          flag_In_array=0;
          /* exit line and file if passed desired block */
          if (block_number > 0 && block_number == block_Current_index) {
            flag_End_row_loop = 1;
          }

          /* Continue with next line */
          continue;
        }

        /* get the number of columns splitting line with strtok */
        char  *lexeme;
        char  flag_End_Line = 0;
        long  block_Num_Columns = 0;
        const char seps[] = " ,;\t\n\r";

        lexeme = strtok(line, seps);
        while (!flag_End_Line) {
          if ((lexeme != NULL) && (lexeme[0] != '\0')) {
            /* reading line: the token is not empty */
            double X;
            int    count=1;
            /* test if we have 'NaN','Inf' */
            if (!strncasecmp(lexeme,"NaN",3))
              X = 0;
            else if (!strncasecmp(lexeme,"Inf",3) || !strncasecmp(lexeme,"+Inf",4))
              X = FLT_MAX;
            else if (!strncasecmp(lexeme,"-Inf",4))
              X = -FLT_MAX;
            else
              count = sscanf(lexeme,"%lg",&X);
            if (count == 1) {
              /* reading line: the token is a number in the line */
              if (!flag_In_array) {
                /* reading num: not already in a block: starts a new data block */
                block_Current_index++;
                flag_In_array    = 1;
                block_Num_Columns= 0;
                if (block_number > 0) {
                  /* initialise a new data block */
                  Rows = 0;
                  count_in_array = 0;
                } /* else append */
              }
              /* reading num: all blocks or selected block */
              if (flag_In_array && (block_number == 0 ||
                  block_number == block_Current_index)) {
                /* starting block: already the desired number of rows ? */
                if (block_Num_Columns == 0 &&
                    max_rows > 0 && Rows >= max_rows) {
                  flag_End_Line      = 1;
                  flag_End_row_loop  = 1;
                  flag_In_array      = 0;
                  /* reposition to begining of line (ignore line) */
                  fseek(hfile, back_pos, SEEK_SET);
                } else { /* store into data array */
                  if (count_in_array >= malloc_size) {
                    /* realloc data buffer if necessary */
                    malloc_size = count_in_array*1.5;
                    Data = (double*) realloc(Data, malloc_size*sizeof(double));
                    if (Data == NULL) {
                      fprintf(stderr, "Error: Can not re-allocate memory %li (Table_Read_Handle).\n",
                              malloc_size*sizeof(double));
                      return (-1);
                    }
                  }
                  if (0 == block_Num_Columns) Rows++;
                  Data[count_in_array] = X;
                  count_in_array++;
                  block_Num_Columns++;
                }
              } /* reading num: end if flag_In_array */
            } /* end reading num: end if sscanf lexeme -> numerical */
            else {
              /* reading line: the token is not numerical in that line. end block */
              if (block_Current_index == block_number) {
                flag_End_Line = 1;
                flag_End_row_loop = 1;
              } else {
                flag_In_array = 0;
                flag_End_Line = 1;
              }
            }
          }
          else {
            /* no more tokens in line */
            flag_End_Line = 1;
            if (block_Num_Columns > 0) Columns = block_Num_Columns;
          }

          // parse next token
          lexeme = strtok(NULL, seps);

        } /* while (!flag_End_Line) */
      } /* end: if fgets */
      else flag_End_row_loop = 1; /* else fgets : end of file */

    } while (!flag_End_row_loop); /* end while flag_End_row_loop */

    Table->block_number = block_number;
    Table->array_length = 1;

    // shrink header to actual size (plus terminating 0-byte)
    if (count_in_header) {
      Header = (char*)realloc(Header, count_in_header*sizeof(char) + 1);
    }
    Table->header = Header;

    if (count_in_array*Rows*Columns == 0)
    {
      Table->rows         = 0;
      Table->columns      = 0;
      free(Data);
      return (0);
    }
    if (Rows * Columns != count_in_array)
    {
      fprintf(stderr, "Warning: Read_Table :%s %s Data has %li values that should be %li x %li\n",
        (Table->filename[0] != '\0' ? Table->filename : ""),
        (!block_number ? " catenated" : ""),
        count_in_array, Rows, Columns);
      Columns = count_in_array; Rows = 1;
    }
    Data     = (double*)realloc(Data, count_in_array*sizeof(double));
    Table->data         = Data;
    Table->rows         = Rows;
    Table->columns      = Columns;

    return (count_in_array);

  } /* end Table_Read_Handle */

/*******************************************************************************
* long Table_Rebin(t_Table *Table)
*   ACTION: rebin a single Table, sorting 1st column in ascending order
*   input   Table: single table containing data.
*                  The data block is reallocated in this process
*   return  updated Table with increasing, evenly spaced first column (index 0)
*           number of data elements (-1: error, 0:empty data)
*******************************************************************************/
  long Table_Rebin(t_Table *Table)
  {
    double new_step=0;
    long   i;
    /* performs linear interpolation on X axis (0-th column) */

    if (!Table) return(-1);
    if (!Table->data 
    || Table->rows*Table->columns == 0 || !Table->step_x)
      return(0);
    Table_Stat(Table); /* recompute statitstics and minimal step */
    new_step = Table->step_x; /* minimal step in 1st column */

    if (!(Table->constantstep)) /* not already evenly spaced */
    {
      long Length_Table;
      double *New_Table;

      Length_Table = ceil(fabs(Table->max_x - Table->min_x)/new_step)+1;
      /*return early if the rebinned table will become too large*/
      if (Length_Table > mcread_table_rebin_maxsize){
        fprintf(stderr,"WARNING: (Table_Rebin): Rebinning table from %s would exceed 1M rows. Skipping.\n", Table->filename); 
        return(Table->rows*Table->columns);
      }
      New_Table    = (double*)malloc(Length_Table*Table->columns*sizeof(double));

      for (i=0; i < Length_Table; i++)
      {
        long   j;
        double X;
        X = Table->min_x + i*new_step;
        New_Table[i*Table->columns] = X;
        for (j=1; j < Table->columns; j++)
          New_Table[i*Table->columns+j]
                = Table_Value(*Table, X, j);
      } /* end for i */

      Table->rows = Length_Table;
      Table->step_x = new_step;
      Table->max_x = Table->min_x + (Length_Table-1)*new_step; 
      /*max might not be the same anymore
       * Use Length_Table -1 since the first and laset rows are the limits of the defined interval.*/
      free(Table->data);
      Table->data = New_Table;
      Table->constantstep=1;
    } /* end else (!constantstep) */
    return (Table->rows*Table->columns);
  } /* end Table_Rebin */

/*******************************************************************************
* double Table_Index(t_Table Table, long i, long j)
*   ACTION: read an element [i,j] of a single Table
*   input   Table: table containing data
*           i : index of row      (0:Rows-1)
*           j : index of column   (0:Columns-1)
*   return  Value = data[i][j]
* Returns Value from the i-th row, j-th column of Table
* Tests are performed on indexes i,j to avoid errors
*******************************************************************************/

#ifndef MIN
#define MIN(a, b)  (((a) < (b)) ? (a) : (b))
#endif
#ifndef MAX
#define MAX(a, b)  (((a) > (b)) ? (a) : (b))
#endif

double Table_Index(t_Table Table, long i, long j)
{
  long AbsIndex;

  if (Table.rows == 1 || Table.columns == 1) {
    /* vector */
    j = MIN(MAX(0, i+j), Table.columns*Table.rows - 1);
    i = 0;
  } else {
    /* matrix */
    i = MIN(MAX(0, i), Table.rows - 1);
    j = MIN(MAX(0, j), Table.columns - 1);
  }

  /* handle vectors specifically */
  AbsIndex = i*(Table.columns)+j;

  if (Table.data != NULL)
    return (Table.data[AbsIndex]);
  else
    return 0;
} /* end Table_Index */

/*******************************************************************************
* void Table_SetElement(t_Table *Table, long i, long j, double value)
*   ACTION: set an element [i,j] of a single Table
*   input   Table: table containing data
*           i : index of row      (0:Rows-1)
*           j : index of column   (0:Columns-1)
*           value = data[i][j]
* Returns 0 in case of error
* Tests are performed on indexes i,j to avoid errors
*******************************************************************************/
int Table_SetElement(t_Table *Table, long i, long j,
                     double value)
{
  long AbsIndex;

  if (Table->rows == 1 || Table->columns == 1) {
    /* vector */
    j = MIN(MAX(0, i+j), Table->columns*Table->rows - 1); i=0;
  } else {
    /* matrix */
    i = MIN(MAX(0, i), Table->rows - 1);
    j = MIN(MAX(0, j), Table->columns - 1);
  }

  AbsIndex = i*(Table->columns)+j;
  if (Table->data != NULL) {
    Table->data[AbsIndex] = value;
    return 1;
  }

  return 0;
} /* end Table_SetElement */

/*******************************************************************************
* double Table_Value(t_Table Table, double X, long j)
*   ACTION: read column [j] of a single Table at row which 1st column is X
*   input   Table: table containing data.
*           X : data value in the first column (index 0)
*           j : index of column from which is extracted the Value (0:Columns-1)
*   return  Value = data[index for X][j] with linear interpolation
* Returns Value from the j-th column of Table corresponding to the
* X value for the 1st column (index 0)
* Tests are performed (within Table_Index) on indexes i,j to avoid errors
* NOTE: data should rather be monotonic, and evenly sampled.
*******************************************************************************/
double Table_Value(t_Table Table, double X, long j)
{
  long   Index = -1;
  double X1=0, Y1=0, X2=0, Y2=0;
  double ret=0;

  if (X > Table.max_x) return Table_Index(Table,Table.rows-1  ,j);
  if (X < Table.min_x) return Table_Index(Table,0  ,j);

  // Use constant-time lookup when possible
  if(Table.constantstep) {
    Index = (long)floor(
              (X - Table.min_x) / (Table.max_x - Table.min_x) * (Table.rows-1));
    X1 = Table_Index(Table,Index-1,0);
    X2 = Table_Index(Table,Index  ,0);
  }
  // Use binary search on large, monotonic tables
  else if(Table.monotonic && Table.rows > 100) {
    long left = Table.min_x;
    long right = Table.max_x;

    while (!((X1 <= X) && (X < X2)) && (right - left > 1)) {
      Index = (left + right) / 2;

      X1 = Table_Index(Table, Index-1, 0);
      X2 = Table_Index(Table, Index,   0);

      if (X < X1) {
        right = Index;
      } else {
        left  = Index;
      }
    }
  }

  // Fall back to linear search, if no-one else has set X1, X2 correctly
  if (!((X1 <= X) && (X < X2))) {
    /* look for index surrounding X in the table -> Index */
    for (Index=1; Index <= Table.rows-1; Index++) {
        X1 = Table_Index(Table, Index-1,0);
        X2 = Table_Index(Table, Index  ,0);
        if ((X1 <= X) && (X < X2)) break;
      } /* end for Index */
  }

  Y1 = Table_Index(Table,Index-1, j);
  Y2 = Table_Index(Table,Index  , j);

#ifdef OPENACC
#define strcmp(a,b) str_comp(a,b)
#endif

  if (!strcmp(Table.method,"linear")) {
    ret = Table_Interp1d(X, X1,Y1, X2,Y2);
  }
  else if (!strcmp(Table.method,"nearest")) {
    ret = Table_Interp1d_nearest(X, X1,Y1, X2,Y2);
  }

#ifdef OPENACC
#ifdef strcmp
#undef strcmp
#endif
#endif

  return ret;
} /* end Table_Value */

/*******************************************************************************
* double Table_Value2d(t_Table Table, double X, double Y)
*   ACTION: read element [X,Y] of a matrix Table
*   input   Table: table containing data.
*           X : row index, may be non integer
*           Y : column index, may be non integer
*   return  Value = data[index X][index Y] with bi-linear interpolation
* Returns Value for the indices [X,Y]
* Tests are performed (within Table_Index) on indexes i,j to avoid errors
* NOTE: data should rather be monotonic, and evenly sampled.
*******************************************************************************/
double Table_Value2d(t_Table Table, double X, double Y)
  {
    long   x1,x2,y1,y2;
    double z11,z12,z21,z22;
    double ret=0;

    x1 = (long)floor(X);
    y1 = (long)floor(Y);

    if (x1 > Table.rows-1 || x1 < 0) {
      x2 = x1;
    } else {
      x2 = x1 + 1;
    }

    if (y1 > Table.columns-1 || y1 < 0) {
      y2 = y1;
    } else {
      y2 = y1 + 1;
    }

    z11 = Table_Index(Table, x1, y1);

    if (y2 != y1) z12=Table_Index(Table, x1, y2); else z12 = z11;
    if (x2 != x1) z21=Table_Index(Table, x2, y1); else z21 = z11;
    if (y2 != y1) z22=Table_Index(Table, x2, y2); else z22 = z21;

#ifdef OPENACC
#define strcmp(a,b) str_comp(a,b)
#endif

    if (!strcmp(Table.method,"linear"))
      ret = Table_Interp2d(X,Y, x1,y1,x2,y2, z11,z12,z21,z22);
#ifdef OPENACC
#ifdef strcmp
#undef strcmp
#endif
#endif
    else {
      if (fabs(X-x1) < fabs(X-x2)) {
        if (fabs(Y-y1) < fabs(Y-y2)) ret = z11; else ret = z12;
      } else {
        if (fabs(Y-y1) < fabs(Y-y2)) ret = z21; else ret = z22;
      }
    }
    return ret;
  } /* end Table_Value2d */


/*******************************************************************************
* void Table_Free(t_Table *Table)
*   ACTION: free a single Table. First Call Table_File_list_gc. If this returns
*   non-zero it means there are more refernces to the table, and so the table
*   should not bee freed.
*   return: empty Table
*******************************************************************************/
  void Table_Free(t_Table *Table)
  {
    if( !Table_File_List_gc(Table) ){
       return;
    } 
    if (!Table) return;
    if (Table->data   != NULL) free(Table->data);
    if (Table->header != NULL) free(Table->header);
    Table->data   = NULL;
    Table->header = NULL;
  } /* end Table_Free */

/******************************************************************************
* void Table_Info(t_Table Table)
*    ACTION: print informations about a single Table
*******************************************************************************/
  long Table_Info(t_Table Table)
  {
    char buffer[256];
    long ret=0;

    if (!Table.block_number) strcpy(buffer, "catenated");
    else sprintf(buffer, "block %li", Table.block_number);
    printf("Table from file '%s' (%s)",
        Table.filename[0] != '\0' ? Table.filename : "", buffer);
    if ((Table.data != NULL) && (Table.rows*Table.columns))
    {
      printf(" is %li x %li ", Table.rows, Table.columns);
      if (Table.rows*Table.columns > 1)
        printf("(x=%g:%g)", Table.min_x, Table.max_x);
      else printf("(x=%g) ", Table.min_x);
      ret = Table.rows*Table.columns;
      if (Table.monotonic)    printf(", monotonic");
      if (Table.constantstep) printf(", constant step");
      printf(". interpolation: %s\n", Table.method);
    }
    else printf(" is empty.\n");

    if (Table.header && strlen(Table.header)) {
      char *header;
      int  i;
      header = malloc(80);
      if (!header) return(ret);
      for (i=0; i<80; header[i++]=0);
      strncpy(header, Table.header, 75);
      if (strlen(Table.header) > 75) {
        strcat( header, " ...");
      }
      for (i=0; i<strlen(header); i++)
        if (header[i] == '\n' || header[i] == '\r') header[i] = ';';
      printf("  '%s'\n", header);
      free(header);
    }

    return(ret);
  } /* end Table_Info */

/******************************************************************************
* long Table_Init(t_Table *Table, m, n)
*   ACTION: initialise a Table to empty m by n table
*   return: empty Table
******************************************************************************/
long Table_Init(t_Table *Table, long rows, long columns)
{
  double *data=NULL;
  long   i;

  if (!Table) return(0);

  Table->header  = NULL;
  Table->filename[0]= '\0';
  Table->filesize= 0;
  Table->min_x   = 0;
  Table->max_x   = 0;
  Table->step_x  = 0;
  Table->block_number = 0;
  Table->array_length = 0;
  Table->monotonic    = 0;
  Table->constantstep = 0;
  Table->begin   = 0;
  Table->end     = 0;
  strcpy(Table->method,"linear");

  if (rows*columns >= 1) {
    data    = (double*)malloc(rows*columns*sizeof(double));
    if (data) for (i=0; i < rows*columns; data[i++]=0);
    else {
      if(Table->quiet<2)
        fprintf(stderr,"Error: allocating %ld double elements."
            "Too big (Table_Init).\n", rows*columns);
      rows = columns = 0;
    }
  }
  Table->rows    = (rows >= 1 ? rows : 0);
  Table->columns = (columns >= 1 ? columns : 0);
  Table->data    = data;
  return(Table->rows*Table->columns);
} /* end Table_Init */

/******************************************************************************
* long Table_Write(t_Table Table, char *file, x1,x2, y1,y2)
*   ACTION: write a Table to disk (ascii).
*     when x1=x2=0 or y1=y2=0, the table default limits are used.
*   return: 0=all is fine, non-0: error
*******************************************************************************/
MCDETECTOR Table_Write(t_Table Table, char *file, char *xl, char *yl, 
  double x1, double x2, double y1, double y2)
{
  MCDETECTOR detector;

  if ((Table.data == NULL) && (Table.rows*Table.columns)) {
    detector.m = 0;
    return(detector); /* Table is empty - nothing to do */
  }
  if (!x1 && !x2) {
    x1 = Table.min_x;
    x2 = Table.max_x;
  }
  if (!y1 && !y2) {
    y1 = 1;
    y2 = Table.columns;
  }

  /* transfer content of the Table into a 2D detector */
  Coords coords = { 0, 0, 0};

  if (Table.rows == 1 || Table.columns == 1) {
    detector = mcdetector_out_1D(Table.filename,
                      xl ? xl : "", yl ? yl : "",
                      "x", x1, x2,
                      Table.rows * Table.columns,
                      NULL, Table.data, NULL,
                      file, file, coords);
  } else {
    detector = mcdetector_out_2D(Table.filename,
                      xl ? xl : "", yl ? yl : "",
                      x1, x2, y1, y2,
                      Table.rows, Table.columns,
                      NULL, Table.data, NULL,
                      file, file, coords);
  }
  return(detector);
}

/******************************************************************************
* void Table_Stat(t_Table *Table)
*   ACTION: computes min/max/mean step of 1st column for a single table (private)
*   return: updated Table
*******************************************************************************/
  static void Table_Stat(t_Table *Table)
  {
    long   i;
    double max_x, min_x;
    double row=1;
    char   monotonic=1;
    char   constantstep=1;
    double step=0;
    long n;

    if (!Table) return;
    if (!Table->rows || !Table->columns) return;
    if (Table->rows == 1) row=0; // single row
    max_x = -FLT_MAX;
    min_x =  FLT_MAX;
    n     = (row ? Table->rows : Table->columns);
    /* get min and max of first column/vector */
    for (i=0; i < n; i++)
    {
      double X;
      X = (row ? Table_Index(*Table,i  ,0)
                               : Table_Index(*Table,0, i));
      if (X < min_x) min_x = X;
      if (X > max_x) max_x = X;
    } /* for */
    
    /* test for monotonicity and constant step if the table is an XY or single vector */
    if (n > 1) {
      /* mean step */
      step = (max_x - min_x)/(n-1);
      /* now test if table is monotonic on first column, and get minimal step size */
      for (i=0; i < n-1; i++) {
        double X, diff;;
        X    = (row ? Table_Index(*Table,i  ,0)
                    : Table_Index(*Table,0,  i));
        diff = (row ? Table_Index(*Table,i+1,0)
                    : Table_Index(*Table,0,  i+1)) - X;
        if (diff && fabs(diff) < fabs(step)) step = diff;
        /* change sign ? */
        if ((max_x - min_x)*diff < 0 && monotonic)
          monotonic = 0;
      } /* end for */
      
      /* now test if steps are constant within READ_TABLE_STEPTOL */
      if(!step){
        /*means there's a disconitnuity -> not constantstep*/
        constantstep=0;
      }else if (monotonic) {
        for (i=0; i < n-1; i++) {
          double X, diff;
          X    = (row ? Table_Index(*Table,i  ,0)
              : Table_Index(*Table,0,  i));
          diff = (row ? Table_Index(*Table,i+1,0)
              : Table_Index(*Table,0,  i+1)) - X;
          if ( fabs(step)*(1+READ_TABLE_STEPTOL) < fabs(diff) ||
                fabs(diff) < fabs(step)*(1-READ_TABLE_STEPTOL) )
          { constantstep = 0; break; }
        }
      }

    }
    Table->step_x= step;
    Table->max_x = max_x;
    Table->min_x = min_x;
    Table->monotonic = monotonic;
    Table->constantstep = constantstep;
  } /* end Table_Stat */

/******************************************************************************
* t_Table *Table_Read_Array(char *File, long *blocks)
*   ACTION: read as many data blocks as available, iteratively from file
*   return: initialized t_Table array, last element is an empty Table.
*           the number of extracted blocks in non NULL pointer *blocks
*******************************************************************************/
  t_Table *Table_Read_Array(char *File, long *blocks)
  {
    t_Table *Table_Array=NULL;
    long offset=0;
    long block_number=0;
    long allocated=256;
    long nelements=1;

    /* first allocate an initial empty t_Table array */
    Table_Array = (t_Table *)malloc(allocated*sizeof(t_Table));
    if (!Table_Array) {
      fprintf(stderr, "Error: Can not allocate memory %li (Table_Read_Array).\n",
         allocated*sizeof(t_Table));
      *blocks = 0;
      return (NULL);
    }

    while (nelements > 0)
    {
      t_Table Table;

      /* if ok, set t_Table block number else exit loop */
      block_number++;
      Table.block_number = block_number;
      
      /* access file at offset and get following block. Block number is from the set offset
       * hence the hardcoded 1 - i.e. the next block counted from offset.*/
      nelements = Table_Read_Offset(&Table, File, 1, &offset,0);
      /*if the block is empty - don't store it*/
      if (nelements>0){
          /* if t_Table array is not long enough, expand and realocate */
          if (block_number >= allocated-1) {
              allocated += 256;
              Table_Array = (t_Table *)realloc(Table_Array,
                      allocated*sizeof(t_Table));
              if (!Table_Array) {
                  fprintf(stderr, "Error: Can not re-allocate memory %li (Table_Read_Array).\n",
                          allocated*sizeof(t_Table));
                  *blocks = 0;
                  return (NULL);
              }
          }
          /* store it into t_Table array */
          //snprintf(Table.filename, 1024, "%s#%li", File, block_number-1);
          Table_Array[block_number-1] = Table;
      }
      /* continues until we find an empty block */
    }
    /* send back number of extracted blocks */
    if (blocks) *blocks = block_number-1;

    /* now store total number of elements in Table array */
    for (offset=0; offset < block_number;
      Table_Array[offset++].array_length = block_number-1);

    return(Table_Array);
  } /* end Table_Read_Array */
/*******************************************************************************
* void Table_Free_Array(t_Table *Table)
*   ACTION: free a Table array
*******************************************************************************/
  void Table_Free_Array(t_Table *Table)
  {
    long index;
    if (!Table) return;
    for (index=0;index < Table[0].array_length; index++){
            Table_Free(&Table[index]);
    }
    free(Table);
  } /* end Table_Free_Array */

/******************************************************************************
* long Table_Info_Array(t_Table *Table)
*    ACTION: print informations about a Table array
*    return: number of elements in the Table array
*******************************************************************************/
  long Table_Info_Array(t_Table *Table)
  {
    long index=0;

    if (!Table) return(-1);
    while (index < Table[index].array_length
       && (Table[index].data || Table[index].header)
       && (Table[index].rows*Table[index].columns) ) {
      Table_Info(Table[index]);
      index++;
    }
    printf("This Table array contains %li elements\n", index);
    return(index);
  } /* end Table_Info_Array */

/******************************************************************************
* char **Table_ParseHeader(char *header, symbol1, symbol2, ..., NULL)
*    ACTION: search for char* symbols in header and return their value or NULL
*            the search is not case sensitive.
*            Last argument MUST be NULL
*    return: array of char* with line following each symbol, or NULL if not found
*******************************************************************************/
#ifndef MyNL_ARGMAX
#define MyNL_ARGMAX 50
#endif

char **Table_ParseHeader_backend(char *header, ...){
  va_list ap;
  char exit_flag=0;
  int counter   =0;
  char **ret    =NULL;
  if (!header || header[0]=='\0') return(NULL);

  ret = (char**)calloc(MyNL_ARGMAX, sizeof(char*));
  if (!ret) {
    printf("Table_ParseHeader: Cannot allocate %i values array for Parser (Table_ParseHeader).\n",
      MyNL_ARGMAX);
    return(NULL);
  }
  for (counter=0; counter < MyNL_ARGMAX; ret[counter++] = NULL);
  counter=0;

  va_start(ap, header);
  while(!exit_flag && counter < MyNL_ARGMAX-1)
  {
    char *arg_char=NULL;
    char *pos     =NULL;
    /* get variable argument value as a char */
    arg_char = va_arg(ap, char *);
    if (!arg_char || arg_char[0]=='\0'){
      exit_flag = 1; break;
    }
    /* search for the symbol in the header */
    pos = (char*)strcasestr(header, arg_char);
    if (pos) {
      char *eol_pos;
      eol_pos = strchr(pos+strlen(arg_char), '\n');
      if (!eol_pos)
        eol_pos = strchr(pos+strlen(arg_char), '\r');
      if (!eol_pos)
        eol_pos = pos+strlen(pos)-1;
      ret[counter] = (char*)malloc(eol_pos - pos);
      if (!ret[counter]) {
        printf("Table_ParseHeader: Cannot allocate value[%i] array for Parser searching for %s (Table_ParseHeader).\n",
          counter, arg_char);
        exit_flag = 1; break;
      }
      strncpy(ret[counter], pos+strlen(arg_char), eol_pos - pos - strlen(arg_char));
      ret[counter][eol_pos - pos - strlen(arg_char)]='\0';
    }
    counter++;
  }
  va_end(ap);
  return(ret);
} /* Table_ParseHeader */

/******************************************************************************
* double Table_Interp1d(x, x1, y1, x2, y2)
*    ACTION: interpolates linearly at x between y1=f(x1) and y2=f(x2)
*    return: y=f(x) value
*******************************************************************************/
double Table_Interp1d(double x,
  double x1, double y1,
  double x2, double y2)
{
  double slope;
  if (x2 == x1) return (y1+y2)/2;
  if (y1 == y2) return  y1;
  slope = (y2 - y1)/(x2 - x1);
  return y1+slope*(x - x1);
} /* Table_Interp1d */

/******************************************************************************
* double Table_Interp1d_nearest(x, x1, y1, x2, y2)
*    ACTION: table lookup with nearest method at x between y1=f(x1) and y2=f(x2)
*    return: y=f(x) value
*******************************************************************************/
double Table_Interp1d_nearest(double x,
  double x1, double y1,
  double x2, double y2)
{
  if (fabs(x-x1) < fabs(x-x2)) return (y1);
  else return(y2);
} /* Table_Interp1d_nearest */

/******************************************************************************
* double Table_Interp2d(x,y, x1,y1, x2,y2, z11,z12,z21,z22)
*    ACTION: interpolates bi-linearly at (x,y) between z1=f(x1,y1) and z2=f(x2,y2)
*    return: z=f(x,y) value
*    x,y |   x1   x2
*    ----------------
*     y1 |   z11  z21
*     y2 |   z12  z22
*******************************************************************************/
double Table_Interp2d(double x, double y,
  double x1, double y1,
  double x2, double y2,
  double z11, double z12, double z21, double z22)
{
  double ratio_x, ratio_y;
  if (x2 == x1) return Table_Interp1d(y, y1,z11, y2,z12);
  if (y1 == y2) return Table_Interp1d(x, x1,z11, x2,z21);

  ratio_y = (y - y1)/(y2 - y1);
  ratio_x = (x - x1)/(x2 - x1);
  return (1-ratio_x)*(1-ratio_y)*z11 + ratio_x*(1-ratio_y)*z21
    + ratio_x*ratio_y*z22         + (1-ratio_x)*ratio_y*z12;
} /* Table_Interp2d */

/* end of read_table-lib.c */

/*****************************************************************************
*
* McStas, neutron ray-tracing package
*         Copyright 1997-2006, All rights reserved
*         Risoe National Laboratory, Roskilde, Denmark
*         Institut Laue Langevin, Grenoble, France
*
* Library: share/ref-lib.h
*
* %Identification
* Written by: Peter Christiansen
* Date: August, 2006
* Origin: RISOE
* Release: McStas 1.10
* Version: $Revision$
*
* Add StdDoubleReflecFunc, ExtendedReflecFunc
* Date: October, 2022
* Locale: ESS
* Release: McStas 2.7x, 3.1x
*
* Commonly used reflection functions are declared in this file which
* are used by some guide and mirror components.
*
* Depends on read_table-lib
*
* Usage: within SHARE
* %include "ref-lib"
*
****************************************************************************/


#ifndef REF_LIB_H
#define REF_LIB_H "$Revision$"

void StdReflecFunc(double, double*, double*);
void TableReflecFunc(double, t_Table*, double*);
void StdDoubleReflecFunc(double, double*, double*);
void ExtendedReflecFunc(double, double*, double*);

#endif

/* end of ref-lib.h */
/****************************************************************************
*
* McStas, neutron ray-tracing package
*         Copyright 1997-2006, All rights reserved
*         Risoe National Laboratory, Roskilde, Denmark
*         Institut Laue Langevin, Grenoble, France
*
* Library: share/ref-lib.c
*
* %Identification
* Written by: Peter Christiansen
* Date: August, 2006
* Origin: RISOE
* Release: McStas 1.10
* Version: $Revision$
*
* Add StdDoubleReflecFunc, ExtendedReflecFunc
* Date: October, 2022
* Locale: ESS
* Release: McStas 2.7.x, 3.x
*
* Commonly used reflection functions are declared in this file which
* are used by some guide and mirror components.
*
* Variable names have prefix 'mc_ref_' for 'McStas Reflection'
* to avoid conflicts
*
* Usage: within SHARE
* %include "ref-lib"
*
****************************************************************************/

#ifndef REF_LIB_H
#include "ref-lib.h"
#endif

#ifndef READ_TABLE_LIB_H
#include "read_table-lib.h"
#include "read_table-lib.c"
#endif

/****************************************************************************
* void StdReflecFunc(double q, double *par, double *r)
*
* The McStas standard analytic parametrization of the reflectivity.
* The parameters are:
* R0:      [1]    Low-angle reflectivity
* Qc:      [AA-1] Critical scattering vector
* alpha:   [AA]   Slope of reflectivity
* m:       [1]    m-value of material. Zero means completely absorbing.
* W:       [AA-1] Width of supermirror cut-off
*****************************************************************************/
#pragma acc routine seq
void StdReflecFunc(double mc_pol_q, double *mc_pol_par, double *mc_pol_r) {
    double R0    = mc_pol_par[0];
    double Qc    = mc_pol_par[1];
    double alpha = mc_pol_par[2];
    double m     = mc_pol_par[3];
    double W     = mc_pol_par[4];
    double beta  = 0;
    mc_pol_q     = fabs(mc_pol_q);
    double arg;
    double m_corr;

    /* Simpler parametrization from Henrik Jacobsen uses these values that depend on m only.
       double m_value=m*0.9853+0.1978;
       double W=-0.0002*m_value+0.0022;
       double alpha=0.2304*m_value+5.0944;
       double beta=-7.6251*m_value+68.1137;
       If W and alpha are set to 0, use Henrik's approach for estimating these parameters
       and apply the formulation:
       arg = R0*0.5*(1-tanh(arg))*(1-alpha*(q-Qc)+beta*(q-Qc)*(q-Qc));
    */
    if (W==0 && alpha==0) {
      m = m * 0.9853 + 0.1978;
      m_corr = m * 0.9853 - 0.7875;
      W = -0.0002 * m_corr + 0.0022;
      alpha = 0.2304 * m_corr + 5.0944;
      beta = -7.6251 * m_corr + 68.1137;
      if (m==3) {
	alpha = m_corr;
	beta = 0;
      }
      arg = (mc_pol_q - m*Qc)/W; // <--- here m, not m_corr!!
    }

    arg = W > 0 ? (mc_pol_q - m*Qc)/W : 11;

    if (arg > 10 || m <= 0 || Qc <=0 || R0 <= 0) {
      *mc_pol_r = 0;
      return;
    }

    if (m < 1) { Qc *= m; m=1; }

    if(mc_pol_q <= Qc) {
      *mc_pol_r = R0;
      return;
    }


    *mc_pol_r = R0*0.5*(1 - tanh(arg))*(1 - alpha*(mc_pol_q - Qc) + beta*(mc_pol_q - Qc)*(mc_pol_q - Qc));

    return;
  }

/****************************************************************************
* void TableReflecFunc(double q, t_Table *par, double *r) {
*
* Looks up the reflectivity in a table using the routines in read_table-lib.
*****************************************************************************/
#pragma acc routine seq
void TableReflecFunc(double mc_pol_q, t_Table *mc_pol_par, double *mc_pol_r) {

  *mc_pol_r = Table_Value(*mc_pol_par, mc_pol_q, 1);
  if(*mc_pol_r>1)
    *mc_pol_r = 1;
  return;
}


/****************************************************************************
* void StdDoubleReflecFunc(double q, double *par, double *r)
* 
* The McStas standard analytic parametrization of the reflectivity for 
* double-side coated supermirror.
* The parameters are:
* R0:      [1]    Low-angle reflectivity
* Qc:      [AA-1] Critical scattering vector
* alpha:   [AA]   Slope of reflectivity
* m:       [1]    m-value of material. Zero means completely absorbing.
* W:       [AA-1] Width of supermirror cut-off
*****************************************************************************/
void StdDoubleReflecFunc(double mc_pol_q, double *mc_pol_par, double *mc_pol_r) {
    double R0    = mc_pol_par[0];
    double Qc    = mc_pol_par[1];
    double alpha = mc_pol_par[2];
    double m     = mc_pol_par[3];
    double W     = mc_pol_par[4];
    double beta  = 0;
    mc_pol_q     = fabs(mc_pol_q);
    double arg;
        
    /* Simpler parametrization from Henrik Jacobsen uses these values that depend on m only.
       double m_value=m*0.9853+0.1978;
       double W=-0.0002*m_value+0.0022;
       double alpha=0.2304*m_value+5.0944;
       double beta=-7.6251*m_value+68.1137; 
       If W and alpha are set to 0, use Henrik's approach for estimating these parameters
       and apply the formulation:
       arg = R0*0.5*(1-tanh(arg))*(1-alpha*(q-Qc)+beta*(q-Qc)*(q-Qc));
    */  
    if (W==0 && alpha==0) {
      m=m*0.9853+0.1978;
      W=-0.0002*m+0.0022;
      alpha=0.2304*m+5.0944;
      beta=-7.6251*m+68.1137;
      if (m<=3) {
	alpha=m;
	beta=0;
      }
    }
    
    arg = W > 0 ? (mc_pol_q - m*Qc)/W : 11;

    if (arg > 10 || m <= 0 || Qc <=0 || R0 <= 0) {
      *mc_pol_r = 0;
      return;
    }
    
    if (m < 1) { Qc *= m; m=1; }
    
	/*
		Reflectivity R0 = single-side coated supermirror reflectivity
		double-side coated supermirror reflectivity = 1- (1-R0)^2
	*/
	
    if(mc_pol_q <= Qc) {      
      *mc_pol_r = 1- (1-R0)*(1-R0);
      return;
    }
    
    
    R0 = R0*0.5*(1 - tanh(arg))*(1 - alpha*(mc_pol_q - Qc) + beta*(mc_pol_q - Qc)*(mc_pol_q - Qc));
    *mc_pol_r = 1- (1-R0)*(1-R0);
   
    return;
  }

void ExtendedReflecFunc(double mc_pol_q, double *mc_pol_par, double *mc_pol_r) {
    double R0    = mc_pol_par[0];
    double Qc    = mc_pol_par[1];
    double alpha = mc_pol_par[2];
    double m     = mc_pol_par[3];
    double W     = mc_pol_par[4];
    double beta  = mc_pol_par[5];
    mc_pol_q     = fabs(mc_pol_q);
    double arg;

    /* Simpler parametrization from Henrik Jacobsen uses these values that depend on m only.
       double m_value=m*0.9853+0.1978;
       double W=-0.0002*m_value+0.0022;
       double alpha=0.2304*m_value+5.0944;
       double beta=-7.6251*m_value+68.1137;
       If W and alpha are set to 0, use Henrik's approach for estimating these parameters
       and apply the formulation:
       arg = R0*0.5*(1-tanh(arg))*(1-alpha*(q-Qc)+beta*(q-Qc)*(q-Qc));
    */
    if (W==0 && alpha==0) {
      m=m*0.9853+0.1978;
      W=-0.0002*m+0.0022;
      alpha=0.2304*m+5.0944;
      beta=-7.6251*m+68.1137;
      if (m<=3) {
	alpha=m;
	beta=0;
      }
    }

    arg = W > 0 ? (mc_pol_q - m*Qc)/W : 11;

    if (arg > 10 || m <= 0 || Qc <=0 || R0 <= 0) {
      *mc_pol_r = 0;
      return;
    }

    if (m < 1) { Qc *= m; m=1; }

    if(mc_pol_q <= Qc) {
      *mc_pol_r = R0;
      return;
    }


    *mc_pol_r = R0*0.5*(1 - tanh(arg))*(1 - alpha*(mc_pol_q - Qc) + beta*(mc_pol_q - Qc)*(mc_pol_q - Qc));

    return;
  }

/* end of ref-lib.c */




/* ************************************************************************** */
/*             End of SHARE user declarations for all components              */
/* ************************************************************************** */


/* ********************** component definition declarations. **************** */

/* component MCPL_source=MCPL_input() [1] DECLARE */
/* Parameter definition for component type 'MCPL_input' */
struct _struct_MCPL_input_parameters {
  /* Component type 'MCPL_input' setting parameters */
  char filename[16384];
  MCNUM polarisationuse;
  MCNUM verbose;
  MCNUM Emin;
  MCNUM Emax;
  long repeat_count;
  MCNUM E_smear;
  MCNUM pos_smear;
  MCNUM dir_smear;
  long preload;
  /* Component type 'MCPL_input' private parameters */
  mcpl_file_t  inputfile;
  long long  nparticles;
  long long  read_neutrons;
  long long  used_neutrons;
  int  repeat_cnt;
  int  repeat_tot;
  int  repeating;
  int  ismpislave;
  int  mpi_cnt;
  DArray1d  X;
  DArray1d  Y;
  DArray1d  Z;
  DArray1d  VX;
  DArray1d  VY;
  DArray1d  VZ;
  DArray1d  SX;
  DArray1d  SY;
  DArray1d  SZ;
  DArray1d  E;
  DArray1d  T;
  DArray1d  P;
}; /* _struct_MCPL_input_parameters */
typedef struct _struct_MCPL_input_parameters _class_MCPL_input_parameters;

/* Parameters for component type 'MCPL_input' */
struct _struct_MCPL_input {
  char     _name[256]; /* e.g. MCPL_source */
  char     _type[256]; /* MCPL_input */
  long     _index; /* e.g. 2 index in TRACE list */
  Coords   _position_absolute;
  Coords   _position_relative; /* wrt PREVIOUS */
  Rotation _rotation_absolute;
  Rotation _rotation_relative; /* wrt PREVIOUS */
  int      _rotation_is_identity;
  int      _position_relative_is_zero;
  _class_MCPL_input_parameters _parameters;
};
typedef struct _struct_MCPL_input _class_MCPL_input;
_class_MCPL_input _MCPL_source_var;
#pragma acc declare create ( _MCPL_source_var )

/* component collSpec=L_monitor() [2] DECLARE */
/* Parameter definition for component type 'L_monitor' */
struct _struct_L_monitor_parameters {
  /* Component type 'L_monitor' setting parameters */
  MCNUM nL;
  char filename[16384];
  long nowritefile;
  MCNUM xmin;
  MCNUM xmax;
  MCNUM ymin;
  MCNUM ymax;
  MCNUM xwidth;
  MCNUM yheight;
  MCNUM Lmin;
  MCNUM Lmax;
  MCNUM restore_neutron;
  /* Component type 'L_monitor' private parameters */
  DArray1d  L_N;
  DArray1d  L_p;
  DArray1d  L_p2;
}; /* _struct_L_monitor_parameters */
typedef struct _struct_L_monitor_parameters _class_L_monitor_parameters;

/* Parameters for component type 'L_monitor' */
struct _struct_L_monitor {
  char     _name[256]; /* e.g. collSpec */
  char     _type[256]; /* L_monitor */
  long     _index; /* e.g. 2 index in TRACE list */
  Coords   _position_absolute;
  Coords   _position_relative; /* wrt PREVIOUS */
  Rotation _rotation_absolute;
  Rotation _rotation_relative; /* wrt PREVIOUS */
  int      _rotation_is_identity;
  int      _position_relative_is_zero;
  _class_L_monitor_parameters _parameters;
};
typedef struct _struct_L_monitor _class_L_monitor;
_class_L_monitor _collSpec_var;
#pragma acc declare create ( _collSpec_var )

/* component psd_pre_mirror=PSD_monitor() [3] DECLARE */
/* Parameter definition for component type 'PSD_monitor' */
struct _struct_PSD_monitor_parameters {
  /* Component type 'PSD_monitor' setting parameters */
  MCNUM nx;
  MCNUM ny;
  char filename[16384];
  MCNUM xmin;
  MCNUM xmax;
  MCNUM ymin;
  MCNUM ymax;
  MCNUM xwidth;
  MCNUM yheight;
  MCNUM restore_neutron;
  long nowritefile;
  /* Component type 'PSD_monitor' private parameters */
  DArray2d  PSD_N;
  DArray2d  PSD_p;
  DArray2d  PSD_p2;
}; /* _struct_PSD_monitor_parameters */
typedef struct _struct_PSD_monitor_parameters _class_PSD_monitor_parameters;

/* Parameters for component type 'PSD_monitor' */
struct _struct_PSD_monitor {
  char     _name[256]; /* e.g. psd_pre_mirror */
  char     _type[256]; /* PSD_monitor */
  long     _index; /* e.g. 2 index in TRACE list */
  Coords   _position_absolute;
  Coords   _position_relative; /* wrt PREVIOUS */
  Rotation _rotation_absolute;
  Rotation _rotation_relative; /* wrt PREVIOUS */
  int      _rotation_is_identity;
  int      _position_relative_is_zero;
  _class_PSD_monitor_parameters _parameters;
};
typedef struct _struct_PSD_monitor _class_PSD_monitor;
_class_PSD_monitor _psd_pre_mirror_var;
#pragma acc declare create ( _psd_pre_mirror_var )

/* component PortGisans=Arm() [4] DECLARE */
/* Parameter definition for component type 'Arm' */
struct _struct_Arm_parameters {
  char Arm_has_no_parameters;
}; /* _struct_Arm_parameters */
typedef struct _struct_Arm_parameters _class_Arm_parameters;

/* Parameters for component type 'Arm' */
struct _struct_Arm {
  char     _name[256]; /* e.g. PortGisans */
  char     _type[256]; /* Arm */
  long     _index; /* e.g. 2 index in TRACE list */
  Coords   _position_absolute;
  Coords   _position_relative; /* wrt PREVIOUS */
  Rotation _rotation_absolute;
  Rotation _rotation_relative; /* wrt PREVIOUS */
  int      _rotation_is_identity;
  int      _position_relative_is_zero;
  _class_Arm_parameters _parameters;
};
typedef struct _struct_Arm _class_Arm;
_class_Arm _PortGisans_var;
#pragma acc declare create ( _PortGisans_var )

/* component focus_Mirr_5=Mirror_Parabolic() [5] DECLARE */
/* Parameter definition for component type 'Mirror_Parabolic' */
struct _struct_Mirror_Parabolic_parameters {
  /* Component type 'Mirror_Parabolic' setting parameters */
  char reflect[16384];
  MCNUM xwidth;
  MCNUM xshift;
  MCNUM yheight;
  MCNUM focus;
  MCNUM R0;
  MCNUM Qc;
  MCNUM alpha;
  MCNUM m;
  MCNUM W;
  /* Component type 'Mirror_Parabolic' private parameters */
  double   beta1;
  double   gamma1;
  t_Table  pTable;
  int  err;
  int  nom;
  int  vz_neg;
}; /* _struct_Mirror_Parabolic_parameters */
typedef struct _struct_Mirror_Parabolic_parameters _class_Mirror_Parabolic_parameters;

/* Parameters for component type 'Mirror_Parabolic' */
struct _struct_Mirror_Parabolic {
  char     _name[256]; /* e.g. focus_Mirr_5 */
  char     _type[256]; /* Mirror_Parabolic */
  long     _index; /* e.g. 2 index in TRACE list */
  Coords   _position_absolute;
  Coords   _position_relative; /* wrt PREVIOUS */
  Rotation _rotation_absolute;
  Rotation _rotation_relative; /* wrt PREVIOUS */
  int      _rotation_is_identity;
  int      _position_relative_is_zero;
  _class_Mirror_Parabolic_parameters _parameters;
};
typedef struct _struct_Mirror_Parabolic _class_Mirror_Parabolic;
_class_Mirror_Parabolic _focus_Mirr_5_var;
#pragma acc declare create ( _focus_Mirr_5_var )

_class_Mirror_Parabolic _focus_Mirr_4_var;
#pragma acc declare create ( _focus_Mirr_4_var )

_class_Mirror_Parabolic _focus_Mirr_3_var;
#pragma acc declare create ( _focus_Mirr_3_var )

_class_Mirror_Parabolic _focus_Mirr_2_var;
#pragma acc declare create ( _focus_Mirr_2_var )

_class_Mirror_Parabolic _focus_Mirr_var;
#pragma acc declare create ( _focus_Mirr_var )

_class_PSD_monitor _psd_pre_sample_var;
#pragma acc declare create ( _psd_pre_sample_var )

_class_L_monitor _collSpec_pre_sample_var;
#pragma acc declare create ( _collSpec_pre_sample_var )

/* component Div_sample=Divergence_monitor() [12] DECLARE */
/* Parameter definition for component type 'Divergence_monitor' */
struct _struct_Divergence_monitor_parameters {
  /* Component type 'Divergence_monitor' setting parameters */
  MCNUM nh;
  MCNUM nv;
  char filename[16384];
  MCNUM xmin;
  MCNUM xmax;
  MCNUM ymin;
  MCNUM ymax;
  long nowritefile;
  MCNUM xwidth;
  MCNUM yheight;
  MCNUM maxdiv_h;
  MCNUM maxdiv_v;
  MCNUM restore_neutron;
  MCNUM nx;
  MCNUM ny;
  MCNUM nz;
  /* Component type 'Divergence_monitor' private parameters */
  DArray2d  Div_N;
  DArray2d  Div_p;
  DArray2d  Div_p2;
}; /* _struct_Divergence_monitor_parameters */
typedef struct _struct_Divergence_monitor_parameters _class_Divergence_monitor_parameters;

/* Parameters for component type 'Divergence_monitor' */
struct _struct_Divergence_monitor {
  char     _name[256]; /* e.g. Div_sample */
  char     _type[256]; /* Divergence_monitor */
  long     _index; /* e.g. 2 index in TRACE list */
  Coords   _position_absolute;
  Coords   _position_relative; /* wrt PREVIOUS */
  Rotation _rotation_absolute;
  Rotation _rotation_relative; /* wrt PREVIOUS */
  int      _rotation_is_identity;
  int      _position_relative_is_zero;
  _class_Divergence_monitor_parameters _parameters;
};
typedef struct _struct_Divergence_monitor _class_Divergence_monitor;
_class_Divergence_monitor _Div_sample_var;
#pragma acc declare create ( _Div_sample_var )

_class_PSD_monitor _psd_sample_var;
#pragma acc declare create ( _psd_sample_var )

int mcNUMCOMP = 13;

/* User declarations from instrument definition. Can define functions. */
  #ifndef M_PI
  #define M_PI 3.14159265358979323846
  #endif

/**** Port-Gisans parameters ****/
#define mirrNr 7 
double bsample;
double bn;
double delta_a[mirrNr]={0};

double f_pos[mirrNr]={0};
double yp1[mirrNr]={0};
double yp2[mirrNr]={0};

/****                                         ****/


/*     superMirror physical properties*/

double Rm=0.99;
double Qcm=0.021;
double alpham=3.33;
double mm=4;
double Wm=0.003;


#undef compcurname
#undef compcurtype
#undef compcurindex
/* end of instrument 'SKADI' and components DECLARE */

/* *****************************************************************************
* instrument 'SKADI' and components INITIALISE
***************************************************************************** */

/* component MCPL_source=MCPL_input() SETTING, POSITION/ROTATION */
int _MCPL_source_setpos(void)
{ /* sets initial component parameters, position and rotation */
  SIG_MESSAGE("[_MCPL_source_setpos] component MCPL_source=MCPL_input() SETTING [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//misc/MCPL_input.comp:80]");
  stracpy(_MCPL_source_var._name, "MCPL_source", 16384);
  stracpy(_MCPL_source_var._type, "MCPL_input", 16384);
  _MCPL_source_var._index=1;
  if("ExtractionOutput.mcpl" && strlen("ExtractionOutput.mcpl"))
    stracpy(_MCPL_source_var._parameters.filename, "ExtractionOutput.mcpl" ? "ExtractionOutput.mcpl" : "", 16384);
  else 
  _MCPL_source_var._parameters.filename[0]='\0';
  _MCPL_source_var._parameters.polarisationuse = 1;
  _MCPL_source_var._parameters.verbose = 1;
  _MCPL_source_var._parameters.Emin = 0;
  _MCPL_source_var._parameters.Emax = FLT_MAX;
  _MCPL_source_var._parameters.repeat_count = 1;
  _MCPL_source_var._parameters.E_smear = 0;
  _MCPL_source_var._parameters.pos_smear = 0;
  _MCPL_source_var._parameters.dir_smear = 0;
  _MCPL_source_var._parameters.preload = 0;


  /* component MCPL_source=MCPL_input() AT ROTATED */
  {
    Coords tc1, tc2;
    tc1 = coords_set(0,0,0);
    tc2 = coords_set(0,0,0);
    Rotation tr1;
    rot_set_rotation(tr1,0,0,0);
    rot_set_rotation(_MCPL_source_var._rotation_absolute,
      (0.0)*DEG2RAD, (0.0)*DEG2RAD, (0.0)*DEG2RAD);
    rot_copy(_MCPL_source_var._rotation_relative, _MCPL_source_var._rotation_absolute);
    _MCPL_source_var._rotation_is_identity =  rot_test_identity(_MCPL_source_var._rotation_relative);
    _MCPL_source_var._position_absolute = coords_set(
      0, 0, 0);
    tc1 = coords_neg(_MCPL_source_var._position_absolute);
    _MCPL_source_var._position_relative = rot_apply(_MCPL_source_var._rotation_absolute, tc1);
  } /* MCPL_source=MCPL_input() AT ROTATED */
  DEBUG_COMPONENT("MCPL_source", _MCPL_source_var._position_absolute, _MCPL_source_var._rotation_absolute);
  instrument->_position_absolute[1] = _MCPL_source_var._position_absolute;
  instrument->_position_relative[1] = _MCPL_source_var._position_relative;
    _MCPL_source_var._position_relative_is_zero =  coords_test_zero(_MCPL_source_var._position_relative);
  instrument->counter_N[1]  = instrument->counter_P[1] = instrument->counter_P2[1] = 0;
  instrument->counter_AbsorbProp[1]= 0;
  return(0);
} /* _MCPL_source_setpos */

/* component collSpec=L_monitor() SETTING, POSITION/ROTATION */
int _collSpec_setpos(void)
{ /* sets initial component parameters, position and rotation */
  SIG_MESSAGE("[_collSpec_setpos] component collSpec=L_monitor() SETTING [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//monitors/L_monitor.comp:66]");
  stracpy(_collSpec_var._name, "collSpec", 16384);
  stracpy(_collSpec_var._type, "L_monitor", 16384);
  _collSpec_var._index=2;
  _collSpec_var._parameters.nL = 100;
  if("collSpec-HiRes.txt" && strlen("collSpec-HiRes.txt"))
    stracpy(_collSpec_var._parameters.filename, "collSpec-HiRes.txt" ? "collSpec-HiRes.txt" : "", 16384);
  else 
  _collSpec_var._parameters.filename[0]='\0';
  _collSpec_var._parameters.nowritefile = 0;
  _collSpec_var._parameters.xmin = -0.05;
  _collSpec_var._parameters.xmax = 0.05;
  _collSpec_var._parameters.ymin = -0.05;
  _collSpec_var._parameters.ymax = 0.05;
  _collSpec_var._parameters.xwidth = 1;
  _collSpec_var._parameters.yheight = 1;
  _collSpec_var._parameters.Lmin = _instrument_var._parameters.lambdamin;
  _collSpec_var._parameters.Lmax = _instrument_var._parameters.lambdamax;
  _collSpec_var._parameters.restore_neutron = 0;


  /* component collSpec=L_monitor() AT ROTATED */
  {
    Coords tc1, tc2;
    tc1 = coords_set(0,0,0);
    tc2 = coords_set(0,0,0);
    Rotation tr1;
    rot_set_rotation(tr1,0,0,0);
    rot_set_rotation(tr1,
      (0.0)*DEG2RAD, (0.0)*DEG2RAD, (0.0)*DEG2RAD);
    rot_mul(tr1, _MCPL_source_var._rotation_absolute, _collSpec_var._rotation_absolute);
    rot_transpose(_MCPL_source_var._rotation_absolute, tr1);
    rot_mul(_collSpec_var._rotation_absolute, tr1, _collSpec_var._rotation_relative);
    _collSpec_var._rotation_is_identity =  rot_test_identity(_collSpec_var._rotation_relative);
    tc1 = coords_set(
      0, 0, 0.0001);
    rot_transpose(_MCPL_source_var._rotation_absolute, tr1);
    tc2 = rot_apply(tr1, tc1);
    _collSpec_var._position_absolute = coords_add(_MCPL_source_var._position_absolute, tc2);
    tc1 = coords_sub(_MCPL_source_var._position_absolute, _collSpec_var._position_absolute);
    _collSpec_var._position_relative = rot_apply(_collSpec_var._rotation_absolute, tc1);
  } /* collSpec=L_monitor() AT ROTATED */
  DEBUG_COMPONENT("collSpec", _collSpec_var._position_absolute, _collSpec_var._rotation_absolute);
  instrument->_position_absolute[2] = _collSpec_var._position_absolute;
  instrument->_position_relative[2] = _collSpec_var._position_relative;
    _collSpec_var._position_relative_is_zero =  coords_test_zero(_collSpec_var._position_relative);
  instrument->counter_N[2]  = instrument->counter_P[2] = instrument->counter_P2[2] = 0;
  instrument->counter_AbsorbProp[2]= 0;
  return(0);
} /* _collSpec_setpos */

/* component psd_pre_mirror=PSD_monitor() SETTING, POSITION/ROTATION */
int _psd_pre_mirror_setpos(void)
{ /* sets initial component parameters, position and rotation */
  SIG_MESSAGE("[_psd_pre_mirror_setpos] component psd_pre_mirror=PSD_monitor() SETTING [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//monitors/PSD_monitor.comp:62]");
  stracpy(_psd_pre_mirror_var._name, "psd_pre_mirror", 16384);
  stracpy(_psd_pre_mirror_var._type, "PSD_monitor", 16384);
  _psd_pre_mirror_var._index=3;
  _psd_pre_mirror_var._parameters.nx = 90;
  _psd_pre_mirror_var._parameters.ny = 90;
  if("psd_premirror" && strlen("psd_premirror"))
    stracpy(_psd_pre_mirror_var._parameters.filename, "psd_premirror" ? "psd_premirror" : "", 16384);
  else 
  _psd_pre_mirror_var._parameters.filename[0]='\0';
  _psd_pre_mirror_var._parameters.xmin = -0.02;
  _psd_pre_mirror_var._parameters.xmax = 0.02;
  _psd_pre_mirror_var._parameters.ymin = -0.02;
  _psd_pre_mirror_var._parameters.ymax = 0.02;
  _psd_pre_mirror_var._parameters.xwidth = 0;
  _psd_pre_mirror_var._parameters.yheight = 0;
  _psd_pre_mirror_var._parameters.restore_neutron = 0;
  _psd_pre_mirror_var._parameters.nowritefile = 0;


  /* component psd_pre_mirror=PSD_monitor() AT ROTATED */
  {
    Coords tc1, tc2;
    tc1 = coords_set(0,0,0);
    tc2 = coords_set(0,0,0);
    Rotation tr1;
    rot_set_rotation(tr1,0,0,0);
    rot_set_rotation(tr1,
      (0)*DEG2RAD, (0)*DEG2RAD, (0)*DEG2RAD);
    rot_mul(tr1, _collSpec_var._rotation_absolute, _psd_pre_mirror_var._rotation_absolute);
    rot_transpose(_collSpec_var._rotation_absolute, tr1);
    rot_mul(_psd_pre_mirror_var._rotation_absolute, tr1, _psd_pre_mirror_var._rotation_relative);
    _psd_pre_mirror_var._rotation_is_identity =  rot_test_identity(_psd_pre_mirror_var._rotation_relative);
    tc1 = coords_set(
      0, 0, 0.01);
    rot_transpose(_collSpec_var._rotation_absolute, tr1);
    tc2 = rot_apply(tr1, tc1);
    _psd_pre_mirror_var._position_absolute = coords_add(_collSpec_var._position_absolute, tc2);
    tc1 = coords_sub(_collSpec_var._position_absolute, _psd_pre_mirror_var._position_absolute);
    _psd_pre_mirror_var._position_relative = rot_apply(_psd_pre_mirror_var._rotation_absolute, tc1);
  } /* psd_pre_mirror=PSD_monitor() AT ROTATED */
  DEBUG_COMPONENT("psd_pre_mirror", _psd_pre_mirror_var._position_absolute, _psd_pre_mirror_var._rotation_absolute);
  instrument->_position_absolute[3] = _psd_pre_mirror_var._position_absolute;
  instrument->_position_relative[3] = _psd_pre_mirror_var._position_relative;
    _psd_pre_mirror_var._position_relative_is_zero =  coords_test_zero(_psd_pre_mirror_var._position_relative);
  instrument->counter_N[3]  = instrument->counter_P[3] = instrument->counter_P2[3] = 0;
  instrument->counter_AbsorbProp[3]= 0;
  return(0);
} /* _psd_pre_mirror_setpos */

/* component PortGisans=Arm() SETTING, POSITION/ROTATION */
int _PortGisans_setpos(void)
{ /* sets initial component parameters, position and rotation */
  SIG_MESSAGE("[_PortGisans_setpos] component PortGisans=Arm() SETTING [Arm:0]");
  stracpy(_PortGisans_var._name, "PortGisans", 16384);
  stracpy(_PortGisans_var._type, "Arm", 16384);
  _PortGisans_var._index=4;
  /* component PortGisans=Arm() AT ROTATED */
  {
    Coords tc1, tc2;
    tc1 = coords_set(0,0,0);
    tc2 = coords_set(0,0,0);
    Rotation tr1;
    rot_set_rotation(tr1,0,0,0);
    rot_set_rotation(tr1,
      (0.0)*DEG2RAD, (0.0)*DEG2RAD, (0.0)*DEG2RAD);
    rot_mul(tr1, _psd_pre_mirror_var._rotation_absolute, _PortGisans_var._rotation_absolute);
    rot_transpose(_psd_pre_mirror_var._rotation_absolute, tr1);
    rot_mul(_PortGisans_var._rotation_absolute, tr1, _PortGisans_var._rotation_relative);
    _PortGisans_var._rotation_is_identity =  rot_test_identity(_PortGisans_var._rotation_relative);
    tc1 = coords_set(
      0, 0, 0.02);
    rot_transpose(_psd_pre_mirror_var._rotation_absolute, tr1);
    tc2 = rot_apply(tr1, tc1);
    _PortGisans_var._position_absolute = coords_add(_psd_pre_mirror_var._position_absolute, tc2);
    tc1 = coords_sub(_psd_pre_mirror_var._position_absolute, _PortGisans_var._position_absolute);
    _PortGisans_var._position_relative = rot_apply(_PortGisans_var._rotation_absolute, tc1);
  } /* PortGisans=Arm() AT ROTATED */
  DEBUG_COMPONENT("PortGisans", _PortGisans_var._position_absolute, _PortGisans_var._rotation_absolute);
  instrument->_position_absolute[4] = _PortGisans_var._position_absolute;
  instrument->_position_relative[4] = _PortGisans_var._position_relative;
    _PortGisans_var._position_relative_is_zero =  coords_test_zero(_PortGisans_var._position_relative);
  instrument->counter_N[4]  = instrument->counter_P[4] = instrument->counter_P2[4] = 0;
  instrument->counter_AbsorbProp[4]= 0;
  return(0);
} /* _PortGisans_setpos */

/* component focus_Mirr_5=Mirror_Parabolic() SETTING, POSITION/ROTATION */
int _focus_Mirr_5_setpos(void)
{ /* sets initial component parameters, position and rotation */
  SIG_MESSAGE("[_focus_Mirr_5_setpos] component focus_Mirr_5=Mirror_Parabolic() SETTING [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//contrib/Mirror_Parabolic.comp:67]");
  stracpy(_focus_Mirr_5_var._name, "focus_Mirr_5", 16384);
  stracpy(_focus_Mirr_5_var._type, "Mirror_Parabolic", 16384);
  _focus_Mirr_5_var._index=5;
  _focus_Mirr_5_var._parameters.reflect[0]='\0';
  _focus_Mirr_5_var._parameters.xwidth = yp1 [ 4 ] - yp1 [ 5 ];
  _focus_Mirr_5_var._parameters.xshift = yp1 [ 5 ];
  _focus_Mirr_5_var._parameters.yheight = _instrument_var._parameters.colWidth * 2;
  _focus_Mirr_5_var._parameters.focus = f_pos [ 4 ];
  _focus_Mirr_5_var._parameters.R0 = Rm;
  _focus_Mirr_5_var._parameters.Qc = Qcm;
  _focus_Mirr_5_var._parameters.alpha = alpham;
  _focus_Mirr_5_var._parameters.m = mm;
  _focus_Mirr_5_var._parameters.W = Wm;


  /* component focus_Mirr_5=Mirror_Parabolic() AT ROTATED */
  {
    Coords tc1, tc2;
    tc1 = coords_set(0,0,0);
    tc2 = coords_set(0,0,0);
    Rotation tr1;
    rot_set_rotation(tr1,0,0,0);
    rot_set_rotation(tr1,
      (0)*DEG2RAD, (0)*DEG2RAD, (90)*DEG2RAD);
    rot_mul(tr1, _PortGisans_var._rotation_absolute, _focus_Mirr_5_var._rotation_absolute);
    rot_transpose(_psd_pre_mirror_var._rotation_absolute, tr1);
    rot_mul(_focus_Mirr_5_var._rotation_absolute, tr1, _focus_Mirr_5_var._rotation_relative);
    _focus_Mirr_5_var._rotation_is_identity =  rot_test_identity(_focus_Mirr_5_var._rotation_relative);
    tc1 = coords_set(
      0, _instrument_var._parameters.colWidth / 2 - _instrument_var._parameters.y_sample, 0);
    rot_transpose(_PortGisans_var._rotation_absolute, tr1);
    tc2 = rot_apply(tr1, tc1);
    _focus_Mirr_5_var._position_absolute = coords_add(_PortGisans_var._position_absolute, tc2);
    tc1 = coords_sub(_psd_pre_mirror_var._position_absolute, _focus_Mirr_5_var._position_absolute);
    _focus_Mirr_5_var._position_relative = rot_apply(_focus_Mirr_5_var._rotation_absolute, tc1);
  } /* focus_Mirr_5=Mirror_Parabolic() AT ROTATED */
  DEBUG_COMPONENT("focus_Mirr_5", _focus_Mirr_5_var._position_absolute, _focus_Mirr_5_var._rotation_absolute);
  instrument->_position_absolute[5] = _focus_Mirr_5_var._position_absolute;
  instrument->_position_relative[5] = _focus_Mirr_5_var._position_relative;
    _focus_Mirr_5_var._position_relative_is_zero =  coords_test_zero(_focus_Mirr_5_var._position_relative);
  instrument->counter_N[5]  = instrument->counter_P[5] = instrument->counter_P2[5] = 0;
  instrument->counter_AbsorbProp[5]= 0;
  return(0);
} /* _focus_Mirr_5_setpos */

/* component focus_Mirr_4=Mirror_Parabolic() SETTING, POSITION/ROTATION */
int _focus_Mirr_4_setpos(void)
{ /* sets initial component parameters, position and rotation */
  SIG_MESSAGE("[_focus_Mirr_4_setpos] component focus_Mirr_4=Mirror_Parabolic() SETTING [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//contrib/Mirror_Parabolic.comp:67]");
  stracpy(_focus_Mirr_4_var._name, "focus_Mirr_4", 16384);
  stracpy(_focus_Mirr_4_var._type, "Mirror_Parabolic", 16384);
  _focus_Mirr_4_var._index=6;
  _focus_Mirr_4_var._parameters.reflect[0]='\0';
  _focus_Mirr_4_var._parameters.xwidth = yp1 [ 3 ] - yp1 [ 4 ];
  _focus_Mirr_4_var._parameters.xshift = yp1 [ 4 ];
  _focus_Mirr_4_var._parameters.yheight = _instrument_var._parameters.colWidth * 2;
  _focus_Mirr_4_var._parameters.focus = f_pos [ 3 ];
  _focus_Mirr_4_var._parameters.R0 = Rm;
  _focus_Mirr_4_var._parameters.Qc = Qcm;
  _focus_Mirr_4_var._parameters.alpha = alpham;
  _focus_Mirr_4_var._parameters.m = mm;
  _focus_Mirr_4_var._parameters.W = Wm;


  /* component focus_Mirr_4=Mirror_Parabolic() AT ROTATED */
  {
    Coords tc1, tc2;
    tc1 = coords_set(0,0,0);
    tc2 = coords_set(0,0,0);
    Rotation tr1;
    rot_set_rotation(tr1,0,0,0);
    rot_set_rotation(tr1,
      (0)*DEG2RAD, (0)*DEG2RAD, (90)*DEG2RAD);
    rot_mul(tr1, _PortGisans_var._rotation_absolute, _focus_Mirr_4_var._rotation_absolute);
    rot_transpose(_focus_Mirr_5_var._rotation_absolute, tr1);
    rot_mul(_focus_Mirr_4_var._rotation_absolute, tr1, _focus_Mirr_4_var._rotation_relative);
    _focus_Mirr_4_var._rotation_is_identity =  rot_test_identity(_focus_Mirr_4_var._rotation_relative);
    tc1 = coords_set(
      0, _instrument_var._parameters.colWidth / 2 - _instrument_var._parameters.y_sample, 0);
    rot_transpose(_PortGisans_var._rotation_absolute, tr1);
    tc2 = rot_apply(tr1, tc1);
    _focus_Mirr_4_var._position_absolute = coords_add(_PortGisans_var._position_absolute, tc2);
    tc1 = coords_sub(_focus_Mirr_5_var._position_absolute, _focus_Mirr_4_var._position_absolute);
    _focus_Mirr_4_var._position_relative = rot_apply(_focus_Mirr_4_var._rotation_absolute, tc1);
  } /* focus_Mirr_4=Mirror_Parabolic() AT ROTATED */
  DEBUG_COMPONENT("focus_Mirr_4", _focus_Mirr_4_var._position_absolute, _focus_Mirr_4_var._rotation_absolute);
  instrument->_position_absolute[6] = _focus_Mirr_4_var._position_absolute;
  instrument->_position_relative[6] = _focus_Mirr_4_var._position_relative;
    _focus_Mirr_4_var._position_relative_is_zero =  coords_test_zero(_focus_Mirr_4_var._position_relative);
  instrument->counter_N[6]  = instrument->counter_P[6] = instrument->counter_P2[6] = 0;
  instrument->counter_AbsorbProp[6]= 0;
  return(0);
} /* _focus_Mirr_4_setpos */

/* component focus_Mirr_3=Mirror_Parabolic() SETTING, POSITION/ROTATION */
int _focus_Mirr_3_setpos(void)
{ /* sets initial component parameters, position and rotation */
  SIG_MESSAGE("[_focus_Mirr_3_setpos] component focus_Mirr_3=Mirror_Parabolic() SETTING [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//contrib/Mirror_Parabolic.comp:67]");
  stracpy(_focus_Mirr_3_var._name, "focus_Mirr_3", 16384);
  stracpy(_focus_Mirr_3_var._type, "Mirror_Parabolic", 16384);
  _focus_Mirr_3_var._index=7;
  _focus_Mirr_3_var._parameters.reflect[0]='\0';
  _focus_Mirr_3_var._parameters.xwidth = yp1 [ 2 ] - yp1 [ 3 ];
  _focus_Mirr_3_var._parameters.xshift = yp1 [ 3 ];
  _focus_Mirr_3_var._parameters.yheight = _instrument_var._parameters.colWidth * 2;
  _focus_Mirr_3_var._parameters.focus = f_pos [ 2 ];
  _focus_Mirr_3_var._parameters.R0 = Rm;
  _focus_Mirr_3_var._parameters.Qc = Qcm;
  _focus_Mirr_3_var._parameters.alpha = alpham;
  _focus_Mirr_3_var._parameters.m = mm;
  _focus_Mirr_3_var._parameters.W = Wm;


  /* component focus_Mirr_3=Mirror_Parabolic() AT ROTATED */
  {
    Coords tc1, tc2;
    tc1 = coords_set(0,0,0);
    tc2 = coords_set(0,0,0);
    Rotation tr1;
    rot_set_rotation(tr1,0,0,0);
    rot_set_rotation(tr1,
      (0)*DEG2RAD, (0)*DEG2RAD, (90)*DEG2RAD);
    rot_mul(tr1, _PortGisans_var._rotation_absolute, _focus_Mirr_3_var._rotation_absolute);
    rot_transpose(_focus_Mirr_4_var._rotation_absolute, tr1);
    rot_mul(_focus_Mirr_3_var._rotation_absolute, tr1, _focus_Mirr_3_var._rotation_relative);
    _focus_Mirr_3_var._rotation_is_identity =  rot_test_identity(_focus_Mirr_3_var._rotation_relative);
    tc1 = coords_set(
      0, _instrument_var._parameters.colWidth / 2 - _instrument_var._parameters.y_sample, 0);
    rot_transpose(_PortGisans_var._rotation_absolute, tr1);
    tc2 = rot_apply(tr1, tc1);
    _focus_Mirr_3_var._position_absolute = coords_add(_PortGisans_var._position_absolute, tc2);
    tc1 = coords_sub(_focus_Mirr_4_var._position_absolute, _focus_Mirr_3_var._position_absolute);
    _focus_Mirr_3_var._position_relative = rot_apply(_focus_Mirr_3_var._rotation_absolute, tc1);
  } /* focus_Mirr_3=Mirror_Parabolic() AT ROTATED */
  DEBUG_COMPONENT("focus_Mirr_3", _focus_Mirr_3_var._position_absolute, _focus_Mirr_3_var._rotation_absolute);
  instrument->_position_absolute[7] = _focus_Mirr_3_var._position_absolute;
  instrument->_position_relative[7] = _focus_Mirr_3_var._position_relative;
    _focus_Mirr_3_var._position_relative_is_zero =  coords_test_zero(_focus_Mirr_3_var._position_relative);
  instrument->counter_N[7]  = instrument->counter_P[7] = instrument->counter_P2[7] = 0;
  instrument->counter_AbsorbProp[7]= 0;
  return(0);
} /* _focus_Mirr_3_setpos */

/* component focus_Mirr_2=Mirror_Parabolic() SETTING, POSITION/ROTATION */
int _focus_Mirr_2_setpos(void)
{ /* sets initial component parameters, position and rotation */
  SIG_MESSAGE("[_focus_Mirr_2_setpos] component focus_Mirr_2=Mirror_Parabolic() SETTING [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//contrib/Mirror_Parabolic.comp:67]");
  stracpy(_focus_Mirr_2_var._name, "focus_Mirr_2", 16384);
  stracpy(_focus_Mirr_2_var._type, "Mirror_Parabolic", 16384);
  _focus_Mirr_2_var._index=8;
  _focus_Mirr_2_var._parameters.reflect[0]='\0';
  _focus_Mirr_2_var._parameters.xwidth = yp1 [ 1 ] - yp1 [ 2 ];
  _focus_Mirr_2_var._parameters.xshift = yp1 [ 2 ];
  _focus_Mirr_2_var._parameters.yheight = _instrument_var._parameters.colWidth * 2;
  _focus_Mirr_2_var._parameters.focus = f_pos [ 1 ];
  _focus_Mirr_2_var._parameters.R0 = Rm;
  _focus_Mirr_2_var._parameters.Qc = Qcm;
  _focus_Mirr_2_var._parameters.alpha = alpham;
  _focus_Mirr_2_var._parameters.m = mm;
  _focus_Mirr_2_var._parameters.W = Wm;


  /* component focus_Mirr_2=Mirror_Parabolic() AT ROTATED */
  {
    Coords tc1, tc2;
    tc1 = coords_set(0,0,0);
    tc2 = coords_set(0,0,0);
    Rotation tr1;
    rot_set_rotation(tr1,0,0,0);
    rot_set_rotation(tr1,
      (0)*DEG2RAD, (0)*DEG2RAD, (90)*DEG2RAD);
    rot_mul(tr1, _PortGisans_var._rotation_absolute, _focus_Mirr_2_var._rotation_absolute);
    rot_transpose(_focus_Mirr_3_var._rotation_absolute, tr1);
    rot_mul(_focus_Mirr_2_var._rotation_absolute, tr1, _focus_Mirr_2_var._rotation_relative);
    _focus_Mirr_2_var._rotation_is_identity =  rot_test_identity(_focus_Mirr_2_var._rotation_relative);
    tc1 = coords_set(
      0, _instrument_var._parameters.colWidth / 2 - _instrument_var._parameters.y_sample, 0);
    rot_transpose(_PortGisans_var._rotation_absolute, tr1);
    tc2 = rot_apply(tr1, tc1);
    _focus_Mirr_2_var._position_absolute = coords_add(_PortGisans_var._position_absolute, tc2);
    tc1 = coords_sub(_focus_Mirr_3_var._position_absolute, _focus_Mirr_2_var._position_absolute);
    _focus_Mirr_2_var._position_relative = rot_apply(_focus_Mirr_2_var._rotation_absolute, tc1);
  } /* focus_Mirr_2=Mirror_Parabolic() AT ROTATED */
  DEBUG_COMPONENT("focus_Mirr_2", _focus_Mirr_2_var._position_absolute, _focus_Mirr_2_var._rotation_absolute);
  instrument->_position_absolute[8] = _focus_Mirr_2_var._position_absolute;
  instrument->_position_relative[8] = _focus_Mirr_2_var._position_relative;
    _focus_Mirr_2_var._position_relative_is_zero =  coords_test_zero(_focus_Mirr_2_var._position_relative);
  instrument->counter_N[8]  = instrument->counter_P[8] = instrument->counter_P2[8] = 0;
  instrument->counter_AbsorbProp[8]= 0;
  return(0);
} /* _focus_Mirr_2_setpos */

/* component focus_Mirr=Mirror_Parabolic() SETTING, POSITION/ROTATION */
int _focus_Mirr_setpos(void)
{ /* sets initial component parameters, position and rotation */
  SIG_MESSAGE("[_focus_Mirr_setpos] component focus_Mirr=Mirror_Parabolic() SETTING [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//contrib/Mirror_Parabolic.comp:67]");
  stracpy(_focus_Mirr_var._name, "focus_Mirr", 16384);
  stracpy(_focus_Mirr_var._type, "Mirror_Parabolic", 16384);
  _focus_Mirr_var._index=9;
  _focus_Mirr_var._parameters.reflect[0]='\0';
  _focus_Mirr_var._parameters.xwidth = yp1 [ 0 ] - yp1 [ 1 ];
  _focus_Mirr_var._parameters.xshift = yp1 [ 1 ];
  _focus_Mirr_var._parameters.yheight = _instrument_var._parameters.colWidth * 2;
  _focus_Mirr_var._parameters.focus = f_pos [ 0 ];
  _focus_Mirr_var._parameters.R0 = Rm;
  _focus_Mirr_var._parameters.Qc = Qcm;
  _focus_Mirr_var._parameters.alpha = alpham;
  _focus_Mirr_var._parameters.m = mm;
  _focus_Mirr_var._parameters.W = Wm;


  /* component focus_Mirr=Mirror_Parabolic() AT ROTATED */
  {
    Coords tc1, tc2;
    tc1 = coords_set(0,0,0);
    tc2 = coords_set(0,0,0);
    Rotation tr1;
    rot_set_rotation(tr1,0,0,0);
    rot_set_rotation(tr1,
      (0)*DEG2RAD, (0)*DEG2RAD, (90)*DEG2RAD);
    rot_mul(tr1, _PortGisans_var._rotation_absolute, _focus_Mirr_var._rotation_absolute);
    rot_transpose(_focus_Mirr_2_var._rotation_absolute, tr1);
    rot_mul(_focus_Mirr_var._rotation_absolute, tr1, _focus_Mirr_var._rotation_relative);
    _focus_Mirr_var._rotation_is_identity =  rot_test_identity(_focus_Mirr_var._rotation_relative);
    tc1 = coords_set(
      0, _instrument_var._parameters.colWidth / 2 - _instrument_var._parameters.y_sample, 0);
    rot_transpose(_PortGisans_var._rotation_absolute, tr1);
    tc2 = rot_apply(tr1, tc1);
    _focus_Mirr_var._position_absolute = coords_add(_PortGisans_var._position_absolute, tc2);
    tc1 = coords_sub(_focus_Mirr_2_var._position_absolute, _focus_Mirr_var._position_absolute);
    _focus_Mirr_var._position_relative = rot_apply(_focus_Mirr_var._rotation_absolute, tc1);
  } /* focus_Mirr=Mirror_Parabolic() AT ROTATED */
  DEBUG_COMPONENT("focus_Mirr", _focus_Mirr_var._position_absolute, _focus_Mirr_var._rotation_absolute);
  instrument->_position_absolute[9] = _focus_Mirr_var._position_absolute;
  instrument->_position_relative[9] = _focus_Mirr_var._position_relative;
    _focus_Mirr_var._position_relative_is_zero =  coords_test_zero(_focus_Mirr_var._position_relative);
  instrument->counter_N[9]  = instrument->counter_P[9] = instrument->counter_P2[9] = 0;
  instrument->counter_AbsorbProp[9]= 0;
  return(0);
} /* _focus_Mirr_setpos */

/* component psd_pre_sample=PSD_monitor() SETTING, POSITION/ROTATION */
int _psd_pre_sample_setpos(void)
{ /* sets initial component parameters, position and rotation */
  SIG_MESSAGE("[_psd_pre_sample_setpos] component psd_pre_sample=PSD_monitor() SETTING [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//monitors/PSD_monitor.comp:62]");
  stracpy(_psd_pre_sample_var._name, "psd_pre_sample", 16384);
  stracpy(_psd_pre_sample_var._type, "PSD_monitor", 16384);
  _psd_pre_sample_var._index=10;
  _psd_pre_sample_var._parameters.nx = 90;
  _psd_pre_sample_var._parameters.ny = 90;
  if("psd_pre_sample" && strlen("psd_pre_sample"))
    stracpy(_psd_pre_sample_var._parameters.filename, "psd_pre_sample" ? "psd_pre_sample" : "", 16384);
  else 
  _psd_pre_sample_var._parameters.filename[0]='\0';
  _psd_pre_sample_var._parameters.xmin = -0.02;
  _psd_pre_sample_var._parameters.xmax = 0.02;
  _psd_pre_sample_var._parameters.ymin = -0.02;
  _psd_pre_sample_var._parameters.ymax = 0.02;
  _psd_pre_sample_var._parameters.xwidth = 0;
  _psd_pre_sample_var._parameters.yheight = 0;
  _psd_pre_sample_var._parameters.restore_neutron = 0;
  _psd_pre_sample_var._parameters.nowritefile = 0;


  /* component psd_pre_sample=PSD_monitor() AT ROTATED */
  {
    Coords tc1, tc2;
    tc1 = coords_set(0,0,0);
    tc2 = coords_set(0,0,0);
    Rotation tr1;
    rot_set_rotation(tr1,0,0,0);
    rot_set_rotation(tr1,
      (0.0)*DEG2RAD, (0.0)*DEG2RAD, (0.0)*DEG2RAD);
    rot_mul(tr1, _PortGisans_var._rotation_absolute, _psd_pre_sample_var._rotation_absolute);
    rot_transpose(_focus_Mirr_var._rotation_absolute, tr1);
    rot_mul(_psd_pre_sample_var._rotation_absolute, tr1, _psd_pre_sample_var._rotation_relative);
    _psd_pre_sample_var._rotation_is_identity =  rot_test_identity(_psd_pre_sample_var._rotation_relative);
    tc1 = coords_set(
      0, 0, _instrument_var._parameters.x_dist -0.15);
    rot_transpose(_PortGisans_var._rotation_absolute, tr1);
    tc2 = rot_apply(tr1, tc1);
    _psd_pre_sample_var._position_absolute = coords_add(_PortGisans_var._position_absolute, tc2);
    tc1 = coords_sub(_focus_Mirr_var._position_absolute, _psd_pre_sample_var._position_absolute);
    _psd_pre_sample_var._position_relative = rot_apply(_psd_pre_sample_var._rotation_absolute, tc1);
  } /* psd_pre_sample=PSD_monitor() AT ROTATED */
  DEBUG_COMPONENT("psd_pre_sample", _psd_pre_sample_var._position_absolute, _psd_pre_sample_var._rotation_absolute);
  instrument->_position_absolute[10] = _psd_pre_sample_var._position_absolute;
  instrument->_position_relative[10] = _psd_pre_sample_var._position_relative;
    _psd_pre_sample_var._position_relative_is_zero =  coords_test_zero(_psd_pre_sample_var._position_relative);
  instrument->counter_N[10]  = instrument->counter_P[10] = instrument->counter_P2[10] = 0;
  instrument->counter_AbsorbProp[10]= 0;
  return(0);
} /* _psd_pre_sample_setpos */

/* component collSpec_pre_sample=L_monitor() SETTING, POSITION/ROTATION */
int _collSpec_pre_sample_setpos(void)
{ /* sets initial component parameters, position and rotation */
  SIG_MESSAGE("[_collSpec_pre_sample_setpos] component collSpec_pre_sample=L_monitor() SETTING [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//monitors/L_monitor.comp:66]");
  stracpy(_collSpec_pre_sample_var._name, "collSpec_pre_sample", 16384);
  stracpy(_collSpec_pre_sample_var._type, "L_monitor", 16384);
  _collSpec_pre_sample_var._index=11;
  _collSpec_pre_sample_var._parameters.nL = 100;
  if("collSpec_pre_sample.txt" && strlen("collSpec_pre_sample.txt"))
    stracpy(_collSpec_pre_sample_var._parameters.filename, "collSpec_pre_sample.txt" ? "collSpec_pre_sample.txt" : "", 16384);
  else 
  _collSpec_pre_sample_var._parameters.filename[0]='\0';
  _collSpec_pre_sample_var._parameters.nowritefile = 0;
  _collSpec_pre_sample_var._parameters.xmin = -0.05;
  _collSpec_pre_sample_var._parameters.xmax = 0.05;
  _collSpec_pre_sample_var._parameters.ymin = -0.05;
  _collSpec_pre_sample_var._parameters.ymax = 0.05;
  _collSpec_pre_sample_var._parameters.xwidth = 0.1;
  _collSpec_pre_sample_var._parameters.yheight = 0.1;
  _collSpec_pre_sample_var._parameters.Lmin = _instrument_var._parameters.lambdamin;
  _collSpec_pre_sample_var._parameters.Lmax = _instrument_var._parameters.lambdamax;
  _collSpec_pre_sample_var._parameters.restore_neutron = 0;


  /* component collSpec_pre_sample=L_monitor() AT ROTATED */
  {
    Coords tc1, tc2;
    tc1 = coords_set(0,0,0);
    tc2 = coords_set(0,0,0);
    Rotation tr1;
    rot_set_rotation(tr1,0,0,0);
    rot_set_rotation(tr1,
      (0.0)*DEG2RAD, (0.0)*DEG2RAD, (0.0)*DEG2RAD);
    rot_mul(tr1, _PortGisans_var._rotation_absolute, _collSpec_pre_sample_var._rotation_absolute);
    rot_transpose(_psd_pre_sample_var._rotation_absolute, tr1);
    rot_mul(_collSpec_pre_sample_var._rotation_absolute, tr1, _collSpec_pre_sample_var._rotation_relative);
    _collSpec_pre_sample_var._rotation_is_identity =  rot_test_identity(_collSpec_pre_sample_var._rotation_relative);
    tc1 = coords_set(
      0, _instrument_var._parameters.colWidth / 2 - _instrument_var._parameters.y_sample, _instrument_var._parameters.x_dist -0.15);
    rot_transpose(_PortGisans_var._rotation_absolute, tr1);
    tc2 = rot_apply(tr1, tc1);
    _collSpec_pre_sample_var._position_absolute = coords_add(_PortGisans_var._position_absolute, tc2);
    tc1 = coords_sub(_psd_pre_sample_var._position_absolute, _collSpec_pre_sample_var._position_absolute);
    _collSpec_pre_sample_var._position_relative = rot_apply(_collSpec_pre_sample_var._rotation_absolute, tc1);
  } /* collSpec_pre_sample=L_monitor() AT ROTATED */
  DEBUG_COMPONENT("collSpec_pre_sample", _collSpec_pre_sample_var._position_absolute, _collSpec_pre_sample_var._rotation_absolute);
  instrument->_position_absolute[11] = _collSpec_pre_sample_var._position_absolute;
  instrument->_position_relative[11] = _collSpec_pre_sample_var._position_relative;
    _collSpec_pre_sample_var._position_relative_is_zero =  coords_test_zero(_collSpec_pre_sample_var._position_relative);
  instrument->counter_N[11]  = instrument->counter_P[11] = instrument->counter_P2[11] = 0;
  instrument->counter_AbsorbProp[11]= 0;
  return(0);
} /* _collSpec_pre_sample_setpos */

/* component Div_sample=Divergence_monitor() SETTING, POSITION/ROTATION */
int _Div_sample_setpos(void)
{ /* sets initial component parameters, position and rotation */
  SIG_MESSAGE("[_Div_sample_setpos] component Div_sample=Divergence_monitor() SETTING [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//monitors/Divergence_monitor.comp:72]");
  stracpy(_Div_sample_var._name, "Div_sample", 16384);
  stracpy(_Div_sample_var._type, "Divergence_monitor", 16384);
  _Div_sample_var._index=12;
  _Div_sample_var._parameters.nh = 100;
  _Div_sample_var._parameters.nv = 100;
  if("divergence_sample" && strlen("divergence_sample"))
    stracpy(_Div_sample_var._parameters.filename, "divergence_sample" ? "divergence_sample" : "", 16384);
  else 
  _Div_sample_var._parameters.filename[0]='\0';
  _Div_sample_var._parameters.xmin = -0.05;
  _Div_sample_var._parameters.xmax = 0.05;
  _Div_sample_var._parameters.ymin = -0.15;
  _Div_sample_var._parameters.ymax = 0.15;
  _Div_sample_var._parameters.nowritefile = 0;
  _Div_sample_var._parameters.xwidth = 0.1;
  _Div_sample_var._parameters.yheight = 0;
  _Div_sample_var._parameters.maxdiv_h = 2;
  _Div_sample_var._parameters.maxdiv_v = 3;
  _Div_sample_var._parameters.restore_neutron = 0;
  _Div_sample_var._parameters.nx = 0;
  _Div_sample_var._parameters.ny = 0;
  _Div_sample_var._parameters.nz = 1;


  /* component Div_sample=Divergence_monitor() AT ROTATED */
  {
    Coords tc1, tc2;
    tc1 = coords_set(0,0,0);
    tc2 = coords_set(0,0,0);
    Rotation tr1;
    rot_set_rotation(tr1,0,0,0);
    rot_set_rotation(tr1,
      (0)*DEG2RAD, (0)*DEG2RAD, (0)*DEG2RAD);
    rot_mul(tr1, _PortGisans_var._rotation_absolute, _Div_sample_var._rotation_absolute);
    rot_transpose(_collSpec_pre_sample_var._rotation_absolute, tr1);
    rot_mul(_Div_sample_var._rotation_absolute, tr1, _Div_sample_var._rotation_relative);
    _Div_sample_var._rotation_is_identity =  rot_test_identity(_Div_sample_var._rotation_relative);
    tc1 = coords_set(
      0, _instrument_var._parameters.colWidth / 2 - _instrument_var._parameters.y_sample, _instrument_var._parameters.x_dist -0.15);
    rot_transpose(_PortGisans_var._rotation_absolute, tr1);
    tc2 = rot_apply(tr1, tc1);
    _Div_sample_var._position_absolute = coords_add(_PortGisans_var._position_absolute, tc2);
    tc1 = coords_sub(_collSpec_pre_sample_var._position_absolute, _Div_sample_var._position_absolute);
    _Div_sample_var._position_relative = rot_apply(_Div_sample_var._rotation_absolute, tc1);
  } /* Div_sample=Divergence_monitor() AT ROTATED */
  DEBUG_COMPONENT("Div_sample", _Div_sample_var._position_absolute, _Div_sample_var._rotation_absolute);
  instrument->_position_absolute[12] = _Div_sample_var._position_absolute;
  instrument->_position_relative[12] = _Div_sample_var._position_relative;
    _Div_sample_var._position_relative_is_zero =  coords_test_zero(_Div_sample_var._position_relative);
  instrument->counter_N[12]  = instrument->counter_P[12] = instrument->counter_P2[12] = 0;
  instrument->counter_AbsorbProp[12]= 0;
  return(0);
} /* _Div_sample_setpos */

/* component psd_sample=PSD_monitor() SETTING, POSITION/ROTATION */
int _psd_sample_setpos(void)
{ /* sets initial component parameters, position and rotation */
  SIG_MESSAGE("[_psd_sample_setpos] component psd_sample=PSD_monitor() SETTING [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//monitors/PSD_monitor.comp:62]");
  stracpy(_psd_sample_var._name, "psd_sample", 16384);
  stracpy(_psd_sample_var._type, "PSD_monitor", 16384);
  _psd_sample_var._index=13;
  _psd_sample_var._parameters.nx = 90;
  _psd_sample_var._parameters.ny = 90;
  if("psd_sample" && strlen("psd_sample"))
    stracpy(_psd_sample_var._parameters.filename, "psd_sample" ? "psd_sample" : "", 16384);
  else 
  _psd_sample_var._parameters.filename[0]='\0';
  _psd_sample_var._parameters.xmin = -0.1;
  _psd_sample_var._parameters.xmax = 0.1;
  _psd_sample_var._parameters.ymin = 0;
  _psd_sample_var._parameters.ymax = 0.3;
  _psd_sample_var._parameters.xwidth = 0;
  _psd_sample_var._parameters.yheight = 0;
  _psd_sample_var._parameters.restore_neutron = 0;
  _psd_sample_var._parameters.nowritefile = 0;


  /* component psd_sample=PSD_monitor() AT ROTATED */
  {
    Coords tc1, tc2;
    tc1 = coords_set(0,0,0);
    tc2 = coords_set(0,0,0);
    Rotation tr1;
    rot_set_rotation(tr1,0,0,0);
    rot_set_rotation(tr1,
      (90)*DEG2RAD, (0)*DEG2RAD, (0)*DEG2RAD);
    rot_mul(tr1, _PortGisans_var._rotation_absolute, _psd_sample_var._rotation_absolute);
    rot_transpose(_Div_sample_var._rotation_absolute, tr1);
    rot_mul(_psd_sample_var._rotation_absolute, tr1, _psd_sample_var._rotation_relative);
    _psd_sample_var._rotation_is_identity =  rot_test_identity(_psd_sample_var._rotation_relative);
    tc1 = coords_set(
      0, _instrument_var._parameters.colWidth / 2 - _instrument_var._parameters.y_sample, _instrument_var._parameters.x_dist -0.15);
    rot_transpose(_PortGisans_var._rotation_absolute, tr1);
    tc2 = rot_apply(tr1, tc1);
    _psd_sample_var._position_absolute = coords_add(_PortGisans_var._position_absolute, tc2);
    tc1 = coords_sub(_Div_sample_var._position_absolute, _psd_sample_var._position_absolute);
    _psd_sample_var._position_relative = rot_apply(_psd_sample_var._rotation_absolute, tc1);
  } /* psd_sample=PSD_monitor() AT ROTATED */
  DEBUG_COMPONENT("psd_sample", _psd_sample_var._position_absolute, _psd_sample_var._rotation_absolute);
  instrument->_position_absolute[13] = _psd_sample_var._position_absolute;
  instrument->_position_relative[13] = _psd_sample_var._position_relative;
    _psd_sample_var._position_relative_is_zero =  coords_test_zero(_psd_sample_var._position_relative);
  instrument->counter_N[13]  = instrument->counter_P[13] = instrument->counter_P2[13] = 0;
  instrument->counter_AbsorbProp[13]= 0;
  return(0);
} /* _psd_sample_setpos */

_class_MCPL_input *class_MCPL_input_init(_class_MCPL_input *_comp
) {
  #define filename (_comp->_parameters.filename)
  #define polarisationuse (_comp->_parameters.polarisationuse)
  #define verbose (_comp->_parameters.verbose)
  #define Emin (_comp->_parameters.Emin)
  #define Emax (_comp->_parameters.Emax)
  #define repeat_count (_comp->_parameters.repeat_count)
  #define E_smear (_comp->_parameters.E_smear)
  #define pos_smear (_comp->_parameters.pos_smear)
  #define dir_smear (_comp->_parameters.dir_smear)
  #define preload (_comp->_parameters.preload)
  #define inputfile (_comp->_parameters.inputfile)
  #define nparticles (_comp->_parameters.nparticles)
  #define read_neutrons (_comp->_parameters.read_neutrons)
  #define used_neutrons (_comp->_parameters.used_neutrons)
  #define repeat_cnt (_comp->_parameters.repeat_cnt)
  #define repeat_tot (_comp->_parameters.repeat_tot)
  #define repeating (_comp->_parameters.repeating)
  #define ismpislave (_comp->_parameters.ismpislave)
  #define mpi_cnt (_comp->_parameters.mpi_cnt)
  #define X (_comp->_parameters.X)
  #define Y (_comp->_parameters.Y)
  #define Z (_comp->_parameters.Z)
  #define VX (_comp->_parameters.VX)
  #define VY (_comp->_parameters.VY)
  #define VZ (_comp->_parameters.VZ)
  #define SX (_comp->_parameters.SX)
  #define SY (_comp->_parameters.SY)
  #define SZ (_comp->_parameters.SZ)
  #define E (_comp->_parameters.E)
  #define T (_comp->_parameters.T)
  #define P (_comp->_parameters.P)
  SIG_MESSAGE("[_MCPL_source_init] component MCPL_source=MCPL_input() INITIALISE [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//misc/MCPL_input.comp:80]");

    char line[256];
    long long ncount;

    if(Emax<Emin){
        fprintf(stderr,"Warning(%s): Nonsensical energy interval: E=[%g,%g]. Aborting.\n",NAME_CURRENT_COMP,Emin,Emax);
        exit(-1);
    }
    /* No need to check if the file opens correctly since mcpl will
     * abort internally if it cannot open the file.*/
    inputfile = mcpl_open_file(filename);

  
    if ( !(nparticles=mcpl_hdr_nparticles(inputfile)) ) {
        fprintf(stderr,"Warning(%s): MCPL-file reports no present particles. Foolishly trying to go on.\n",NAME_CURRENT_COMP);
        #ifndef OPENACC
        nparticles=ncount;
        #endif
    }else{
        printf("Message(%s): MCPL file (%s) produced with %s.\n",NAME_CURRENT_COMP,filename,mcpl_hdr_srcname(inputfile));
        printf("Message(%s): MCPL file (%s) contains %lu particles.\n",NAME_CURRENT_COMP,filename,(long unsigned)nparticles); 
    }
    mcset_ncount(nparticles);

    if(repeat_count==0) repeat_count=1;
    repeat_cnt = repeat_count;
    mpi_cnt=1;
    ismpislave=0;
#if defined (USE_MPI)
    repeat_cnt = ceil(1.0*repeat_cnt/mpi_node_count);
    mpi_cnt=mpi_node_count;
    ismpislave = mpi_node_rank;
    MPI_MASTER(
#endif
	   fprintf(stdout, "\n\n Warning: You are using MCPL_input with a repeat_count of %lu:\n - Minimum neutron count requested is %lu x %lu <= %lu",
	       (long unsigned)repeat_count,(long unsigned)nparticles,
	       (long unsigned)repeat_count,(long unsigned)repeat_cnt*nparticles); 
#if defined (USE_MPI)
  fprintf(stdout, " x %i MPI nodes = %lu neutrons total\n",
    mpi_node_count,(long unsigned)mpi_node_count*repeat_cnt*nparticles);
     );
#else
  fprintf(stdout, " neutrons total\n\n");
#endif
  read_neutrons=0;
  used_neutrons=0;

#if defined (USE_MPI)   
    MPI_MASTER(
#endif

      if (verbose==1) {
        printf("MCPL_input verbose mode - outputting data on the 10 first read neutrons in MCPL units:\n");
      }

#if defined (USE_MPI) 
    );
#endif
    repeating = 0;
#ifdef OPENACC
    preload=1;
    printf("OpenACC, preload implicit:\n");	    
#endif
    if (preload) {
      printf("Preload requested, loading MCPLfile in INITIALIZE\n");
      X = create_darr1d(nparticles);
      Y = create_darr1d(nparticles);
      Z = create_darr1d(nparticles);
      VX = create_darr1d(nparticles);
      VY = create_darr1d(nparticles);
      VZ = create_darr1d(nparticles);
      SX = create_darr1d(nparticles);
      SY = create_darr1d(nparticles);
      SZ = create_darr1d(nparticles);
      T = create_darr1d(nparticles);
      P = create_darr1d(nparticles);
      E = create_darr1d(nparticles);
      printf("Initiating file read...\n");
      int loop;
      for (loop=0; loop < nparticles ; loop++) {
	const mcpl_particle_t *particle;
	particle=mcpl_read(inputfile);
	if (particle) {
	  if (particle->pdgcode==2112) {
	    if (verbose && read_neutrons<11) {
	      printf("id=%ld pdg=2112\tekin=%g MeV\tx=%g cm\ty=%g cm\tz=%g cm\tux=%g\tuy=%g\tuz=%g\tt=%g ms\tweight=%g\tpolx=%g\tpoly=%g\tpolz=%g\n",
		     (long unsigned)read_neutrons, particle->ekin, particle->position[0], particle->position[1], particle->position[2],
		     particle->direction[0], particle->direction[1], particle->direction[2], particle->time, particle->weight,
		     particle->polarisation[0], particle->polarisation[1], particle->polarisation[2]);
	    }
	    /* check energy range*/
	    if ( particle->ekin>Emin*1e-9 && particle->ekin<Emax*1e-9 ) {
	      /* Particle energy in range */
	      /*positions are in cm*/
	      X[used_neutrons]=particle->position[0];
	      Y[used_neutrons]=particle->position[1];
	      Z[used_neutrons]=particle->position[2];

	      if(polarisationuse){
		SX[used_neutrons]=(double)particle->polarisation[0];
		SY[used_neutrons]=(double)particle->polarisation[1];
		SZ[used_neutrons]=(double)particle->polarisation[2];
	      }else{
		SX[used_neutrons]=0;
		SY[used_neutrons]=0;
		SZ[used_neutrons]=0;
	      }

	      double d0=particle->direction[0];
	      double d1=particle->direction[1];
	      double d2=particle->direction[2];

	      VX[used_neutrons]=d0;
	      VY[used_neutrons]=d1;
	      VZ[used_neutrons]=d2;

	      /*time in ms:*/
	      T[used_neutrons] = particle->time;
	      /*weight in unspecified units:*/
	      P[used_neutrons] = particle->weight;
	      E[used_neutrons] = particle->ekin;
	      used_neutrons++;
	    }
	    read_neutrons++;
	  }
	}
      }
      printf("Done reading MCPL file, found %ld neutrons\n",(long unsigned)read_neutrons);
      mcpl_close_file(inputfile);
      fprintf(stdout, "\n\n Warning: You are using MCPL_input with a repeat_count of %lu:\n - Neutron count requested is %lu x %lu <= %lu",
	      (long unsigned)repeat_count,(long unsigned)read_neutrons,
	      (long unsigned)repeat_count,(long unsigned)repeat_cnt*read_neutrons);
      fprintf(stdout, " neutrons total\n\n");
    }
    repeat_tot=repeat_cnt*mpi_cnt;
    if (preload) {
      mcset_ncount(repeat_tot*used_neutrons);
    } else {
      mcset_ncount(repeat_tot*nparticles);
    }
  #undef filename
  #undef polarisationuse
  #undef verbose
  #undef Emin
  #undef Emax
  #undef repeat_count
  #undef E_smear
  #undef pos_smear
  #undef dir_smear
  #undef preload
  #undef inputfile
  #undef nparticles
  #undef read_neutrons
  #undef used_neutrons
  #undef repeat_cnt
  #undef repeat_tot
  #undef repeating
  #undef ismpislave
  #undef mpi_cnt
  #undef X
  #undef Y
  #undef Z
  #undef VX
  #undef VY
  #undef VZ
  #undef SX
  #undef SY
  #undef SZ
  #undef E
  #undef T
  #undef P
  return(_comp);
} /* class_MCPL_input_init */

_class_L_monitor *class_L_monitor_init(_class_L_monitor *_comp
) {
  #define nL (_comp->_parameters.nL)
  #define filename (_comp->_parameters.filename)
  #define nowritefile (_comp->_parameters.nowritefile)
  #define xmin (_comp->_parameters.xmin)
  #define xmax (_comp->_parameters.xmax)
  #define ymin (_comp->_parameters.ymin)
  #define ymax (_comp->_parameters.ymax)
  #define xwidth (_comp->_parameters.xwidth)
  #define yheight (_comp->_parameters.yheight)
  #define Lmin (_comp->_parameters.Lmin)
  #define Lmax (_comp->_parameters.Lmax)
  #define restore_neutron (_comp->_parameters.restore_neutron)
  #define L_N (_comp->_parameters.L_N)
  #define L_p (_comp->_parameters.L_p)
  #define L_p2 (_comp->_parameters.L_p2)
  SIG_MESSAGE("[_collSpec_init] component collSpec=L_monitor() INITIALISE [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//monitors/L_monitor.comp:66]");

  if (xwidth  > 0) { xmax = xwidth/2;  xmin = -xmax; }
  if (yheight > 0) { ymax = yheight/2; ymin = -ymax; }

  if ((xmin >= xmax) || (ymin >= ymax)) {
    printf("L_monitor: %s: Null detection area !\n"
      "ERROR      (xwidth,yheight,xmin,xmax,ymin,ymax). Exiting",
      NAME_CURRENT_COMP);
    exit(0);
  }

  L_N = create_darr1d(nL);
  L_p = create_darr1d(nL);
  L_p2 = create_darr1d(nL);

  int i;
  for (i=0; i<nL; i++)
  {
    L_N[i] = 0;
    L_p[i] = 0;
    L_p2[i] = 0;
  }

  // Use instance name for monitor output if no input was given
  if (!strcmp(filename,"\0")) sprintf(filename,NAME_CURRENT_COMP);
  #undef nL
  #undef filename
  #undef nowritefile
  #undef xmin
  #undef xmax
  #undef ymin
  #undef ymax
  #undef xwidth
  #undef yheight
  #undef Lmin
  #undef Lmax
  #undef restore_neutron
  #undef L_N
  #undef L_p
  #undef L_p2
  return(_comp);
} /* class_L_monitor_init */

_class_PSD_monitor *class_PSD_monitor_init(_class_PSD_monitor *_comp
) {
  #define nx (_comp->_parameters.nx)
  #define ny (_comp->_parameters.ny)
  #define filename (_comp->_parameters.filename)
  #define xmin (_comp->_parameters.xmin)
  #define xmax (_comp->_parameters.xmax)
  #define ymin (_comp->_parameters.ymin)
  #define ymax (_comp->_parameters.ymax)
  #define xwidth (_comp->_parameters.xwidth)
  #define yheight (_comp->_parameters.yheight)
  #define restore_neutron (_comp->_parameters.restore_neutron)
  #define nowritefile (_comp->_parameters.nowritefile)
  #define PSD_N (_comp->_parameters.PSD_N)
  #define PSD_p (_comp->_parameters.PSD_p)
  #define PSD_p2 (_comp->_parameters.PSD_p2)
  SIG_MESSAGE("[_psd_pre_mirror_init] component psd_pre_mirror=PSD_monitor() INITIALISE [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//monitors/PSD_monitor.comp:62]");

  if (xwidth  > 0) { xmax = xwidth/2;  xmin = -xmax; }
  if (yheight > 0) { ymax = yheight/2; ymin = -ymax; }

  if ((xmin >= xmax) || (ymin >= ymax)){
    printf("PSD_monitor: %s: Null detection area !\n"
           "ERROR        (xwidth,yheight,xmin,xmax,ymin,ymax). Exiting",
    NAME_CURRENT_COMP);
    exit(0);
  }

  PSD_N = create_darr2d(nx, ny);
  PSD_p = create_darr2d(nx, ny);
  PSD_p2 = create_darr2d(nx, ny);

  // Use instance name for monitor output if no input was given
  if (!strcmp(filename,"\0")) sprintf(filename,NAME_CURRENT_COMP);
  #undef nx
  #undef ny
  #undef filename
  #undef xmin
  #undef xmax
  #undef ymin
  #undef ymax
  #undef xwidth
  #undef yheight
  #undef restore_neutron
  #undef nowritefile
  #undef PSD_N
  #undef PSD_p
  #undef PSD_p2
  return(_comp);
} /* class_PSD_monitor_init */

_class_Mirror_Parabolic *class_Mirror_Parabolic_init(_class_Mirror_Parabolic *_comp
) {
  #define reflect (_comp->_parameters.reflect)
  #define xwidth (_comp->_parameters.xwidth)
  #define xshift (_comp->_parameters.xshift)
  #define yheight (_comp->_parameters.yheight)
  #define focus (_comp->_parameters.focus)
  #define R0 (_comp->_parameters.R0)
  #define Qc (_comp->_parameters.Qc)
  #define alpha (_comp->_parameters.alpha)
  #define m (_comp->_parameters.m)
  #define W (_comp->_parameters.W)
  #define beta1 (_comp->_parameters.beta1)
  #define gamma1 (_comp->_parameters.gamma1)
  #define pTable (_comp->_parameters.pTable)
  #define err (_comp->_parameters.err)
  #define nom (_comp->_parameters.nom)
  #define vz_neg (_comp->_parameters.vz_neg)
  SIG_MESSAGE("[_focus_Mirr_5_init] component focus_Mirr_5=Mirror_Parabolic() INITIALISE [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//contrib/Mirror_Parabolic.comp:67]");

double alpha1;                       /* width of the parabola */
if (reflect && strlen(reflect) && strcmp(reflect, "NULL") && strcmp(reflect,"0")) {
    if (Table_Read(&pTable, reflect, 1) <= 0) /* read 1st block data from file into pTable */
      exit(fprintf(stderr,"Mirror_Parabolic: %s: can not read file %s\n", NAME_CURRENT_COMP, reflect));
  }
  alpha1 = xwidth+xshift;
  gamma1 = -1/(4*focus);
  beta1 = -gamma1*alpha1*alpha1;
  err = 0;
  nom = 0;                      /* number of reflections on the mirror */
  vz_neg = 0;
  yheight/=2;  
  #undef reflect
  #undef xwidth
  #undef xshift
  #undef yheight
  #undef focus
  #undef R0
  #undef Qc
  #undef alpha
  #undef m
  #undef W
  #undef beta1
  #undef gamma1
  #undef pTable
  #undef err
  #undef nom
  #undef vz_neg
  return(_comp);
} /* class_Mirror_Parabolic_init */

_class_Divergence_monitor *class_Divergence_monitor_init(_class_Divergence_monitor *_comp
) {
  #define nh (_comp->_parameters.nh)
  #define nv (_comp->_parameters.nv)
  #define filename (_comp->_parameters.filename)
  #define xmin (_comp->_parameters.xmin)
  #define xmax (_comp->_parameters.xmax)
  #define ymin (_comp->_parameters.ymin)
  #define ymax (_comp->_parameters.ymax)
  #define nowritefile (_comp->_parameters.nowritefile)
  #define xwidth (_comp->_parameters.xwidth)
  #define yheight (_comp->_parameters.yheight)
  #define maxdiv_h (_comp->_parameters.maxdiv_h)
  #define maxdiv_v (_comp->_parameters.maxdiv_v)
  #define restore_neutron (_comp->_parameters.restore_neutron)
  #define nx (_comp->_parameters.nx)
  #define ny (_comp->_parameters.ny)
  #define nz (_comp->_parameters.nz)
  #define Div_N (_comp->_parameters.Div_N)
  #define Div_p (_comp->_parameters.Div_p)
  #define Div_p2 (_comp->_parameters.Div_p2)
  SIG_MESSAGE("[_Div_sample_init] component Div_sample=Divergence_monitor() INITIALISE [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//monitors/Divergence_monitor.comp:72]");

  int i,j;

  if (xwidth  > 0) { xmax = xwidth/2;  xmin = -xmax; }
  if (yheight > 0) { ymax = yheight/2; ymin = -ymax; }

  if ((xmin >= xmax) || (ymin >= ymax)) {
    printf("Divergence_monitor: %s: Null detection area !\n"
           "ERROR               (xwidth,yheight,xmin,xmax,ymin,ymax). Exiting",
           NAME_CURRENT_COMP);
    exit(0);
  }

  Div_N = create_darr2d(nh, nv);
  Div_p = create_darr2d(nh, nv);
  Div_p2 = create_darr2d(nh, nv);

  for (i=0; i<nh; i++)
    for (j=0; j<nv; j++)
    {
      Div_N[i][j] = 0;
      Div_p[i][j] = 0;
      Div_p2[i][j] = 0;
    }
  NORM(nx,ny,nz);

  // Use instance name for monitor output if no input was given
  if (!strcmp(filename,"\0")) sprintf(filename,NAME_CURRENT_COMP);
  #undef nh
  #undef nv
  #undef filename
  #undef xmin
  #undef xmax
  #undef ymin
  #undef ymax
  #undef nowritefile
  #undef xwidth
  #undef yheight
  #undef maxdiv_h
  #undef maxdiv_v
  #undef restore_neutron
  #undef nx
  #undef ny
  #undef nz
  #undef Div_N
  #undef Div_p
  #undef Div_p2
  return(_comp);
} /* class_Divergence_monitor_init */



int init(void) { /* called by mccode_main for SKADI:INITIALISE */
  DEBUG_INSTR();

  /* code_main/parseoptions/readparams sets instrument parameters value */
  stracpy(instrument->_name, "SKADI", 256);

  /* Instrument 'SKADI' INITIALISE */
  SIG_MESSAGE("[SKADI] INITIALISE [nested_optics_parabolic.instr:63]");
  #define x_dist (instrument->_parameters.x_dist)
  #define y_sample (instrument->_parameters.y_sample)
  #define L (instrument->_parameters.L)
  #define colWidth (instrument->_parameters.colWidth)
  #define lambdamin (instrument->_parameters.lambdamin)
  #define lambdamax (instrument->_parameters.lambdamax)
{

/**************************************************************/
/* loop for calculating Port-GISANS mirror configuration: heigth and angle */

 /**************************************************************/
/**************************************************************/
#include <math.h>
#include <stdio.h>
yp1[0] = y_sample;
for(int i=0; i<mirrNr;i++)
 { 
  f_pos[i]= -x_dist/2+sqrt( pow(x_dist/2,2) + pow(yp1[i],2)/4 );
  yp2[i]= sqrt( pow(yp1[i] ,2) - L*4*f_pos[i] );
  yp1[i+1]= yp2[i];

 }

}
  #undef x_dist
  #undef y_sample
  #undef L
  #undef colWidth
  #undef lambdamin
  #undef lambdamax
  _MCPL_source_setpos(); /* type MCPL_input */
  _collSpec_setpos(); /* type L_monitor */
  _psd_pre_mirror_setpos(); /* type PSD_monitor */
  _PortGisans_setpos(); /* type Arm */
  _focus_Mirr_5_setpos(); /* type Mirror_Parabolic */
  _focus_Mirr_4_setpos(); /* type Mirror_Parabolic */
  _focus_Mirr_3_setpos(); /* type Mirror_Parabolic */
  _focus_Mirr_2_setpos(); /* type Mirror_Parabolic */
  _focus_Mirr_setpos(); /* type Mirror_Parabolic */
  _psd_pre_sample_setpos(); /* type PSD_monitor */
  _collSpec_pre_sample_setpos(); /* type L_monitor */
  _Div_sample_setpos(); /* type Divergence_monitor */
  _psd_sample_setpos(); /* type PSD_monitor */

  /* call iteratively all components INITIALISE */
  class_MCPL_input_init(&_MCPL_source_var);

  class_L_monitor_init(&_collSpec_var);

  class_PSD_monitor_init(&_psd_pre_mirror_var);


  class_Mirror_Parabolic_init(&_focus_Mirr_5_var);

  class_Mirror_Parabolic_init(&_focus_Mirr_4_var);

  class_Mirror_Parabolic_init(&_focus_Mirr_3_var);

  class_Mirror_Parabolic_init(&_focus_Mirr_2_var);

  class_Mirror_Parabolic_init(&_focus_Mirr_var);

  class_PSD_monitor_init(&_psd_pre_sample_var);

  class_L_monitor_init(&_collSpec_pre_sample_var);

  class_Divergence_monitor_init(&_Div_sample_var);

  class_PSD_monitor_init(&_psd_sample_var);

  if (mcdotrace) display();
  DEBUG_INSTR_END();

#ifdef OPENACC
#include <openacc.h>
#pragma acc update device(_MCPL_source_var)
#pragma acc update device(_collSpec_var)
#pragma acc update device(_psd_pre_mirror_var)
#pragma acc update device(_PortGisans_var)
#pragma acc update device(_focus_Mirr_5_var)
#pragma acc update device(_focus_Mirr_4_var)
#pragma acc update device(_focus_Mirr_3_var)
#pragma acc update device(_focus_Mirr_2_var)
#pragma acc update device(_focus_Mirr_var)
#pragma acc update device(_psd_pre_sample_var)
#pragma acc update device(_collSpec_pre_sample_var)
#pragma acc update device(_Div_sample_var)
#pragma acc update device(_psd_sample_var)
#pragma acc update device(_instrument_var)
#endif

  return(0);
} /* init */

/*******************************************************************************
* components TRACE
*******************************************************************************/

#define x (_particle->x)
#define y (_particle->y)
#define z (_particle->z)
#define vx (_particle->vx)
#define vy (_particle->vy)
#define vz (_particle->vz)
#define t (_particle->t)
#define sx (_particle->sx)
#define sy (_particle->sy)
#define sz (_particle->sz)
#define p (_particle->p)
#define mcgravitation (_particle->mcgravitation)
#define mcMagnet (_particle->mcMagnet)
#define allow_backprop (_particle->allow_backprop)
/* if on GPU, globally nullify sprintf,fprintf,printfs   */
/* (Similar defines are available in each comp trace but */
/*  those are not enough to handle external libs etc. )  */
#ifdef OPENACC
#ifndef MULTICORE
#define fprintf(stderr,...) printf(__VA_ARGS__)
#define sprintf(string,...) printf(__VA_ARGS__)
#define exit(...) noprintf()
#define strcmp(a,b) str_comp(a,b)
#define strlen(a) str_len(a)
#endif
#endif
#define SCATTERED (_particle->_scattered)
#define RESTORE (_particle->_restore)
#define RESTORE_NEUTRON(_index, ...) _particle->_restore = _index;
#define ABSORBED (_particle->_absorbed)
#define mcget_run_num() _particle->_uid
#define ABSORB0 do { DEBUG_STATE(); DEBUG_ABSORB(); MAGNET_OFF; ABSORBED++; return(_comp); } while(0)
#define ABSORB ABSORB0
#pragma acc routine
_class_MCPL_input *class_MCPL_input_trace(_class_MCPL_input *_comp
  , _class_particle *_particle) {
  ABSORBED=SCATTERED=RESTORE=0;
  #define filename (_comp->_parameters.filename)
  #define polarisationuse (_comp->_parameters.polarisationuse)
  #define verbose (_comp->_parameters.verbose)
  #define Emin (_comp->_parameters.Emin)
  #define Emax (_comp->_parameters.Emax)
  #define repeat_count (_comp->_parameters.repeat_count)
  #define E_smear (_comp->_parameters.E_smear)
  #define pos_smear (_comp->_parameters.pos_smear)
  #define dir_smear (_comp->_parameters.dir_smear)
  #define preload (_comp->_parameters.preload)
  #define inputfile (_comp->_parameters.inputfile)
  #define nparticles (_comp->_parameters.nparticles)
  #define read_neutrons (_comp->_parameters.read_neutrons)
  #define used_neutrons (_comp->_parameters.used_neutrons)
  #define repeat_cnt (_comp->_parameters.repeat_cnt)
  #define repeat_tot (_comp->_parameters.repeat_tot)
  #define repeating (_comp->_parameters.repeating)
  #define ismpislave (_comp->_parameters.ismpislave)
  #define mpi_cnt (_comp->_parameters.mpi_cnt)
  #define X (_comp->_parameters.X)
  #define Y (_comp->_parameters.Y)
  #define Z (_comp->_parameters.Z)
  #define VX (_comp->_parameters.VX)
  #define VY (_comp->_parameters.VY)
  #define VZ (_comp->_parameters.VZ)
  #define SX (_comp->_parameters.SX)
  #define SY (_comp->_parameters.SY)
  #define SZ (_comp->_parameters.SZ)
  #define E (_comp->_parameters.E)
  #define T (_comp->_parameters.T)
  #define P (_comp->_parameters.P)
  SIG_MESSAGE("[_MCPL_source_trace] component MCPL_source=MCPL_input() TRACE [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//misc/MCPL_input.comp:223]");


  double nrm;
  long long ncount;
#ifndef OPENACC
  const mcpl_particle_t *particle;// = (mcpl_particle_t *) calloc(sizeof(mcpl_particle_t),1);
  if(!preload) {
    particle = mcpl_read(inputfile);

    ncount=mcget_ncount();
    if (!particle) {
      if(repeat_cnt>1) {
	/* Trigger rewind of the file and ABSORB to get the first neutron "again" */
	repeating++;
	mcpl_rewind(inputfile);
	particle = mcpl_read(inputfile);
#if defined (USE_MPI)   
	MPI_MASTER(
#endif
       printf("MCPL inputfile %s rewound %i time(s)\n",filename,repeating);
#if defined (USE_MPI) 
    );
#endif
      } else
	ABSORB;
    }
    if (particle->pdgcode!=2112) {
        /*Either no particle read, particle is not a neutron, or it has invalid energy - terminate to trigger next ray*/
       ABSORB;
    }
    read_neutrons++;

    /* check energy range*/
    if ( particle->ekin<Emin*1e-9 || particle->ekin>Emax*1e-9 ) {
        /*Particle energy out of range - terminate to trigger next ray*/
        ABSORB;
    }
    used_neutrons++;

#if defined (USE_MPI)   
  MPI_MASTER(
#endif

    if (verbose && used_neutrons<11) {
      printf("id=%ld pdg=2112\tekin=%g MeV\tx=%g cm\ty=%g cm\tz=%g cm\tux=%g\tuy=%g\tuz=%g\tt=%g ms\tweight=%g\tpolx=%g\tpoly=%g\tpolz=%g\n",
	     (long unsigned)read_neutrons, particle->ekin, particle->position[0], particle->position[1], particle->position[2],
	     particle->direction[0], particle->direction[1], particle->direction[2], particle->time, particle->weight,
	     particle->polarisation[0], particle->polarisation[1], particle->polarisation[2]);
    }

#if defined (USE_MPI)   
	    );
#endif    
  }
#endif
  ncount = mcget_ncount();
  //fprintf(stdout,"Trace ncount is %ld on %i\n",ncount,ismpislave);
  unsigned long long i=_particle->_uid;
  if (preload) {
    if (i>=used_neutrons) {
      repeating=1;
      i = i % used_neutrons;
    }
  }
  if (!preload) {
    /*positions are in cm*/
    #ifndef OPENACC
    x=particle->position[0]/100;
    y=particle->position[1]/100;
    z=particle->position[2]/100;
    #endif
  } else {
    x=X[i]/100;
    y=Y[i]/100;
    z=Z[i]/100;
  }
  if (ismpislave || repeating) {
    double tmpx,tmpy,tmpz;
    // Position-MC:
    randvec_target_circle(&tmpx, &tmpy, &tmpz, NULL, 0, 0, 1, 0);
    NORM(tmpx,tmpy,tmpz);
    tmpx *= pos_smear*rand01(); tmpy *= pos_smear*rand01(); tmpz *= pos_smear*rand01();
    x+=tmpx; y+=tmpy; z+=tmpz;
  }
    
  if(polarisationuse){
    if(!preload) {
      #ifndef OPENACC
      sx=particle->polarisation[0];
      sy=particle->polarisation[1];
      sz=particle->polarisation[2];
      #endif
    } else {
      sx=SX[i];
      sy=SY[i];
      sz=SZ[i];
    }
  } else {
    sx=sy=sz=0;
  }

  if (!preload) {
    #ifndef OPENACC
    nrm = particle->ekin *1e9/VS2E;
    #endif
  } else {
    nrm = E[i] *1e9/VS2E;
  }
  
  nrm = sqrt(nrm);
  if (ismpislave || repeating) {
    // Energy-MC:
    double tmp=(1.0+E_smear*randpm1());
    //printf("Adjusting energy from %g to",nrm);
    nrm *= (1+E_smear*randpm1());
    //printf(" to %g\n",nrm);
  }
  double d0,d1,d2;
  if (!preload) {
    #ifndef OPENACC
    d0=particle->direction[0];
    d1=particle->direction[1];
    d2=particle->direction[2];
    #endif
  } else {
    d0=VX[i];
    d1=VY[i];
    d2=VZ[i];
  }
  
  if (ismpislave || repeating) {
    // Direction-MC:
    double tmpx,tmpy,tmpz;
    // Position-MC:
    randvec_target_circle(&d0, &d1, &d2, NULL, d0, d1, d2, sin(dir_smear*DEG2RAD));
    NORM(d0,d1,d2);
  }
    
  vx=d0*nrm;
  vy=d1*nrm;
  vz=d2*nrm;   

  if (!preload) {
    #ifndef OPENACC
    /*time in ms:*/
    t=particle->time*1e-3;
    /*weight in unspecified units:*/
    p=particle->weight;
    #endif
  } else {
    t=T[i]*1e-3;
    p=P[i];
  }
  /* Correct for repetition, by repeat_count and/or MPI */
  p /= (repeat_tot);
  SCATTER;
#ifndef NOABSORB_INF_NAN
  /* Check for nan or inf particle parms */ 
  if(isnan(p)  ||  isinf(p)) ABSORB;
  if(isnan(t)  ||  isinf(t)) ABSORB;
  if(isnan(vx) || isinf(vx)) ABSORB;
  if(isnan(vy) || isinf(vy)) ABSORB;
  if(isnan(vz) || isinf(vz)) ABSORB;
  if(isnan(x)  ||  isinf(x)) ABSORB;
  if(isnan(y)  ||  isinf(y)) ABSORB;
  if(isnan(z)  ||  isinf(z)) ABSORB;
#else
  if(isnan(p)  ||  isinf(p)) printf("NAN or INF found in p,  %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(t)  ||  isinf(t)) printf("NAN or INF found in t,  %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(vx) || isinf(vx)) printf("NAN or INF found in vx, %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(vy) || isinf(vy)) printf("NAN or INF found in vy, %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(vz) || isinf(vz)) printf("NAN or INF found in vz, %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(x)  ||  isinf(x)) printf("NAN or INF found in x,  %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(y)  ||  isinf(y)) printf("NAN or INF found in y,  %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(z)  ||  isinf(z)) printf("NAN or INF found in z,  %s (particle %lld)\n",_comp->_name,_particle->_uid);
#endif
  #undef filename
  #undef polarisationuse
  #undef verbose
  #undef Emin
  #undef Emax
  #undef repeat_count
  #undef E_smear
  #undef pos_smear
  #undef dir_smear
  #undef preload
  #undef inputfile
  #undef nparticles
  #undef read_neutrons
  #undef used_neutrons
  #undef repeat_cnt
  #undef repeat_tot
  #undef repeating
  #undef ismpislave
  #undef mpi_cnt
  #undef X
  #undef Y
  #undef Z
  #undef VX
  #undef VY
  #undef VZ
  #undef SX
  #undef SY
  #undef SZ
  #undef E
  #undef T
  #undef P
  return(_comp);
} /* class_MCPL_input_trace */

#pragma acc routine
_class_L_monitor *class_L_monitor_trace(_class_L_monitor *_comp
  , _class_particle *_particle) {
  ABSORBED=SCATTERED=RESTORE=0;
  #define nL (_comp->_parameters.nL)
  #define filename (_comp->_parameters.filename)
  #define nowritefile (_comp->_parameters.nowritefile)
  #define xmin (_comp->_parameters.xmin)
  #define xmax (_comp->_parameters.xmax)
  #define ymin (_comp->_parameters.ymin)
  #define ymax (_comp->_parameters.ymax)
  #define xwidth (_comp->_parameters.xwidth)
  #define yheight (_comp->_parameters.yheight)
  #define Lmin (_comp->_parameters.Lmin)
  #define Lmax (_comp->_parameters.Lmax)
  #define restore_neutron (_comp->_parameters.restore_neutron)
  #define L_N (_comp->_parameters.L_N)
  #define L_p (_comp->_parameters.L_p)
  #define L_p2 (_comp->_parameters.L_p2)
  SIG_MESSAGE("[_collSpec_trace] component collSpec=L_monitor() TRACE [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//monitors/L_monitor.comp:94]");

  PROP_Z0;
  if (x>xmin && x<xmax && y>ymin && y<ymax)
  {
    double L = (2*PI/V2K)/sqrt(vx*vx + vy*vy + vz*vz);
    int i = floor((L-Lmin)*nL/(Lmax-Lmin));
    if(i >= 0 && i < nL)
    {
      double p2 = p*p;
      #pragma acc atomic
      L_N[i] = L_N[i] +1;
      #pragma acc atomic
      L_p[i] = L_p[i] + p;
      #pragma acc atomic
      L_p2[i] = L_p2[i] + p2;
      SCATTER;
    }
  }
  if (restore_neutron) {
    RESTORE_NEUTRON(INDEX_CURRENT_COMP, x, y, z, vx, vy, vz, t, sx, sy, sz, p);
  }
#ifndef NOABSORB_INF_NAN
  /* Check for nan or inf particle parms */ 
  if(isnan(p)  ||  isinf(p)) ABSORB;
  if(isnan(t)  ||  isinf(t)) ABSORB;
  if(isnan(vx) || isinf(vx)) ABSORB;
  if(isnan(vy) || isinf(vy)) ABSORB;
  if(isnan(vz) || isinf(vz)) ABSORB;
  if(isnan(x)  ||  isinf(x)) ABSORB;
  if(isnan(y)  ||  isinf(y)) ABSORB;
  if(isnan(z)  ||  isinf(z)) ABSORB;
#else
  if(isnan(p)  ||  isinf(p)) printf("NAN or INF found in p,  %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(t)  ||  isinf(t)) printf("NAN or INF found in t,  %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(vx) || isinf(vx)) printf("NAN or INF found in vx, %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(vy) || isinf(vy)) printf("NAN or INF found in vy, %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(vz) || isinf(vz)) printf("NAN or INF found in vz, %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(x)  ||  isinf(x)) printf("NAN or INF found in x,  %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(y)  ||  isinf(y)) printf("NAN or INF found in y,  %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(z)  ||  isinf(z)) printf("NAN or INF found in z,  %s (particle %lld)\n",_comp->_name,_particle->_uid);
#endif
  #undef nL
  #undef filename
  #undef nowritefile
  #undef xmin
  #undef xmax
  #undef ymin
  #undef ymax
  #undef xwidth
  #undef yheight
  #undef Lmin
  #undef Lmax
  #undef restore_neutron
  #undef L_N
  #undef L_p
  #undef L_p2
  return(_comp);
} /* class_L_monitor_trace */

#pragma acc routine
_class_PSD_monitor *class_PSD_monitor_trace(_class_PSD_monitor *_comp
  , _class_particle *_particle) {
  ABSORBED=SCATTERED=RESTORE=0;
  #define nx (_comp->_parameters.nx)
  #define ny (_comp->_parameters.ny)
  #define filename (_comp->_parameters.filename)
  #define xmin (_comp->_parameters.xmin)
  #define xmax (_comp->_parameters.xmax)
  #define ymin (_comp->_parameters.ymin)
  #define ymax (_comp->_parameters.ymax)
  #define xwidth (_comp->_parameters.xwidth)
  #define yheight (_comp->_parameters.yheight)
  #define restore_neutron (_comp->_parameters.restore_neutron)
  #define nowritefile (_comp->_parameters.nowritefile)
  #define PSD_N (_comp->_parameters.PSD_N)
  #define PSD_p (_comp->_parameters.PSD_p)
  #define PSD_p2 (_comp->_parameters.PSD_p2)
  SIG_MESSAGE("[_psd_pre_mirror_trace] component psd_pre_mirror=PSD_monitor() TRACE [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//monitors/PSD_monitor.comp:82]");

  PROP_Z0;
  if (x>xmin && x<xmax && y>ymin && y<ymax){
    int i = floor((x - xmin)*nx/(xmax - xmin));
    int j = floor((y - ymin)*ny/(ymax - ymin));

    double p2 = p*p;
    #pragma acc atomic
    PSD_N[i][j] = PSD_N[i][j]+1;

    #pragma acc atomic
    PSD_p[i][j] = PSD_p[i][j]+p;
    
    #pragma acc atomic
    PSD_p2[i][j] = PSD_p2[i][j] + p2;
    
    SCATTER;
  }
  if (restore_neutron) {
    RESTORE_NEUTRON(INDEX_CURRENT_COMP, x, y, z, vx, vy, vz, t, sx, sy, sz, p);
  }
#ifndef NOABSORB_INF_NAN
  /* Check for nan or inf particle parms */ 
  if(isnan(p)  ||  isinf(p)) ABSORB;
  if(isnan(t)  ||  isinf(t)) ABSORB;
  if(isnan(vx) || isinf(vx)) ABSORB;
  if(isnan(vy) || isinf(vy)) ABSORB;
  if(isnan(vz) || isinf(vz)) ABSORB;
  if(isnan(x)  ||  isinf(x)) ABSORB;
  if(isnan(y)  ||  isinf(y)) ABSORB;
  if(isnan(z)  ||  isinf(z)) ABSORB;
#else
  if(isnan(p)  ||  isinf(p)) printf("NAN or INF found in p,  %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(t)  ||  isinf(t)) printf("NAN or INF found in t,  %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(vx) || isinf(vx)) printf("NAN or INF found in vx, %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(vy) || isinf(vy)) printf("NAN or INF found in vy, %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(vz) || isinf(vz)) printf("NAN or INF found in vz, %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(x)  ||  isinf(x)) printf("NAN or INF found in x,  %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(y)  ||  isinf(y)) printf("NAN or INF found in y,  %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(z)  ||  isinf(z)) printf("NAN or INF found in z,  %s (particle %lld)\n",_comp->_name,_particle->_uid);
#endif
  #undef nx
  #undef ny
  #undef filename
  #undef xmin
  #undef xmax
  #undef ymin
  #undef ymax
  #undef xwidth
  #undef yheight
  #undef restore_neutron
  #undef nowritefile
  #undef PSD_N
  #undef PSD_p
  #undef PSD_p2
  return(_comp);
} /* class_PSD_monitor_trace */

#pragma acc routine
_class_Mirror_Parabolic *class_Mirror_Parabolic_trace(_class_Mirror_Parabolic *_comp
  , _class_particle *_particle) {
  ABSORBED=SCATTERED=RESTORE=0;
  #define reflect (_comp->_parameters.reflect)
  #define xwidth (_comp->_parameters.xwidth)
  #define xshift (_comp->_parameters.xshift)
  #define yheight (_comp->_parameters.yheight)
  #define focus (_comp->_parameters.focus)
  #define R0 (_comp->_parameters.R0)
  #define Qc (_comp->_parameters.Qc)
  #define alpha (_comp->_parameters.alpha)
  #define m (_comp->_parameters.m)
  #define W (_comp->_parameters.W)
  #define beta1 (_comp->_parameters.beta1)
  #define gamma1 (_comp->_parameters.gamma1)
  #define pTable (_comp->_parameters.pTable)
  #define err (_comp->_parameters.err)
  #define nom (_comp->_parameters.nom)
  #define vz_neg (_comp->_parameters.vz_neg)
  SIG_MESSAGE("[_focus_Mirr_5_trace] component focus_Mirr_5=Mirror_Parabolic() TRACE [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//contrib/Mirror_Parabolic.comp:83]");

  double  angle;
  double q, B;
  double div,z1,x1,z2,x2;
  double v;
  double vx_2,vz_2;
  int i=-1;
  double oa,ob,ab,xa,za;
  double a, b;                       /* parameters for neutron propagation */
  double old_x,old_y,old_z;
  double  delta;                         /* angle: angle between themirror and z-axis */
  double par[5] = {R0, Qc, alpha, m, W};

  /* First check if neutron has the right direction. */
  if((vz != 0.0 && -z/vz >= 0) && x-xwidth-xshift < 0)
  {
    do{
      i++;
      old_z=z;
      old_x=x;
      old_y=y;
      a=vz/vx;
      b=z-a*x;

      /*calculation of intersection with the parabola*/
      delta = sqrt(4*gamma1*(b-beta1)+a*a);
      x1 = (a - delta)/(2*gamma1);
      x2 = (a + delta)/(2*gamma1);
      z1 = gamma1*x1*x1+beta1;
      z2 = gamma1*x2*x2+beta1;

      /*choose the correct answer*/
      if(z1>z2){
          z=z1;
          x=x1;
      }
      else{
          z=z2;
          x=x2;
      }
      /* absorbs the neutron if the difference between the 2 calculation methods is larger than 1% */
      if(fabs(z-a*x-b)>0.01){
	    #pragma acc atomic
            err = err +1;
            ABSORB;
      }
        
        
      /* calculation of y*/
      y+=vy*(z-old_z)/vz;

      /*reflection*/
      if((x-xshift)>0 && fabs(y)<=yheight){
	#pragma acc atomic
        nom = nom + 1;

        /* reflection angle in the xz plane */
        div = -atan(vx/vz);
        angle = atan(1/(2*gamma1*x));

        /* vx and vz calculation after reflection */
        v=sqrt(vx*vx+vz*vz);
        vz = v*cos(2*angle+div);
        vx = v*sin(2*angle+div);

        /*incidence angle in 3D*/
        ob = sqrt((old_x-x)*(old_x-x)+(old_z-z)*(old_z-z));
        ab = ob*cos(-div+angle);
        /*           printf("%e = %e * cos(%e)",ab,ob,div+angle); */
        xa = x+ab*sin(-angle);
        za = z+ab*cos(-angle);
        oa = sqrt((old_x-xa)*(old_x-xa)+(old_z-za)*(old_z-za));
        ob = sqrt((old_x-x)*(old_x-x)+(old_y-y)*(old_y-y)+(old_z-z)*(old_z-z));
        /*         printf("\nob : %e / ab : %e\nO: %e / %f / %f\nA : %e / %f / %f\nB : %e / %f / %f\nAngle : %e rad / Div : %e rad\n",ob,ab,old_x,old_y,old_z,xa,old_y,za,x,y,z,angle,div); */

        ab = sqrt((xa-x)*(xa-x)+(old_y-y)*(old_y-y)+(za-z)*(za-z));
        angle = acos((-ab*ab-ob*ob+oa*oa)/(2*ab*ob));

        v=sqrt(vx*vx+vy*vy+vz*vz);
        q = fabs(2*sin(angle)*v*V2Q);
        /* Reflectivity (see component Guide). */
        if (reflect && strlen(reflect) && strcmp(reflect, "NULL") && strcmp(reflect,"0"))
          TableReflecFunc(q, &pTable, &B);
        else {
          StdReflecFunc(q, par, &B);
        }
        if (B <= 0) { ABSORB; }
        else p *= B;
      }
      if(vz<0){
           #pragma acc atomic
	   vz_neg = vz_neg + 1;
           ABSORB;
      }
    }while((x-xshift)>0 && fabs(y)<=yheight);
    if (i<0) fprintf(stderr,"Mirror_Parabolic: %s: out mirror\n", NAME_CURRENT_COMP);
    y=old_y;
    x=old_x;
    z=old_z;    
    SCATTER;
  }
  else{
    ABSORB;
  }
#ifndef NOABSORB_INF_NAN
  /* Check for nan or inf particle parms */ 
  if(isnan(p)  ||  isinf(p)) ABSORB;
  if(isnan(t)  ||  isinf(t)) ABSORB;
  if(isnan(vx) || isinf(vx)) ABSORB;
  if(isnan(vy) || isinf(vy)) ABSORB;
  if(isnan(vz) || isinf(vz)) ABSORB;
  if(isnan(x)  ||  isinf(x)) ABSORB;
  if(isnan(y)  ||  isinf(y)) ABSORB;
  if(isnan(z)  ||  isinf(z)) ABSORB;
#else
  if(isnan(p)  ||  isinf(p)) printf("NAN or INF found in p,  %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(t)  ||  isinf(t)) printf("NAN or INF found in t,  %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(vx) || isinf(vx)) printf("NAN or INF found in vx, %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(vy) || isinf(vy)) printf("NAN or INF found in vy, %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(vz) || isinf(vz)) printf("NAN or INF found in vz, %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(x)  ||  isinf(x)) printf("NAN or INF found in x,  %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(y)  ||  isinf(y)) printf("NAN or INF found in y,  %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(z)  ||  isinf(z)) printf("NAN or INF found in z,  %s (particle %lld)\n",_comp->_name,_particle->_uid);
#endif

if (_comp->_index == 5) { // EXTEND 'focus_Mirr_5'
     if (SCATTERED) printf("I scatter"); else printf("I do not scatter");
}

  #undef reflect
  #undef xwidth
  #undef xshift
  #undef yheight
  #undef focus
  #undef R0
  #undef Qc
  #undef alpha
  #undef m
  #undef W
  #undef beta1
  #undef gamma1
  #undef pTable
  #undef err
  #undef nom
  #undef vz_neg
  return(_comp);
} /* class_Mirror_Parabolic_trace */

#pragma acc routine
_class_Divergence_monitor *class_Divergence_monitor_trace(_class_Divergence_monitor *_comp
  , _class_particle *_particle) {
  ABSORBED=SCATTERED=RESTORE=0;
  #define nh (_comp->_parameters.nh)
  #define nv (_comp->_parameters.nv)
  #define filename (_comp->_parameters.filename)
  #define xmin (_comp->_parameters.xmin)
  #define xmax (_comp->_parameters.xmax)
  #define ymin (_comp->_parameters.ymin)
  #define ymax (_comp->_parameters.ymax)
  #define nowritefile (_comp->_parameters.nowritefile)
  #define xwidth (_comp->_parameters.xwidth)
  #define yheight (_comp->_parameters.yheight)
  #define maxdiv_h (_comp->_parameters.maxdiv_h)
  #define maxdiv_v (_comp->_parameters.maxdiv_v)
  #define restore_neutron (_comp->_parameters.restore_neutron)
  #define nx (_comp->_parameters.nx)
  #define ny (_comp->_parameters.ny)
  #define nz (_comp->_parameters.nz)
  #define Div_N (_comp->_parameters.Div_N)
  #define Div_p (_comp->_parameters.Div_p)
  #define Div_p2 (_comp->_parameters.Div_p2)
  SIG_MESSAGE("[_Div_sample_trace] component Div_sample=Divergence_monitor() TRACE [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//monitors/Divergence_monitor.comp:103]");

  int i,j;
  double h_div, v_div;
  double v, vn;

  PROP_Z0;
  if (x>xmin && x<xmax && y>ymin && y<ymax)
  {
    /* Find length of projection onto the [nx ny nz] axis */
    vn = scalar_prod(vx, vy, vz, nx, ny, nz);
    h_div = RAD2DEG*atan2(vx,vn);
    v_div = RAD2DEG*atan2(vy,vn);
    if (h_div < maxdiv_h && h_div > -maxdiv_h &&
        v_div < maxdiv_v && v_div > -maxdiv_v)
    {
      i = floor((h_div + maxdiv_h)*nh/(2.0*maxdiv_h));
      j = floor((v_div + maxdiv_v)*nv/(2.0*maxdiv_v));
      double p2 = p*p;
      #pragma acc atomic
      Div_N[i][j] = Div_N[i][j] + 1;
      #pragma acc atomic
      Div_p[i][j] = Div_p[i][j] + p;
      #pragma acc atomic
      Div_p2[i][j] = Div_p2[i][j] + p2;
      SCATTER;
    }
  }
  if (restore_neutron) {
    RESTORE_NEUTRON(INDEX_CURRENT_COMP, x, y, z, vx, vy, vz, t, sx, sy, sz, p);
  }
#ifndef NOABSORB_INF_NAN
  /* Check for nan or inf particle parms */ 
  if(isnan(p)  ||  isinf(p)) ABSORB;
  if(isnan(t)  ||  isinf(t)) ABSORB;
  if(isnan(vx) || isinf(vx)) ABSORB;
  if(isnan(vy) || isinf(vy)) ABSORB;
  if(isnan(vz) || isinf(vz)) ABSORB;
  if(isnan(x)  ||  isinf(x)) ABSORB;
  if(isnan(y)  ||  isinf(y)) ABSORB;
  if(isnan(z)  ||  isinf(z)) ABSORB;
#else
  if(isnan(p)  ||  isinf(p)) printf("NAN or INF found in p,  %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(t)  ||  isinf(t)) printf("NAN or INF found in t,  %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(vx) || isinf(vx)) printf("NAN or INF found in vx, %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(vy) || isinf(vy)) printf("NAN or INF found in vy, %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(vz) || isinf(vz)) printf("NAN or INF found in vz, %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(x)  ||  isinf(x)) printf("NAN or INF found in x,  %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(y)  ||  isinf(y)) printf("NAN or INF found in y,  %s (particle %lld)\n",_comp->_name,_particle->_uid);
  if(isnan(z)  ||  isinf(z)) printf("NAN or INF found in z,  %s (particle %lld)\n",_comp->_name,_particle->_uid);
#endif
  #undef nh
  #undef nv
  #undef filename
  #undef xmin
  #undef xmax
  #undef ymin
  #undef ymax
  #undef nowritefile
  #undef xwidth
  #undef yheight
  #undef maxdiv_h
  #undef maxdiv_v
  #undef restore_neutron
  #undef nx
  #undef ny
  #undef nz
  #undef Div_N
  #undef Div_p
  #undef Div_p2
  return(_comp);
} /* class_Divergence_monitor_trace */

/* *****************************************************************************
* instrument 'SKADI' TRACE
***************************************************************************** */

#ifndef FUNNEL
#pragma acc routine
int raytrace(_class_particle* _particle) { /* single event propagation, called by mccode_main for SKADI:TRACE */

  /* init variables and counters for TRACE */
  #undef ABSORB0
  #undef ABSORB
  #define ABSORB0 do { DEBUG_ABSORB(); MAGNET_OFF; ABSORBED++; return(ABSORBED);} while(0)
  #define ABSORB ABSORB0
  DEBUG_ENTER();
  DEBUG_STATE();
  _particle->flag_nocoordschange=0; /* Init */
  _class_particle _particle_save;
  /* the main iteration loop for one incoming event */
  while (!ABSORBED) { /* iterate event until absorbed */
    /* send particle event to component instance, one after the other */
    /* begin component MCPL_source=MCPL_input() [1] */
    if (!_particle->flag_nocoordschange) { // flag activated by JUMP to pass coords change
      if (_MCPL_source_var._rotation_is_identity) {
        if(!_MCPL_source_var._position_relative_is_zero) {
          coords_get(coords_add(coords_set(x,y,z), _MCPL_source_var._position_relative),&x, &y, &z);
        }
      } else {
          mccoordschange(_MCPL_source_var._position_relative, _MCPL_source_var._rotation_relative, _particle);
      }
    }
    if (!ABSORBED && _particle->_index == 1) {
      _particle->flag_nocoordschange=0; /* Reset if we came here from a JUMP */
      _particle_save = *_particle;
      DEBUG_COMP(_MCPL_source_var._name);
      DEBUG_STATE();
      class_MCPL_input_trace(&_MCPL_source_var, _particle);
      if (_particle->_restore)
        particle_restore(_particle, &_particle_save);
      _particle->_index++;
      if (!ABSORBED) { DEBUG_STATE(); }
    } /* end component MCPL_source [1] */
    /* begin component collSpec=L_monitor() [2] */
    if (!_particle->flag_nocoordschange) { // flag activated by JUMP to pass coords change
      if (_collSpec_var._rotation_is_identity) {
        if(!_collSpec_var._position_relative_is_zero) {
          coords_get(coords_add(coords_set(x,y,z), _collSpec_var._position_relative),&x, &y, &z);
        }
      } else {
          mccoordschange(_collSpec_var._position_relative, _collSpec_var._rotation_relative, _particle);
      }
    }
    if (!ABSORBED && _particle->_index == 2) {
      _particle->flag_nocoordschange=0; /* Reset if we came here from a JUMP */
      _particle_save = *_particle;
      DEBUG_COMP(_collSpec_var._name);
      DEBUG_STATE();
      class_L_monitor_trace(&_collSpec_var, _particle);
      if (_particle->_restore)
        particle_restore(_particle, &_particle_save);
      _particle->_index++;
      if (!ABSORBED) { DEBUG_STATE(); }
    } /* end component collSpec [2] */
    /* begin component psd_pre_mirror=PSD_monitor() [3] */
    if (!_particle->flag_nocoordschange) { // flag activated by JUMP to pass coords change
      if (_psd_pre_mirror_var._rotation_is_identity) {
        if(!_psd_pre_mirror_var._position_relative_is_zero) {
          coords_get(coords_add(coords_set(x,y,z), _psd_pre_mirror_var._position_relative),&x, &y, &z);
        }
      } else {
          mccoordschange(_psd_pre_mirror_var._position_relative, _psd_pre_mirror_var._rotation_relative, _particle);
      }
    }
    if (!ABSORBED && _particle->_index == 3) {
      _particle->flag_nocoordschange=0; /* Reset if we came here from a JUMP */
      _particle_save = *_particle;
      DEBUG_COMP(_psd_pre_mirror_var._name);
      DEBUG_STATE();
      class_PSD_monitor_trace(&_psd_pre_mirror_var, _particle);
      if (_particle->_restore)
        particle_restore(_particle, &_particle_save);
      _particle->_index++;
      if (!ABSORBED) { DEBUG_STATE(); }
    } /* end component psd_pre_mirror [3] */
    /* begin component PortGisans=Arm() [4] */
    if (!ABSORBED && _particle->_index == 4) {
      _particle->flag_nocoordschange=0; /* Reset if we came here from a JUMP */
      _particle->_index++;
    } /* end component PortGisans [4] */
    /* begin component focus_Mirr_5=Mirror_Parabolic() [5] */
    if (!_particle->flag_nocoordschange) { // flag activated by JUMP to pass coords change
      if (_focus_Mirr_5_var._rotation_is_identity) {
        if(!_focus_Mirr_5_var._position_relative_is_zero) {
          coords_get(coords_add(coords_set(x,y,z), _focus_Mirr_5_var._position_relative),&x, &y, &z);
        }
      } else {
          mccoordschange(_focus_Mirr_5_var._position_relative, _focus_Mirr_5_var._rotation_relative, _particle);
      }
    }
    if (!ABSORBED && _particle->_index == 5) {
      _particle->flag_nocoordschange=0; /* Reset if we came here from a JUMP */
      _particle_save = *_particle;
      DEBUG_COMP(_focus_Mirr_5_var._name);
      DEBUG_STATE();
      class_Mirror_Parabolic_trace(&_focus_Mirr_5_var, _particle); /* contains EXTEND code */
      if (_particle->_restore)
        particle_restore(_particle, &_particle_save);
      // GROUP mirrorstack: from focus_Mirr_5 [5] to focus_Mirr [9]
      if (SCATTERED) _particle->_index = 9; // when SCATTERED in GROUP: reach exit of GROUP after focus_Mirr
      else particle_restore(_particle, &_particle_save); // not SCATTERED in GROUP, restore
      _particle->_index++;
      if (!ABSORBED) { DEBUG_STATE(); }
    } /* end component focus_Mirr_5 [5] */
    /* begin component focus_Mirr_4=Mirror_Parabolic() [6] */
    if (!_particle->flag_nocoordschange) { // flag activated by JUMP to pass coords change
      if (_focus_Mirr_4_var._rotation_is_identity) {
        if(!_focus_Mirr_4_var._position_relative_is_zero) {
          coords_get(coords_add(coords_set(x,y,z), _focus_Mirr_4_var._position_relative),&x, &y, &z);
        }
      } else {
          mccoordschange(_focus_Mirr_4_var._position_relative, _focus_Mirr_4_var._rotation_relative, _particle);
      }
    }
    if (!ABSORBED && _particle->_index == 6) {
      _particle->flag_nocoordschange=0; /* Reset if we came here from a JUMP */
      // 2nd or higher GROUP member, "reuse" coordinate-changed _particle_save from 1st GROUP element.
      mccoordschange(_focus_Mirr_4_var._position_relative, _focus_Mirr_4_var._rotation_relative, &_particle_save);
      DEBUG_COMP(_focus_Mirr_4_var._name);
      DEBUG_STATE();
      class_Mirror_Parabolic_trace(&_focus_Mirr_4_var, _particle);
      if (_particle->_restore)
        particle_restore(_particle, &_particle_save);
      // GROUP mirrorstack: from focus_Mirr_5 [5] to focus_Mirr [9]
      if (SCATTERED) _particle->_index = 9; // when SCATTERED in GROUP: reach exit of GROUP after focus_Mirr
      else particle_restore(_particle, &_particle_save); // not SCATTERED in GROUP, restore
      _particle->_index++;
      if (!ABSORBED) { DEBUG_STATE(); }
    } /* end component focus_Mirr_4 [6] */
    /* begin component focus_Mirr_3=Mirror_Parabolic() [7] */
    if (!_particle->flag_nocoordschange) { // flag activated by JUMP to pass coords change
      if (_focus_Mirr_3_var._rotation_is_identity) {
        if(!_focus_Mirr_3_var._position_relative_is_zero) {
          coords_get(coords_add(coords_set(x,y,z), _focus_Mirr_3_var._position_relative),&x, &y, &z);
        }
      } else {
          mccoordschange(_focus_Mirr_3_var._position_relative, _focus_Mirr_3_var._rotation_relative, _particle);
      }
    }
    if (!ABSORBED && _particle->_index == 7) {
      _particle->flag_nocoordschange=0; /* Reset if we came here from a JUMP */
      // 2nd or higher GROUP member, "reuse" coordinate-changed _particle_save from 1st GROUP element.
      mccoordschange(_focus_Mirr_3_var._position_relative, _focus_Mirr_3_var._rotation_relative, &_particle_save);
      DEBUG_COMP(_focus_Mirr_3_var._name);
      DEBUG_STATE();
      class_Mirror_Parabolic_trace(&_focus_Mirr_3_var, _particle);
      if (_particle->_restore)
        particle_restore(_particle, &_particle_save);
      // GROUP mirrorstack: from focus_Mirr_5 [5] to focus_Mirr [9]
      if (SCATTERED) _particle->_index = 9; // when SCATTERED in GROUP: reach exit of GROUP after focus_Mirr
      else particle_restore(_particle, &_particle_save); // not SCATTERED in GROUP, restore
      _particle->_index++;
      if (!ABSORBED) { DEBUG_STATE(); }
    } /* end component focus_Mirr_3 [7] */
    /* begin component focus_Mirr_2=Mirror_Parabolic() [8] */
    if (!_particle->flag_nocoordschange) { // flag activated by JUMP to pass coords change
      if (_focus_Mirr_2_var._rotation_is_identity) {
        if(!_focus_Mirr_2_var._position_relative_is_zero) {
          coords_get(coords_add(coords_set(x,y,z), _focus_Mirr_2_var._position_relative),&x, &y, &z);
        }
      } else {
          mccoordschange(_focus_Mirr_2_var._position_relative, _focus_Mirr_2_var._rotation_relative, _particle);
      }
    }
    if (!ABSORBED && _particle->_index == 8) {
      _particle->flag_nocoordschange=0; /* Reset if we came here from a JUMP */
      // 2nd or higher GROUP member, "reuse" coordinate-changed _particle_save from 1st GROUP element.
      mccoordschange(_focus_Mirr_2_var._position_relative, _focus_Mirr_2_var._rotation_relative, &_particle_save);
      DEBUG_COMP(_focus_Mirr_2_var._name);
      DEBUG_STATE();
      class_Mirror_Parabolic_trace(&_focus_Mirr_2_var, _particle);
      if (_particle->_restore)
        particle_restore(_particle, &_particle_save);
      // GROUP mirrorstack: from focus_Mirr_5 [5] to focus_Mirr [9]
      if (SCATTERED) _particle->_index = 9; // when SCATTERED in GROUP: reach exit of GROUP after focus_Mirr
      else particle_restore(_particle, &_particle_save); // not SCATTERED in GROUP, restore
      _particle->_index++;
      if (!ABSORBED) { DEBUG_STATE(); }
    } /* end component focus_Mirr_2 [8] */
    /* begin component focus_Mirr=Mirror_Parabolic() [9] */
    if (!_particle->flag_nocoordschange) { // flag activated by JUMP to pass coords change
      if (_focus_Mirr_var._rotation_is_identity) {
        if(!_focus_Mirr_var._position_relative_is_zero) {
          coords_get(coords_add(coords_set(x,y,z), _focus_Mirr_var._position_relative),&x, &y, &z);
        }
      } else {
          mccoordschange(_focus_Mirr_var._position_relative, _focus_Mirr_var._rotation_relative, _particle);
      }
    }
    if (!ABSORBED && _particle->_index == 9) {
      _particle->flag_nocoordschange=0; /* Reset if we came here from a JUMP */
      // 2nd or higher GROUP member, "reuse" coordinate-changed _particle_save from 1st GROUP element.
      mccoordschange(_focus_Mirr_var._position_relative, _focus_Mirr_var._rotation_relative, &_particle_save);
      DEBUG_COMP(_focus_Mirr_var._name);
      DEBUG_STATE();
      class_Mirror_Parabolic_trace(&_focus_Mirr_var, _particle);
      if (_particle->_restore)
        particle_restore(_particle, &_particle_save);
      // GROUP mirrorstack: from focus_Mirr_5 [5] to focus_Mirr [9]
      if (SCATTERED) _particle->_index = 9; // when SCATTERED in GROUP: reach exit of GROUP after focus_Mirr
      else ABSORB;     // not SCATTERED at end of GROUP: removes left events
      _particle->_index++;
      if (!ABSORBED) { DEBUG_STATE(); }
    } /* end component focus_Mirr [9] */
    /* begin component psd_pre_sample=PSD_monitor() [10] */
    if (!_particle->flag_nocoordschange) { // flag activated by JUMP to pass coords change
      if (_psd_pre_sample_var._rotation_is_identity) {
        if(!_psd_pre_sample_var._position_relative_is_zero) {
          coords_get(coords_add(coords_set(x,y,z), _psd_pre_sample_var._position_relative),&x, &y, &z);
        }
      } else {
          mccoordschange(_psd_pre_sample_var._position_relative, _psd_pre_sample_var._rotation_relative, _particle);
      }
    }
    if (!ABSORBED && _particle->_index == 10) {
      _particle->flag_nocoordschange=0; /* Reset if we came here from a JUMP */
      _particle_save = *_particle;
      DEBUG_COMP(_psd_pre_sample_var._name);
      DEBUG_STATE();
      class_PSD_monitor_trace(&_psd_pre_sample_var, _particle);
      if (_particle->_restore)
        particle_restore(_particle, &_particle_save);
      _particle->_index++;
      if (!ABSORBED) { DEBUG_STATE(); }
    } /* end component psd_pre_sample [10] */
    /* begin component collSpec_pre_sample=L_monitor() [11] */
    if (!_particle->flag_nocoordschange) { // flag activated by JUMP to pass coords change
      if (_collSpec_pre_sample_var._rotation_is_identity) {
        if(!_collSpec_pre_sample_var._position_relative_is_zero) {
          coords_get(coords_add(coords_set(x,y,z), _collSpec_pre_sample_var._position_relative),&x, &y, &z);
        }
      } else {
          mccoordschange(_collSpec_pre_sample_var._position_relative, _collSpec_pre_sample_var._rotation_relative, _particle);
      }
    }
    if (!ABSORBED && _particle->_index == 11) {
      _particle->flag_nocoordschange=0; /* Reset if we came here from a JUMP */
      _particle_save = *_particle;
      DEBUG_COMP(_collSpec_pre_sample_var._name);
      DEBUG_STATE();
      class_L_monitor_trace(&_collSpec_pre_sample_var, _particle);
      if (_particle->_restore)
        particle_restore(_particle, &_particle_save);
      _particle->_index++;
      if (!ABSORBED) { DEBUG_STATE(); }
    } /* end component collSpec_pre_sample [11] */
    /* begin component Div_sample=Divergence_monitor() [12] */
    if (!_particle->flag_nocoordschange) { // flag activated by JUMP to pass coords change
      if (_Div_sample_var._rotation_is_identity) {
        if(!_Div_sample_var._position_relative_is_zero) {
          coords_get(coords_add(coords_set(x,y,z), _Div_sample_var._position_relative),&x, &y, &z);
        }
      } else {
          mccoordschange(_Div_sample_var._position_relative, _Div_sample_var._rotation_relative, _particle);
      }
    }
    if (!ABSORBED && _particle->_index == 12) {
      _particle->flag_nocoordschange=0; /* Reset if we came here from a JUMP */
      _particle_save = *_particle;
      DEBUG_COMP(_Div_sample_var._name);
      DEBUG_STATE();
      class_Divergence_monitor_trace(&_Div_sample_var, _particle);
      if (_particle->_restore)
        particle_restore(_particle, &_particle_save);
      _particle->_index++;
      if (!ABSORBED) { DEBUG_STATE(); }
    } /* end component Div_sample [12] */
    /* begin component psd_sample=PSD_monitor() [13] */
    if (!_particle->flag_nocoordschange) { // flag activated by JUMP to pass coords change
      if (_psd_sample_var._rotation_is_identity) {
        if(!_psd_sample_var._position_relative_is_zero) {
          coords_get(coords_add(coords_set(x,y,z), _psd_sample_var._position_relative),&x, &y, &z);
        }
      } else {
          mccoordschange(_psd_sample_var._position_relative, _psd_sample_var._rotation_relative, _particle);
      }
    }
    if (!ABSORBED && _particle->_index == 13) {
      _particle->flag_nocoordschange=0; /* Reset if we came here from a JUMP */
      _particle_save = *_particle;
      DEBUG_COMP(_psd_sample_var._name);
      DEBUG_STATE();
      class_PSD_monitor_trace(&_psd_sample_var, _particle);
      if (_particle->_restore)
        particle_restore(_particle, &_particle_save);
      _particle->_index++;
      if (!ABSORBED) { DEBUG_STATE(); }
    } /* end component psd_sample [13] */
    if (_particle->_index > 13)
      ABSORBED++; /* absorbed when passed all components */
  } /* while !ABSORBED */

  DEBUG_LEAVE()
  particle_restore(_particle, &_particle_save);
  DEBUG_STATE()

  return(_particle->_index);
} /* raytrace */

/* loop to generate events and call raytrace() propagate them */
void raytrace_all(unsigned long long ncount, unsigned long seed) {

  /* CPU-loop */
  unsigned long long loops;
  loops = ceil((double)ncount/gpu_innerloop);
  /* if on GPU, printf has been globally nullified, re-enable here */
  #ifdef OPENACC
  #ifndef MULTICORE
  #undef printf
  #endif
  #endif

  #ifdef OPENACC
  if (ncount>gpu_innerloop) {
    printf("Defining %llu CPU loops around GPU kernel and adjusting ncount\n",loops);
    mcset_ncount(loops*gpu_innerloop);
  } else {
    #endif
    loops=1;
    gpu_innerloop = ncount;
    #ifdef OPENACC
  }
    #endif

  for (unsigned long long cloop=0; cloop<loops; cloop++) {
    #ifdef OPENACC
    if (loops>1) fprintf(stdout, "%d..", (int)cloop); fflush(stdout);
    #endif

    /* if on GPU, re-nullify printf */
    #ifdef OPENACC
    #ifndef MULTICORE
    #define printf(...) noprintf()
    #endif
    #endif

    #pragma acc parallel loop num_gangs(numgangs) vector_length(vecsize)
    for (unsigned long pidx=0 ; pidx < gpu_innerloop ; pidx++) {
      _class_particle particleN = mcgenstate(); // initial particle
      _class_particle* _particle = &particleN;
      particleN._uid = pidx;

      srandom(_hash((pidx+1)*(seed+1)));
      particle_uservar_init(_particle);

      raytrace(_particle);
    } /* inner for */
    seed = seed+gpu_innerloop;
    mcncount += gpu_innerloop;
  } /* CPU for */
  /* if on GPU, printf has been globally nullified, re-enable here */
  #ifdef OPENACC
  #ifndef MULTICORE
  #undef printf
  #endif
  #endif
  MPI_MASTER(
  printf("*** TRACE end *** \n");
  );
} /* raytrace_all */

#endif //no-FUNNEL

#ifdef FUNNEL
// Alternative raytrace algorithm which iterates all particles through
// one component at the time, can remove absorbs from the next loop and
// switch between cpu/gpu.
void raytrace_all_funnel(unsigned long long ncount, unsigned long seed) {

  // set up outer (CPU) loop / particle batches
  unsigned long long loops;

  /* if on GPU, printf has been globally nullified, re-enable here */
  #ifdef OPENACC
  #ifndef MULTICORE
  #undef printf
  #endif
  #endif

  #ifdef OPENACC
  loops = ceil((double)ncount/gpu_innerloop);
  if (ncount>gpu_innerloop) {
    printf("Defining %llu CPU loops around kernel and adjusting ncount\n",loops);
    mcset_ncount(loops*gpu_innerloop);
  } else {
  #endif
    loops=1;
    gpu_innerloop = ncount;
  #ifdef OPENACC
  }
  #endif

  // create particles struct and pointer arrays (same memory used by all batches)
  _class_particle* particles = malloc(gpu_innerloop*sizeof(_class_particle));
  _class_particle* pbuffer = malloc(gpu_innerloop*sizeof(_class_particle));
  long livebatchsize = gpu_innerloop;

  #undef ABSORB0
  #undef ABSORB
  #define ABSORB0 do { DEBUG_ABSORB(); MAGNET_OFF; ABSORBED++; } while(0)
  #define ABSORB ABSORB0
  // outer loop / particle batches
  for (unsigned long long cloop=0; cloop<loops; cloop++) {
    if (loops>1) fprintf(stdout, "%d..", (int)cloop); fflush(stdout);

    // init particles
    #pragma acc parallel loop present(particles)
    for (unsigned long pidx=0 ; pidx < livebatchsize ; pidx++) {
      // generate particle state, set loop index and seed
      particles[pidx] = mcgenstate();
      _class_particle* _particle = particles + pidx;
      _particle->_uid = pidx;
      srandom(_hash((pidx+1)*(seed+1))); // _particle->state usage built into srandom macro
      particle_uservar_init(_particle);
    }

    // iterate components

    #pragma acc parallel loop present(particles)
    for (unsigned long pidx=0 ; pidx < livebatchsize ; pidx++) {
      _class_particle* _particle = &particles[pidx];
      _class_particle _particle_save;

      // MCPL_source
    if (!ABSORBED && _particle->_index == 1) {
        if (_MCPL_source_var._rotation_is_identity)
          coords_get(coords_add(coords_set(x,y,z), _MCPL_source_var._position_relative),&x, &y, &z);
        else
          mccoordschange(_MCPL_source_var._position_relative, _MCPL_source_var._rotation_relative, _particle);
        _particle_save = *_particle;
        class_MCPL_input_trace(&_MCPL_source_var, _particle);
        if (_particle->_restore)
        particle_restore(_particle, &_particle_save);
        _particle->_index++;
      }

      // collSpec
    if (!ABSORBED && _particle->_index == 2) {
        if (_collSpec_var._rotation_is_identity)
          coords_get(coords_add(coords_set(x,y,z), _collSpec_var._position_relative),&x, &y, &z);
        else
          mccoordschange(_collSpec_var._position_relative, _collSpec_var._rotation_relative, _particle);
        _particle_save = *_particle;
        class_L_monitor_trace(&_collSpec_var, _particle);
        if (_particle->_restore)
        particle_restore(_particle, &_particle_save);
        _particle->_index++;
      }

      // psd_pre_mirror
    if (!ABSORBED && _particle->_index == 3) {
        if (_psd_pre_mirror_var._rotation_is_identity)
          coords_get(coords_add(coords_set(x,y,z), _psd_pre_mirror_var._position_relative),&x, &y, &z);
        else
          mccoordschange(_psd_pre_mirror_var._position_relative, _psd_pre_mirror_var._rotation_relative, _particle);
        _particle_save = *_particle;
        class_PSD_monitor_trace(&_psd_pre_mirror_var, _particle);
        if (_particle->_restore)
        particle_restore(_particle, &_particle_save);
        _particle->_index++;
      }

      // PortGisans
    if (!ABSORBED && _particle->_index == 4) {
        _particle->_index++;
      }

      // focus_Mirr_5
    if (!ABSORBED && _particle->_index == 5) {
        if (_focus_Mirr_5_var._rotation_is_identity)
          coords_get(coords_add(coords_set(x,y,z), _focus_Mirr_5_var._position_relative),&x, &y, &z);
        else
          mccoordschange(_focus_Mirr_5_var._position_relative, _focus_Mirr_5_var._rotation_relative, _particle);
        _particle_save = *_particle;
        class_Mirror_Parabolic_trace(&_focus_Mirr_5_var, _particle); /* contains EXTEND code */
        if (_particle->_restore)
        particle_restore(_particle, &_particle_save);
      // GROUP mirrorstack: from focus_Mirr_5 [5] to focus_Mirr [9]
      if (SCATTERED) _particle->_index = 9; // when SCATTERED in GROUP: reach exit of GROUP after focus_Mirr
      else ABSORBED=0; // not SCATTERED within GROUP: always tries next
        _particle->_index++;
      }

      // focus_Mirr_4
    if (!ABSORBED && _particle->_index == 6) {
        if (_focus_Mirr_4_var._rotation_is_identity)
          coords_get(coords_add(coords_set(x,y,z), _focus_Mirr_4_var._position_relative),&x, &y, &z);
        else
          mccoordschange(_focus_Mirr_4_var._position_relative, _focus_Mirr_4_var._rotation_relative, _particle);
        _particle_save = *_particle;
        class_Mirror_Parabolic_trace(&_focus_Mirr_4_var, _particle);
        if (_particle->_restore)
        particle_restore(_particle, &_particle_save);
      // GROUP mirrorstack: from focus_Mirr_5 [5] to focus_Mirr [9]
      if (SCATTERED) _particle->_index = 9; // when SCATTERED in GROUP: reach exit of GROUP after focus_Mirr
      else ABSORBED=0; // not SCATTERED within GROUP: always tries next
        _particle->_index++;
      }

      // focus_Mirr_3
    if (!ABSORBED && _particle->_index == 7) {
        if (_focus_Mirr_3_var._rotation_is_identity)
          coords_get(coords_add(coords_set(x,y,z), _focus_Mirr_3_var._position_relative),&x, &y, &z);
        else
          mccoordschange(_focus_Mirr_3_var._position_relative, _focus_Mirr_3_var._rotation_relative, _particle);
        _particle_save = *_particle;
        class_Mirror_Parabolic_trace(&_focus_Mirr_3_var, _particle);
        if (_particle->_restore)
        particle_restore(_particle, &_particle_save);
      // GROUP mirrorstack: from focus_Mirr_5 [5] to focus_Mirr [9]
      if (SCATTERED) _particle->_index = 9; // when SCATTERED in GROUP: reach exit of GROUP after focus_Mirr
      else ABSORBED=0; // not SCATTERED within GROUP: always tries next
        _particle->_index++;
      }

      // focus_Mirr_2
    if (!ABSORBED && _particle->_index == 8) {
        if (_focus_Mirr_2_var._rotation_is_identity)
          coords_get(coords_add(coords_set(x,y,z), _focus_Mirr_2_var._position_relative),&x, &y, &z);
        else
          mccoordschange(_focus_Mirr_2_var._position_relative, _focus_Mirr_2_var._rotation_relative, _particle);
        _particle_save = *_particle;
        class_Mirror_Parabolic_trace(&_focus_Mirr_2_var, _particle);
        if (_particle->_restore)
        particle_restore(_particle, &_particle_save);
      // GROUP mirrorstack: from focus_Mirr_5 [5] to focus_Mirr [9]
      if (SCATTERED) _particle->_index = 9; // when SCATTERED in GROUP: reach exit of GROUP after focus_Mirr
      else ABSORBED=0; // not SCATTERED within GROUP: always tries next
        _particle->_index++;
      }

      // focus_Mirr
    if (!ABSORBED && _particle->_index == 9) {
        if (_focus_Mirr_var._rotation_is_identity)
          coords_get(coords_add(coords_set(x,y,z), _focus_Mirr_var._position_relative),&x, &y, &z);
        else
          mccoordschange(_focus_Mirr_var._position_relative, _focus_Mirr_var._rotation_relative, _particle);
        _particle_save = *_particle;
        class_Mirror_Parabolic_trace(&_focus_Mirr_var, _particle);
        if (_particle->_restore)
        particle_restore(_particle, &_particle_save);
      // GROUP mirrorstack: from focus_Mirr_5 [5] to focus_Mirr [9]
      if (SCATTERED) _particle->_index = 9; // when SCATTERED in GROUP: reach exit of GROUP after focus_Mirr
      else ABSORB;     // not SCATTERED at end of GROUP: removes left events
        _particle->_index++;
      }

      // psd_pre_sample
    if (!ABSORBED && _particle->_index == 10) {
        if (_psd_pre_sample_var._rotation_is_identity)
          coords_get(coords_add(coords_set(x,y,z), _psd_pre_sample_var._position_relative),&x, &y, &z);
        else
          mccoordschange(_psd_pre_sample_var._position_relative, _psd_pre_sample_var._rotation_relative, _particle);
        _particle_save = *_particle;
        class_PSD_monitor_trace(&_psd_pre_sample_var, _particle);
        if (_particle->_restore)
        particle_restore(_particle, &_particle_save);
        _particle->_index++;
      }

      // collSpec_pre_sample
    if (!ABSORBED && _particle->_index == 11) {
        if (_collSpec_pre_sample_var._rotation_is_identity)
          coords_get(coords_add(coords_set(x,y,z), _collSpec_pre_sample_var._position_relative),&x, &y, &z);
        else
          mccoordschange(_collSpec_pre_sample_var._position_relative, _collSpec_pre_sample_var._rotation_relative, _particle);
        _particle_save = *_particle;
        class_L_monitor_trace(&_collSpec_pre_sample_var, _particle);
        if (_particle->_restore)
        particle_restore(_particle, &_particle_save);
        _particle->_index++;
      }

      // Div_sample
    if (!ABSORBED && _particle->_index == 12) {
        if (_Div_sample_var._rotation_is_identity)
          coords_get(coords_add(coords_set(x,y,z), _Div_sample_var._position_relative),&x, &y, &z);
        else
          mccoordschange(_Div_sample_var._position_relative, _Div_sample_var._rotation_relative, _particle);
        _particle_save = *_particle;
        class_Divergence_monitor_trace(&_Div_sample_var, _particle);
        if (_particle->_restore)
        particle_restore(_particle, &_particle_save);
        _particle->_index++;
      }

      // psd_sample
    if (!ABSORBED && _particle->_index == 13) {
        if (_psd_sample_var._rotation_is_identity)
          coords_get(coords_add(coords_set(x,y,z), _psd_sample_var._position_relative),&x, &y, &z);
        else
          mccoordschange(_psd_sample_var._position_relative, _psd_sample_var._rotation_relative, _particle);
        _particle_save = *_particle;
        class_PSD_monitor_trace(&_psd_sample_var, _particle);
        if (_particle->_restore)
        particle_restore(_particle, &_particle_save);
        _particle->_index++;
      }

    }

    // jump to next viable seed
    seed = seed + gpu_innerloop;
  } // outer loop / particle batches

  free(particles);
  free(pbuffer);

  printf("\n");
} /* raytrace_all_funnel */
#endif // FUNNEL

#undef x
#undef y
#undef z
#undef vx
#undef vy
#undef vz
#undef t
#undef sx
#undef sy
#undef sz
#undef p
#undef mcgravitation
#undef mcMagnet
#undef allow_backprop
#ifdef OPENACC
#ifndef MULTICORE
#undef strlen
#undef strcmp
#undef exit
#undef printf
#undef sprintf
#undef fprintf
#endif
#endif
#undef SCATTERED
#undef RESTORE
#undef RESTORE_NEUTRON
#undef STORE_NEUTRON
#undef ABSORBED
#undef ABSORB
#undef ABSORB0
/* *****************************************************************************
* instrument 'SKADI' and components SAVE
***************************************************************************** */

_class_MCPL_input *class_MCPL_input_save(_class_MCPL_input *_comp
) {
  #define filename (_comp->_parameters.filename)
  #define polarisationuse (_comp->_parameters.polarisationuse)
  #define verbose (_comp->_parameters.verbose)
  #define Emin (_comp->_parameters.Emin)
  #define Emax (_comp->_parameters.Emax)
  #define repeat_count (_comp->_parameters.repeat_count)
  #define E_smear (_comp->_parameters.E_smear)
  #define pos_smear (_comp->_parameters.pos_smear)
  #define dir_smear (_comp->_parameters.dir_smear)
  #define preload (_comp->_parameters.preload)
  #define inputfile (_comp->_parameters.inputfile)
  #define nparticles (_comp->_parameters.nparticles)
  #define read_neutrons (_comp->_parameters.read_neutrons)
  #define used_neutrons (_comp->_parameters.used_neutrons)
  #define repeat_cnt (_comp->_parameters.repeat_cnt)
  #define repeat_tot (_comp->_parameters.repeat_tot)
  #define repeating (_comp->_parameters.repeating)
  #define ismpislave (_comp->_parameters.ismpislave)
  #define mpi_cnt (_comp->_parameters.mpi_cnt)
  #define X (_comp->_parameters.X)
  #define Y (_comp->_parameters.Y)
  #define Z (_comp->_parameters.Z)
  #define VX (_comp->_parameters.VX)
  #define VY (_comp->_parameters.VY)
  #define VZ (_comp->_parameters.VZ)
  #define SX (_comp->_parameters.SX)
  #define SY (_comp->_parameters.SY)
  #define SZ (_comp->_parameters.SZ)
  #define E (_comp->_parameters.E)
  #define T (_comp->_parameters.T)
  #define P (_comp->_parameters.P)
  SIG_MESSAGE("[_MCPL_source_save] component MCPL_source=MCPL_input() SAVE [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//misc/MCPL_input.comp:382]");

  #ifndef OPENACC
  if (!preload) {
      mcpl_close_file(inputfile);
  }
  #endif
  #undef filename
  #undef polarisationuse
  #undef verbose
  #undef Emin
  #undef Emax
  #undef repeat_count
  #undef E_smear
  #undef pos_smear
  #undef dir_smear
  #undef preload
  #undef inputfile
  #undef nparticles
  #undef read_neutrons
  #undef used_neutrons
  #undef repeat_cnt
  #undef repeat_tot
  #undef repeating
  #undef ismpislave
  #undef mpi_cnt
  #undef X
  #undef Y
  #undef Z
  #undef VX
  #undef VY
  #undef VZ
  #undef SX
  #undef SY
  #undef SZ
  #undef E
  #undef T
  #undef P
  return(_comp);
} /* class_MCPL_input_save */

_class_L_monitor *class_L_monitor_save(_class_L_monitor *_comp
) {
  #define nL (_comp->_parameters.nL)
  #define filename (_comp->_parameters.filename)
  #define nowritefile (_comp->_parameters.nowritefile)
  #define xmin (_comp->_parameters.xmin)
  #define xmax (_comp->_parameters.xmax)
  #define ymin (_comp->_parameters.ymin)
  #define ymax (_comp->_parameters.ymax)
  #define xwidth (_comp->_parameters.xwidth)
  #define yheight (_comp->_parameters.yheight)
  #define Lmin (_comp->_parameters.Lmin)
  #define Lmax (_comp->_parameters.Lmax)
  #define restore_neutron (_comp->_parameters.restore_neutron)
  #define L_N (_comp->_parameters.L_N)
  #define L_p (_comp->_parameters.L_p)
  #define L_p2 (_comp->_parameters.L_p2)
  SIG_MESSAGE("[_collSpec_save] component collSpec=L_monitor() SAVE [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//monitors/L_monitor.comp:118]");

if (!nowritefile) {
  DETECTOR_OUT_1D(
    "Wavelength monitor",
    "Wavelength [AA]",
    "Intensity",
    "L", Lmin, Lmax, nL,
    &L_N[0],&L_p[0],&L_p2[0],
    filename);
}
  #undef nL
  #undef filename
  #undef nowritefile
  #undef xmin
  #undef xmax
  #undef ymin
  #undef ymax
  #undef xwidth
  #undef yheight
  #undef Lmin
  #undef Lmax
  #undef restore_neutron
  #undef L_N
  #undef L_p
  #undef L_p2
  return(_comp);
} /* class_L_monitor_save */

_class_PSD_monitor *class_PSD_monitor_save(_class_PSD_monitor *_comp
) {
  #define nx (_comp->_parameters.nx)
  #define ny (_comp->_parameters.ny)
  #define filename (_comp->_parameters.filename)
  #define xmin (_comp->_parameters.xmin)
  #define xmax (_comp->_parameters.xmax)
  #define ymin (_comp->_parameters.ymin)
  #define ymax (_comp->_parameters.ymax)
  #define xwidth (_comp->_parameters.xwidth)
  #define yheight (_comp->_parameters.yheight)
  #define restore_neutron (_comp->_parameters.restore_neutron)
  #define nowritefile (_comp->_parameters.nowritefile)
  #define PSD_N (_comp->_parameters.PSD_N)
  #define PSD_p (_comp->_parameters.PSD_p)
  #define PSD_p2 (_comp->_parameters.PSD_p2)
  SIG_MESSAGE("[_psd_pre_mirror_save] component psd_pre_mirror=PSD_monitor() SAVE [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//monitors/PSD_monitor.comp:106]");

    if (!nowritefile) {
      DETECTOR_OUT_2D(
          "PSD monitor",
          "X position [cm]",
          "Y position [cm]",
          xmin*100.0, xmax*100.0, ymin*100.0, ymax*100.0,
          nx, ny,
          &PSD_N[0][0],&PSD_p[0][0],&PSD_p2[0][0],
          filename);
    }
  #undef nx
  #undef ny
  #undef filename
  #undef xmin
  #undef xmax
  #undef ymin
  #undef ymax
  #undef xwidth
  #undef yheight
  #undef restore_neutron
  #undef nowritefile
  #undef PSD_N
  #undef PSD_p
  #undef PSD_p2
  return(_comp);
} /* class_PSD_monitor_save */

_class_Divergence_monitor *class_Divergence_monitor_save(_class_Divergence_monitor *_comp
) {
  #define nh (_comp->_parameters.nh)
  #define nv (_comp->_parameters.nv)
  #define filename (_comp->_parameters.filename)
  #define xmin (_comp->_parameters.xmin)
  #define xmax (_comp->_parameters.xmax)
  #define ymin (_comp->_parameters.ymin)
  #define ymax (_comp->_parameters.ymax)
  #define nowritefile (_comp->_parameters.nowritefile)
  #define xwidth (_comp->_parameters.xwidth)
  #define yheight (_comp->_parameters.yheight)
  #define maxdiv_h (_comp->_parameters.maxdiv_h)
  #define maxdiv_v (_comp->_parameters.maxdiv_v)
  #define restore_neutron (_comp->_parameters.restore_neutron)
  #define nx (_comp->_parameters.nx)
  #define ny (_comp->_parameters.ny)
  #define nz (_comp->_parameters.nz)
  #define Div_N (_comp->_parameters.Div_N)
  #define Div_p (_comp->_parameters.Div_p)
  #define Div_p2 (_comp->_parameters.Div_p2)
  SIG_MESSAGE("[_Div_sample_save] component Div_sample=Divergence_monitor() SAVE [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//monitors/Divergence_monitor.comp:136]");

if (!nowritefile) {
  DETECTOR_OUT_2D(
      "Divergence monitor",
      "X divergence [deg]",
      "Y divergence [deg]",
      -maxdiv_h, maxdiv_h, -maxdiv_v, maxdiv_v,
      nh, nv,
      &Div_N[0][0],&Div_p[0][0],&Div_p2[0][0],
      filename);
}
  #undef nh
  #undef nv
  #undef filename
  #undef xmin
  #undef xmax
  #undef ymin
  #undef ymax
  #undef nowritefile
  #undef xwidth
  #undef yheight
  #undef maxdiv_h
  #undef maxdiv_v
  #undef restore_neutron
  #undef nx
  #undef ny
  #undef nz
  #undef Div_N
  #undef Div_p
  #undef Div_p2
  return(_comp);
} /* class_Divergence_monitor_save */



int save(FILE *handle) { /* called by mccode_main for SKADI:SAVE */
  if (!handle) siminfo_init(NULL);

  /* call iteratively all components SAVE */
  class_MCPL_input_save(&_MCPL_source_var);

  class_L_monitor_save(&_collSpec_var);

  class_PSD_monitor_save(&_psd_pre_mirror_var);







  class_PSD_monitor_save(&_psd_pre_sample_var);

  class_L_monitor_save(&_collSpec_pre_sample_var);

  class_Divergence_monitor_save(&_Div_sample_var);

  class_PSD_monitor_save(&_psd_sample_var);

  if (!handle) siminfo_close(); 

  return(0);
} /* save */

/* *****************************************************************************
* instrument 'SKADI' and components FINALLY
***************************************************************************** */

_class_MCPL_input *class_MCPL_input_finally(_class_MCPL_input *_comp
) {
  #define filename (_comp->_parameters.filename)
  #define polarisationuse (_comp->_parameters.polarisationuse)
  #define verbose (_comp->_parameters.verbose)
  #define Emin (_comp->_parameters.Emin)
  #define Emax (_comp->_parameters.Emax)
  #define repeat_count (_comp->_parameters.repeat_count)
  #define E_smear (_comp->_parameters.E_smear)
  #define pos_smear (_comp->_parameters.pos_smear)
  #define dir_smear (_comp->_parameters.dir_smear)
  #define preload (_comp->_parameters.preload)
  #define inputfile (_comp->_parameters.inputfile)
  #define nparticles (_comp->_parameters.nparticles)
  #define read_neutrons (_comp->_parameters.read_neutrons)
  #define used_neutrons (_comp->_parameters.used_neutrons)
  #define repeat_cnt (_comp->_parameters.repeat_cnt)
  #define repeat_tot (_comp->_parameters.repeat_tot)
  #define repeating (_comp->_parameters.repeating)
  #define ismpislave (_comp->_parameters.ismpislave)
  #define mpi_cnt (_comp->_parameters.mpi_cnt)
  #define X (_comp->_parameters.X)
  #define Y (_comp->_parameters.Y)
  #define Z (_comp->_parameters.Z)
  #define VX (_comp->_parameters.VX)
  #define VY (_comp->_parameters.VY)
  #define VZ (_comp->_parameters.VZ)
  #define SX (_comp->_parameters.SX)
  #define SY (_comp->_parameters.SY)
  #define SZ (_comp->_parameters.SZ)
  #define E (_comp->_parameters.E)
  #define T (_comp->_parameters.T)
  #define P (_comp->_parameters.P)
  SIG_MESSAGE("[_MCPL_source_finally] component MCPL_source=MCPL_input() FINALLY [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//misc/MCPL_input.comp:391]");

    long long ncount;

    ncount=mcget_ncount();

    if (used_neutrons!=read_neutrons){
        fprintf(stdout,"Message(%s): You have used %lu of %lu neutrons available in the MCPL file.\n",NAME_CURRENT_COMP,
          (long unsigned)used_neutrons,(long unsigned)read_neutrons);
    }
    if (ncount != used_neutrons){
        fprintf(stderr,"Warning (%s): You requested %lu neutrons from a file which contains %lu particles in general, of which only %lu are neutrons (within the wanted energy interval).\n"
                "Please examine the recorded intensities carefully.\n",
          NAME_CURRENT_COMP,(long unsigned)ncount,(long unsigned)nparticles,(long unsigned)used_neutrons);
    }


  #undef filename
  #undef polarisationuse
  #undef verbose
  #undef Emin
  #undef Emax
  #undef repeat_count
  #undef E_smear
  #undef pos_smear
  #undef dir_smear
  #undef preload
  #undef inputfile
  #undef nparticles
  #undef read_neutrons
  #undef used_neutrons
  #undef repeat_cnt
  #undef repeat_tot
  #undef repeating
  #undef ismpislave
  #undef mpi_cnt
  #undef X
  #undef Y
  #undef Z
  #undef VX
  #undef VY
  #undef VZ
  #undef SX
  #undef SY
  #undef SZ
  #undef E
  #undef T
  #undef P
  return(_comp);
} /* class_MCPL_input_finally */

_class_L_monitor *class_L_monitor_finally(_class_L_monitor *_comp
) {
  #define nL (_comp->_parameters.nL)
  #define filename (_comp->_parameters.filename)
  #define nowritefile (_comp->_parameters.nowritefile)
  #define xmin (_comp->_parameters.xmin)
  #define xmax (_comp->_parameters.xmax)
  #define ymin (_comp->_parameters.ymin)
  #define ymax (_comp->_parameters.ymax)
  #define xwidth (_comp->_parameters.xwidth)
  #define yheight (_comp->_parameters.yheight)
  #define Lmin (_comp->_parameters.Lmin)
  #define Lmax (_comp->_parameters.Lmax)
  #define restore_neutron (_comp->_parameters.restore_neutron)
  #define L_N (_comp->_parameters.L_N)
  #define L_p (_comp->_parameters.L_p)
  #define L_p2 (_comp->_parameters.L_p2)
  SIG_MESSAGE("[_collSpec_finally] component collSpec=L_monitor() FINALLY [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//monitors/L_monitor.comp:131]");

  destroy_darr1d(L_N);
  destroy_darr1d(L_p);
  destroy_darr1d(L_p2);
  #undef nL
  #undef filename
  #undef nowritefile
  #undef xmin
  #undef xmax
  #undef ymin
  #undef ymax
  #undef xwidth
  #undef yheight
  #undef Lmin
  #undef Lmax
  #undef restore_neutron
  #undef L_N
  #undef L_p
  #undef L_p2
  return(_comp);
} /* class_L_monitor_finally */

_class_PSD_monitor *class_PSD_monitor_finally(_class_PSD_monitor *_comp
) {
  #define nx (_comp->_parameters.nx)
  #define ny (_comp->_parameters.ny)
  #define filename (_comp->_parameters.filename)
  #define xmin (_comp->_parameters.xmin)
  #define xmax (_comp->_parameters.xmax)
  #define ymin (_comp->_parameters.ymin)
  #define ymax (_comp->_parameters.ymax)
  #define xwidth (_comp->_parameters.xwidth)
  #define yheight (_comp->_parameters.yheight)
  #define restore_neutron (_comp->_parameters.restore_neutron)
  #define nowritefile (_comp->_parameters.nowritefile)
  #define PSD_N (_comp->_parameters.PSD_N)
  #define PSD_p (_comp->_parameters.PSD_p)
  #define PSD_p2 (_comp->_parameters.PSD_p2)
  SIG_MESSAGE("[_psd_pre_mirror_finally] component psd_pre_mirror=PSD_monitor() FINALLY [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//monitors/PSD_monitor.comp:119]");

  destroy_darr2d(PSD_N);
  destroy_darr2d(PSD_p);
  destroy_darr2d(PSD_p2);
  #undef nx
  #undef ny
  #undef filename
  #undef xmin
  #undef xmax
  #undef ymin
  #undef ymax
  #undef xwidth
  #undef yheight
  #undef restore_neutron
  #undef nowritefile
  #undef PSD_N
  #undef PSD_p
  #undef PSD_p2
  return(_comp);
} /* class_PSD_monitor_finally */

_class_Mirror_Parabolic *class_Mirror_Parabolic_finally(_class_Mirror_Parabolic *_comp
) {
  #define reflect (_comp->_parameters.reflect)
  #define xwidth (_comp->_parameters.xwidth)
  #define xshift (_comp->_parameters.xshift)
  #define yheight (_comp->_parameters.yheight)
  #define focus (_comp->_parameters.focus)
  #define R0 (_comp->_parameters.R0)
  #define Qc (_comp->_parameters.Qc)
  #define alpha (_comp->_parameters.alpha)
  #define m (_comp->_parameters.m)
  #define W (_comp->_parameters.W)
  #define beta1 (_comp->_parameters.beta1)
  #define gamma1 (_comp->_parameters.gamma1)
  #define pTable (_comp->_parameters.pTable)
  #define err (_comp->_parameters.err)
  #define nom (_comp->_parameters.nom)
  #define vz_neg (_comp->_parameters.vz_neg)
  SIG_MESSAGE("[_focus_Mirr_5_finally] component focus_Mirr_5=Mirror_Parabolic() FINALLY [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//contrib/Mirror_Parabolic.comp:190]");

  /*   printf("\n %d neutrons were reflected on the component %s.\n",nom,NAME_CURRENT_COMP);*/
  if(err!=0||vz_neg!=0){
    fprintf(stderr,"Mirror_Parabolic: %s: %d lost neutrons for inadapted divergence\n"
      "\t%d for vz <0 \n neutrons absorbed inside the component.\n",
    NAME_CURRENT_COMP,err,vz_neg);
  }
  #undef reflect
  #undef xwidth
  #undef xshift
  #undef yheight
  #undef focus
  #undef R0
  #undef Qc
  #undef alpha
  #undef m
  #undef W
  #undef beta1
  #undef gamma1
  #undef pTable
  #undef err
  #undef nom
  #undef vz_neg
  return(_comp);
} /* class_Mirror_Parabolic_finally */

_class_Divergence_monitor *class_Divergence_monitor_finally(_class_Divergence_monitor *_comp
) {
  #define nh (_comp->_parameters.nh)
  #define nv (_comp->_parameters.nv)
  #define filename (_comp->_parameters.filename)
  #define xmin (_comp->_parameters.xmin)
  #define xmax (_comp->_parameters.xmax)
  #define ymin (_comp->_parameters.ymin)
  #define ymax (_comp->_parameters.ymax)
  #define nowritefile (_comp->_parameters.nowritefile)
  #define xwidth (_comp->_parameters.xwidth)
  #define yheight (_comp->_parameters.yheight)
  #define maxdiv_h (_comp->_parameters.maxdiv_h)
  #define maxdiv_v (_comp->_parameters.maxdiv_v)
  #define restore_neutron (_comp->_parameters.restore_neutron)
  #define nx (_comp->_parameters.nx)
  #define ny (_comp->_parameters.ny)
  #define nz (_comp->_parameters.nz)
  #define Div_N (_comp->_parameters.Div_N)
  #define Div_p (_comp->_parameters.Div_p)
  #define Div_p2 (_comp->_parameters.Div_p2)
  SIG_MESSAGE("[_Div_sample_finally] component Div_sample=Divergence_monitor() FINALLY [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//monitors/Divergence_monitor.comp:150]");

  destroy_darr2d(Div_N);
  destroy_darr2d(Div_p);
  destroy_darr2d(Div_p2);
  #undef nh
  #undef nv
  #undef filename
  #undef xmin
  #undef xmax
  #undef ymin
  #undef ymax
  #undef nowritefile
  #undef xwidth
  #undef yheight
  #undef maxdiv_h
  #undef maxdiv_v
  #undef restore_neutron
  #undef nx
  #undef ny
  #undef nz
  #undef Div_N
  #undef Div_p
  #undef Div_p2
  return(_comp);
} /* class_Divergence_monitor_finally */



int finally(void) { /* called by mccode_main for SKADI:FINALLY */
#pragma acc update host(_MCPL_source_var)
#pragma acc update host(_collSpec_var)
#pragma acc update host(_psd_pre_mirror_var)
#pragma acc update host(_PortGisans_var)
#pragma acc update host(_focus_Mirr_5_var)
#pragma acc update host(_focus_Mirr_4_var)
#pragma acc update host(_focus_Mirr_3_var)
#pragma acc update host(_focus_Mirr_2_var)
#pragma acc update host(_focus_Mirr_var)
#pragma acc update host(_psd_pre_sample_var)
#pragma acc update host(_collSpec_pre_sample_var)
#pragma acc update host(_Div_sample_var)
#pragma acc update host(_psd_sample_var)
#pragma acc update host(_instrument_var)

  siminfo_init(NULL);
  save(siminfo_file); /* save data when simulation ends */

  /* call iteratively all components FINALLY */
  class_MCPL_input_finally(&_MCPL_source_var);

  class_L_monitor_finally(&_collSpec_var);

  class_PSD_monitor_finally(&_psd_pre_mirror_var);


  class_Mirror_Parabolic_finally(&_focus_Mirr_5_var);

  class_Mirror_Parabolic_finally(&_focus_Mirr_4_var);

  class_Mirror_Parabolic_finally(&_focus_Mirr_3_var);

  class_Mirror_Parabolic_finally(&_focus_Mirr_2_var);

  class_Mirror_Parabolic_finally(&_focus_Mirr_var);

  class_PSD_monitor_finally(&_psd_pre_sample_var);

  class_L_monitor_finally(&_collSpec_pre_sample_var);

  class_Divergence_monitor_finally(&_Div_sample_var);

  class_PSD_monitor_finally(&_psd_sample_var);

  siminfo_close(); 

  return(0);
} /* finally */

/* *****************************************************************************
* instrument 'SKADI' and components DISPLAY
***************************************************************************** */

  #define magnify     mcdis_magnify
  #define line        mcdis_line
  #define dashed_line mcdis_dashed_line
  #define multiline   mcdis_multiline
  #define rectangle   mcdis_rectangle
  #define box         mcdis_box
  #define circle      mcdis_circle
  #define cylinder    mcdis_cylinder
  #define sphere      mcdis_sphere
_class_MCPL_input *class_MCPL_input_display(_class_MCPL_input *_comp
) {
  #define filename (_comp->_parameters.filename)
  #define polarisationuse (_comp->_parameters.polarisationuse)
  #define verbose (_comp->_parameters.verbose)
  #define Emin (_comp->_parameters.Emin)
  #define Emax (_comp->_parameters.Emax)
  #define repeat_count (_comp->_parameters.repeat_count)
  #define E_smear (_comp->_parameters.E_smear)
  #define pos_smear (_comp->_parameters.pos_smear)
  #define dir_smear (_comp->_parameters.dir_smear)
  #define preload (_comp->_parameters.preload)
  #define inputfile (_comp->_parameters.inputfile)
  #define nparticles (_comp->_parameters.nparticles)
  #define read_neutrons (_comp->_parameters.read_neutrons)
  #define used_neutrons (_comp->_parameters.used_neutrons)
  #define repeat_cnt (_comp->_parameters.repeat_cnt)
  #define repeat_tot (_comp->_parameters.repeat_tot)
  #define repeating (_comp->_parameters.repeating)
  #define ismpislave (_comp->_parameters.ismpislave)
  #define mpi_cnt (_comp->_parameters.mpi_cnt)
  #define X (_comp->_parameters.X)
  #define Y (_comp->_parameters.Y)
  #define Z (_comp->_parameters.Z)
  #define VX (_comp->_parameters.VX)
  #define VY (_comp->_parameters.VY)
  #define VZ (_comp->_parameters.VZ)
  #define SX (_comp->_parameters.SX)
  #define SY (_comp->_parameters.SY)
  #define SZ (_comp->_parameters.SZ)
  #define E (_comp->_parameters.E)
  #define T (_comp->_parameters.T)
  #define P (_comp->_parameters.P)
  SIG_MESSAGE("[_MCPL_source_display] component MCPL_source=MCPL_input() DISPLAY [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//misc/MCPL_input.comp:410]");

  printf("MCDISPLAY: component %s\n", _comp->_name);
    multiline(5, 0.2,0.2,0.0, -0.2,0.2,0.0, -0.2,-0.2,0.0, 0.2,-0.2,0.0, 0.2,0.2,0.0);
    /*M*/
    multiline(5,-0.085,-0.085,0.0, -0.085,0.085,0.0, -0.045,-0.085,0.0, -0.005,0.085,0.0, -0.005,-0.085,0.0);
    /*I*/
    line(0.045,-0.085,0, 0.045, 0.085,0);    
    line(0.005, 0.085,0, 0.085, 0.085,0);    
    line(0.005,-0.085,0, 0.085,-0.085,0);    
  #undef filename
  #undef polarisationuse
  #undef verbose
  #undef Emin
  #undef Emax
  #undef repeat_count
  #undef E_smear
  #undef pos_smear
  #undef dir_smear
  #undef preload
  #undef inputfile
  #undef nparticles
  #undef read_neutrons
  #undef used_neutrons
  #undef repeat_cnt
  #undef repeat_tot
  #undef repeating
  #undef ismpislave
  #undef mpi_cnt
  #undef X
  #undef Y
  #undef Z
  #undef VX
  #undef VY
  #undef VZ
  #undef SX
  #undef SY
  #undef SZ
  #undef E
  #undef T
  #undef P
  return(_comp);
} /* class_MCPL_input_display */

_class_L_monitor *class_L_monitor_display(_class_L_monitor *_comp
) {
  #define nL (_comp->_parameters.nL)
  #define filename (_comp->_parameters.filename)
  #define nowritefile (_comp->_parameters.nowritefile)
  #define xmin (_comp->_parameters.xmin)
  #define xmax (_comp->_parameters.xmax)
  #define ymin (_comp->_parameters.ymin)
  #define ymax (_comp->_parameters.ymax)
  #define xwidth (_comp->_parameters.xwidth)
  #define yheight (_comp->_parameters.yheight)
  #define Lmin (_comp->_parameters.Lmin)
  #define Lmax (_comp->_parameters.Lmax)
  #define restore_neutron (_comp->_parameters.restore_neutron)
  #define L_N (_comp->_parameters.L_N)
  #define L_p (_comp->_parameters.L_p)
  #define L_p2 (_comp->_parameters.L_p2)
  SIG_MESSAGE("[_collSpec_display] component collSpec=L_monitor() DISPLAY [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//monitors/L_monitor.comp:138]");

  printf("MCDISPLAY: component %s\n", _comp->_name);
  multiline(5, (double)xmin, (double)ymin, 0.0,
               (double)xmax, (double)ymin, 0.0,
               (double)xmax, (double)ymax, 0.0,
               (double)xmin, (double)ymax, 0.0,
               (double)xmin, (double)ymin, 0.0);
  #undef nL
  #undef filename
  #undef nowritefile
  #undef xmin
  #undef xmax
  #undef ymin
  #undef ymax
  #undef xwidth
  #undef yheight
  #undef Lmin
  #undef Lmax
  #undef restore_neutron
  #undef L_N
  #undef L_p
  #undef L_p2
  return(_comp);
} /* class_L_monitor_display */

_class_PSD_monitor *class_PSD_monitor_display(_class_PSD_monitor *_comp
) {
  #define nx (_comp->_parameters.nx)
  #define ny (_comp->_parameters.ny)
  #define filename (_comp->_parameters.filename)
  #define xmin (_comp->_parameters.xmin)
  #define xmax (_comp->_parameters.xmax)
  #define ymin (_comp->_parameters.ymin)
  #define ymax (_comp->_parameters.ymax)
  #define xwidth (_comp->_parameters.xwidth)
  #define yheight (_comp->_parameters.yheight)
  #define restore_neutron (_comp->_parameters.restore_neutron)
  #define nowritefile (_comp->_parameters.nowritefile)
  #define PSD_N (_comp->_parameters.PSD_N)
  #define PSD_p (_comp->_parameters.PSD_p)
  #define PSD_p2 (_comp->_parameters.PSD_p2)
  SIG_MESSAGE("[_psd_pre_mirror_display] component psd_pre_mirror=PSD_monitor() DISPLAY [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//monitors/PSD_monitor.comp:126]");

  printf("MCDISPLAY: component %s\n", _comp->_name);
  
  multiline(5, (double)xmin, (double)ymin, 0.0,
               (double)xmax, (double)ymin, 0.0,
               (double)xmax, (double)ymax, 0.0,
               (double)xmin, (double)ymax, 0.0,
               (double)xmin, (double)ymin, 0.0);
  #undef nx
  #undef ny
  #undef filename
  #undef xmin
  #undef xmax
  #undef ymin
  #undef ymax
  #undef xwidth
  #undef yheight
  #undef restore_neutron
  #undef nowritefile
  #undef PSD_N
  #undef PSD_p
  #undef PSD_p2
  return(_comp);
} /* class_PSD_monitor_display */

_class_Arm *class_Arm_display(_class_Arm *_comp
) {
  SIG_MESSAGE("[_PortGisans_display] component PortGisans=Arm() DISPLAY [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//optics/Arm.comp:40]");

  printf("MCDISPLAY: component %s\n", _comp->_name);
  /* A bit ugly; hard-coded dimensions. */
  
  line(0,0,0,0.2,0,0);
  line(0,0,0,0,0.2,0);
  line(0,0,0,0,0,0.2);
  return(_comp);
} /* class_Arm_display */

_class_Mirror_Parabolic *class_Mirror_Parabolic_display(_class_Mirror_Parabolic *_comp
) {
  #define reflect (_comp->_parameters.reflect)
  #define xwidth (_comp->_parameters.xwidth)
  #define xshift (_comp->_parameters.xshift)
  #define yheight (_comp->_parameters.yheight)
  #define focus (_comp->_parameters.focus)
  #define R0 (_comp->_parameters.R0)
  #define Qc (_comp->_parameters.Qc)
  #define alpha (_comp->_parameters.alpha)
  #define m (_comp->_parameters.m)
  #define W (_comp->_parameters.W)
  #define beta1 (_comp->_parameters.beta1)
  #define gamma1 (_comp->_parameters.gamma1)
  #define pTable (_comp->_parameters.pTable)
  #define err (_comp->_parameters.err)
  #define nom (_comp->_parameters.nom)
  #define vz_neg (_comp->_parameters.vz_neg)
  SIG_MESSAGE("[_focus_Mirr_5_display] component focus_Mirr_5=Mirror_Parabolic() DISPLAY [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//contrib/Mirror_Parabolic.comp:200]");

  printf("MCDISPLAY: component %s\n", _comp->_name);
  double delta0,xi,xf,zi,zf;
  
  delta0 = xwidth/99;
  xi = xwidth+xshift;
  line (xi,-yheight,0, xi,yheight,0);
  do
  {
       xf = xi - delta0;
       zi = gamma1*xi*xi+beta1;
       zf = gamma1*xf*xf+beta1;
       line (xi,yheight,zi, xf,yheight,zf);
       line (xi,-yheight,zi, xf,-yheight,zf);
       line (xf,yheight,zf, xf,-yheight,zf);
       xi = xf;
  }while(xf>=xshift);
  #undef reflect
  #undef xwidth
  #undef xshift
  #undef yheight
  #undef focus
  #undef R0
  #undef Qc
  #undef alpha
  #undef m
  #undef W
  #undef beta1
  #undef gamma1
  #undef pTable
  #undef err
  #undef nom
  #undef vz_neg
  return(_comp);
} /* class_Mirror_Parabolic_display */

_class_Divergence_monitor *class_Divergence_monitor_display(_class_Divergence_monitor *_comp
) {
  #define nh (_comp->_parameters.nh)
  #define nv (_comp->_parameters.nv)
  #define filename (_comp->_parameters.filename)
  #define xmin (_comp->_parameters.xmin)
  #define xmax (_comp->_parameters.xmax)
  #define ymin (_comp->_parameters.ymin)
  #define ymax (_comp->_parameters.ymax)
  #define nowritefile (_comp->_parameters.nowritefile)
  #define xwidth (_comp->_parameters.xwidth)
  #define yheight (_comp->_parameters.yheight)
  #define maxdiv_h (_comp->_parameters.maxdiv_h)
  #define maxdiv_v (_comp->_parameters.maxdiv_v)
  #define restore_neutron (_comp->_parameters.restore_neutron)
  #define nx (_comp->_parameters.nx)
  #define ny (_comp->_parameters.ny)
  #define nz (_comp->_parameters.nz)
  #define Div_N (_comp->_parameters.Div_N)
  #define Div_p (_comp->_parameters.Div_p)
  #define Div_p2 (_comp->_parameters.Div_p2)
  SIG_MESSAGE("[_Div_sample_display] component Div_sample=Divergence_monitor() DISPLAY [/Applications/McStas-3.3.app/Contents/Resources/mcstas/3.3//monitors/Divergence_monitor.comp:157]");

  printf("MCDISPLAY: component %s\n", _comp->_name);
  multiline(5, (double)xmin, (double)ymin, 0.0,
               (double)xmax, (double)ymin, 0.0,
               (double)xmax, (double)ymax, 0.0,
               (double)xmin, (double)ymax, 0.0,
               (double)xmin, (double)ymin, 0.0);
  #undef nh
  #undef nv
  #undef filename
  #undef xmin
  #undef xmax
  #undef ymin
  #undef ymax
  #undef nowritefile
  #undef xwidth
  #undef yheight
  #undef maxdiv_h
  #undef maxdiv_v
  #undef restore_neutron
  #undef nx
  #undef ny
  #undef nz
  #undef Div_N
  #undef Div_p
  #undef Div_p2
  return(_comp);
} /* class_Divergence_monitor_display */


  #undef magnify
  #undef line
  #undef dashed_line
  #undef multiline
  #undef rectangle
  #undef box
  #undef circle
  #undef cylinder
  #undef sphere

int display(void) { /* called by mccode_main for SKADI:DISPLAY */
  printf("MCDISPLAY: start\n");

  /* call iteratively all components DISPLAY */
  class_MCPL_input_display(&_MCPL_source_var);

  class_L_monitor_display(&_collSpec_var);

  class_PSD_monitor_display(&_psd_pre_mirror_var);

  class_Arm_display(&_PortGisans_var);

  class_Mirror_Parabolic_display(&_focus_Mirr_5_var);

  class_Mirror_Parabolic_display(&_focus_Mirr_4_var);

  class_Mirror_Parabolic_display(&_focus_Mirr_3_var);

  class_Mirror_Parabolic_display(&_focus_Mirr_2_var);

  class_Mirror_Parabolic_display(&_focus_Mirr_var);

  class_PSD_monitor_display(&_psd_pre_sample_var);

  class_L_monitor_display(&_collSpec_pre_sample_var);

  class_Divergence_monitor_display(&_Div_sample_var);

  class_PSD_monitor_display(&_psd_sample_var);

  printf("MCDISPLAY: end\n");

  return(0);
} /* display */

void* _getvar_parameters(char* compname)
/* enables settings parameters based use of the GETPAR macro */
{
  #ifdef OPENACC
    #define strcmp(a,b) str_comp(a,b)
  #endif
  if (!strcmp(compname, "MCPL_source")) return (void *) &(_MCPL_source_var._parameters);
  if (!strcmp(compname, "collSpec")) return (void *) &(_collSpec_var._parameters);
  if (!strcmp(compname, "psd_pre_mirror")) return (void *) &(_psd_pre_mirror_var._parameters);
  if (!strcmp(compname, "PortGisans")) return (void *) &(_PortGisans_var._parameters);
  if (!strcmp(compname, "focus_Mirr_5")) return (void *) &(_focus_Mirr_5_var._parameters);
  if (!strcmp(compname, "focus_Mirr_4")) return (void *) &(_focus_Mirr_4_var._parameters);
  if (!strcmp(compname, "focus_Mirr_3")) return (void *) &(_focus_Mirr_3_var._parameters);
  if (!strcmp(compname, "focus_Mirr_2")) return (void *) &(_focus_Mirr_2_var._parameters);
  if (!strcmp(compname, "focus_Mirr")) return (void *) &(_focus_Mirr_var._parameters);
  if (!strcmp(compname, "psd_pre_sample")) return (void *) &(_psd_pre_sample_var._parameters);
  if (!strcmp(compname, "collSpec_pre_sample")) return (void *) &(_collSpec_pre_sample_var._parameters);
  if (!strcmp(compname, "Div_sample")) return (void *) &(_Div_sample_var._parameters);
  if (!strcmp(compname, "psd_sample")) return (void *) &(_psd_sample_var._parameters);
  return 0;
}

void* _get_particle_var(char *token, _class_particle *p)
/* enables setpars based use of GET_PARTICLE_DVAR macro and similar */
{
  return 0;
}

int _getcomp_index(char* compname)
/* Enables retrieving the component position & rotation when the index is not known.
 * Component indexing into MACROS, e.g., POS_A_COMP_INDEX, are 1-based! */
{
  if (!strcmp(compname, "MCPL_source")) return 1;
  if (!strcmp(compname, "collSpec")) return 2;
  if (!strcmp(compname, "psd_pre_mirror")) return 3;
  if (!strcmp(compname, "PortGisans")) return 4;
  if (!strcmp(compname, "focus_Mirr_5")) return 5;
  if (!strcmp(compname, "focus_Mirr_4")) return 6;
  if (!strcmp(compname, "focus_Mirr_3")) return 7;
  if (!strcmp(compname, "focus_Mirr_2")) return 8;
  if (!strcmp(compname, "focus_Mirr")) return 9;
  if (!strcmp(compname, "psd_pre_sample")) return 10;
  if (!strcmp(compname, "collSpec_pre_sample")) return 11;
  if (!strcmp(compname, "Div_sample")) return 12;
  if (!strcmp(compname, "psd_sample")) return 13;
  return -1;
}

/* embedding file "mccode_main.c" */

/*******************************************************************************
* mccode_main: McCode main() function.
*******************************************************************************/
int mccode_main(int argc, char *argv[])
{
  /*  double run_num = 0; */
  time_t  t;
  clock_t ct;

#ifdef USE_MPI
  char mpi_node_name[MPI_MAX_PROCESSOR_NAME];
  int  mpi_node_name_len;
#endif /* USE_MPI */

#ifdef MAC
  argc = ccommand(&argv);
#endif

#ifdef USE_MPI
  MPI_Init(&argc,&argv);
  MPI_Comm_size(MPI_COMM_WORLD, &mpi_node_count); /* get number of nodes */
  MPI_Comm_rank(MPI_COMM_WORLD, &mpi_node_rank);
  MPI_Comm_set_name(MPI_COMM_WORLD, instrument_name);
  MPI_Get_processor_name(mpi_node_name, &mpi_node_name_len);
#endif /* USE_MPI */

  ct = clock();

  // device and host functional RNG seed
  struct timeval tm;
  gettimeofday(&tm, NULL);
  mcseed = (long) tm.tv_sec*1000000 + tm.tv_usec;
  mcstartdate = (long)tm.tv_sec;  /* set start date before parsing options and creating sim file */
  // init global _particle.randstate for random number use
  // during init(), finally() and display(). NOTE: during trace, a local
  // "_particle" variable is present and thus used instead.
  srandom(_hash(mcseed-1));

#ifdef USE_MPI
  /* *** print number of nodes *********************************************** */
  if (mpi_node_count > 1) {
    MPI_MASTER(
    printf("Simulation '%s' (%s): running on %i nodes (master is '%s', MPI version %i.%i).\n",
      instrument_name, instrument_source, mpi_node_count, mpi_node_name, MPI_VERSION, MPI_SUBVERSION);
    );
    /* share the same seed, then adapt random seed for each node */
    MPI_Bcast(&mcseed, 1, MPI_LONG, 0, MPI_COMM_WORLD); /* root sends its seed to slaves */
    mcseed += mpi_node_rank; /* make sure we use different seeds per noe */
  }
#endif /* USE_MPI */

#ifdef OPENACC
#ifdef USE_MPI
  int num_devices = acc_get_num_devices(acc_device_nvidia);
  if(num_devices>0){
    int my_device = mpi_node_rank % num_devices;
    acc_set_device_num( my_device, acc_device_nvidia );
    printf("Have found %d GPU devices on rank %d. Will use device %d.\n", num_devices, mpi_node_rank, my_device);
  }else{
    printf("There was an issue probing acc_get_num_devices, fallback to host\n");
    acc_set_device_type( acc_device_host );
  }
#endif
#endif

  /* *** parse options ******************************************************* */
  SIG_MESSAGE("[" __FILE__ "] main START");
  mcformat = getenv(FLAVOR_UPPER "_FORMAT") ?
             getenv(FLAVOR_UPPER "_FORMAT") : FLAVOR_UPPER;
  instrument_exe = argv[0]; /* store the executable path */
  /* read simulation parameters and options */
  mcparseoptions(argc, argv); /* sets output dir and format */


#ifdef USE_MPI
  if (mpi_node_count > 1) {
    /* share the same seed, then adapt random seed for each node */
    MPI_Bcast(&mcseed, 1, MPI_LONG, 0, MPI_COMM_WORLD); /* root sends its seed to slaves */
    mcseed += mpi_node_rank; /* make sure we use different seeds per node */
  }
#endif


/* *** install sig handler, but only once !! after parameters parsing ******* */
#ifndef NOSIGNALS
#ifdef SIGQUIT
  if (signal( SIGQUIT ,sighandler) == SIG_IGN)
    signal( SIGQUIT,SIG_IGN);   /* quit (ASCII FS) */
#endif
#ifdef SIGABRT
  if (signal( SIGABRT ,sighandler) == SIG_IGN)
    signal( SIGABRT,SIG_IGN);   /* used by abort, replace SIGIOT in the future */
#endif
#ifdef SIGTERM
  if (signal( SIGTERM ,sighandler) == SIG_IGN)
    signal( SIGTERM,SIG_IGN);   /* software termination signal from kill */
#endif
#ifdef SIGUSR1
  if (signal( SIGUSR1 ,sighandler) == SIG_IGN)
    signal( SIGUSR1,SIG_IGN);   /* display simulation status */
#endif
#ifdef SIGUSR2
  if (signal( SIGUSR2 ,sighandler) == SIG_IGN)
    signal( SIGUSR2,SIG_IGN);
#endif
#ifdef SIGHUP
  if (signal( SIGHUP ,sighandler) == SIG_IGN)
    signal( SIGHUP,SIG_IGN);
#endif
#ifdef SIGILL
  if (signal( SIGILL ,sighandler) == SIG_IGN)
    signal( SIGILL,SIG_IGN);    /* illegal instruction (not reset when caught) */
#endif
#ifdef SIGFPE
  if (signal( SIGFPE ,sighandler) == SIG_IGN)
    signal( SIGSEGV,SIG_IGN);    /* floating point exception */
#endif
#ifdef SIGBUS
  if (signal( SIGBUS ,sighandler) == SIG_IGN)
    signal( SIGSEGV,SIG_IGN);    /* bus error */
#endif
#ifdef SIGSEGV
  if (signal( SIGSEGV ,sighandler) == SIG_IGN)
    signal( SIGSEGV,SIG_IGN);   /* segmentation violation */
#endif
#endif /* !NOSIGNALS */


  // init executed by master/host
  siminfo_init(NULL); /* open SIM */
  SIG_MESSAGE("[" __FILE__ "] main INITIALISE");
  init();


#ifndef NOSIGNALS
#ifdef SIGINT
  if (signal( SIGINT ,sighandler) == SIG_IGN)
    signal( SIGINT,SIG_IGN);    /* interrupt (rubout) only after INIT */
#endif
#endif /* !NOSIGNALS */

/* ================ main particle generation/propagation loop ================ */
#ifdef USE_MPI
  /* sliced Ncount on each MPI node */
  mcncount = mpi_node_count > 1 ?
    floor(mcncount / mpi_node_count) :
    mcncount; /* number of rays per node */
#endif

// MT specific init, note that per-ray init is empty
#if RNG_ALG == 2
  mt_srandom(mcseed);
#endif


// main raytrace work loop
#ifndef FUNNEL
  // legacy version
  raytrace_all(mcncount, mcseed);
#else
  MPI_MASTER(
  // "funneled" version in which propagation is more parallelizable
  printf("\nNOTE: CPU COMPONENT grammar activated:\n 1) \"FUNNEL\" raytrace algorithm enabled.\n 2) Any SPLIT's are dynamically allocated based on available buffer size. \n");
	     );
  raytrace_all_funnel(mcncount, mcseed);
#endif


#ifdef USE_MPI
 /* merge run_num from MPI nodes */
  if (mpi_node_count > 1) {
  double mcrun_num_double = (double)mcrun_num;
  mc_MPI_Sum(&mcrun_num_double, 1);
  mcrun_num = (unsigned long long)mcrun_num_double;
  }
#endif


  // save/finally executed by master node/thread/host
  finally();


#ifdef USE_MPI
  MPI_Finalize();
#endif /* USE_MPI */


  return 0;
} /* mccode_main */
/* End of file "mccode_main.c". */

/* end of generated C code ./nested_optics_parabolic.c */
