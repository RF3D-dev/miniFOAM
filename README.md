# miniFOAM

## Introduction

miniFOAM is a minimized version of OpenFOAM v6, for understanding the
basics of CFD such as follows:

- discretization of the problem domian with structured/unconstructured mesh;
- formation of finvite volume mesh (fvMesh);
- finite volume matrices (fvMatrices); 
- writing governing equations with the OpenFOAM high-level classes;
- boundary conditions;
- transport models;
- turbulence models;

Therefore, some of the advanced features / models from OpenFOAM are removed:

- parallel computing;
- function objects;
- sampling functions;
- ODE;
- fvOptions;
- mesh renumbering;
- fvAgglomeration methods;
- fvMotion solver;
- random Processes;

- compressilbe transport models;
- compressilbe turbulence models;
- lagrangian models;
- engine model;
- combustion models;
- rigid bodies and 6DOF models;
- thermophysical models;
- atmosphericModels;
- region models;
- wave models.

As a result, only 15 folders of source codes are left out of 39 in the 'src' directory.

## So what can we do with miniFOAM?

- understading the strucutre of CFD mesh: nodes, faces, cells
- tests on fvMesh and fvMatrices;


- create uniform mesh with blockMesh;
- import unstructured mesh (e.g. gmshToFOAM);
- compile incompressible solvers like pisoFOAM; 
- and so on.

In short, miniFOAM aims to provide a clean version of OpenFOAM
for those who want to get a better understanding of the basics of CFD.

## Installing

add a line in ~/.bashrc:

```
source PATH_OF_INSTALL/miniFOAM-6/etc/bashrc FOAMY_HEX_MESH=yes
```

The rest is same as installing OpenFOAM v6.

Recommendation: manually compile libraries in the 'src' directory one by one, in the oder shown in the file 'Allwmake', as it is easier to track down the errors.


## Author

**Feiliang Yuan** @ github [F. L. Y.](https://github.com/keepfit-Zzz)
___________________________________________________________________________________
- About OpenFOAM

  OpenFOAM is a free, open source computational fluid dynamics (CFD) software
  package released by the OpenFOAM Foundation. It has a large user base across
  most areas of engineering and science, from both commercial and academic
  organisations. OpenFOAM has an extensive range of features to solve anything
  from complex fluid flows involving chemical reactions, turbulence and heat
  transfer, to solid dynamics and electromagnetics.
