// Solve the Momentum equation

fvVectorMatrix UEqn
(
    fvm::ddt(U) + fvm::div(phi, U)
  + turbulence->divDevReff(U)
);

UEqn.relax();

if (piso.momentumPredictor())
{
    solve(UEqn == -fvc::grad(p));
}
