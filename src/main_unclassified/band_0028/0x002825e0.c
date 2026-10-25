/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 13226FD556B34C92CE248EE1A43F64A3CEB1E606D9919250B7062309B1F1C8B9
 * Entry: 0x002825e0, Ghidra index: 9060, label: FUN_002825e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002825e0(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int unaff_ESI;
  int *piStack_c;
  int local_4;
  
  piStack_c = &local_4;
  local_4 = 0;
  (**(code **)(*param_2 + 0x10))(param_2);
  (**(code **)(*piStack_c + 0x20))(piStack_c);
  piVar1 = piStack_c;
  if (unaff_ESI == 0x1f2e2943) {
    piVar2 = (int *)piStack_c[7];
    if ((piVar2 != (int *)0x0) && (piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 8))(piVar2);
      piVar1[7] = 0;
    }
  }
  else if (unaff_ESI == -0xbca1ddd) {
    piVar1 = (int *)piStack_c[7];
    if (piVar1 != (int *)0x0) {
      piVar2 = piStack_c + 0xc;
      piVar3 = piStack_c + 10;
      param_1 = 0x1d3e389e;
      (**(code **)(*piVar1 + 0x70))(piVar1,piVar3,&param_1,piVar2);
    }
  }
  /* XBE 0x0028265E reloads the interface from [ESP+4], the same
   * local output slot addressed at 0x002825E8.  It is NOT a register0x10
   * host address.  The vtable signatures and type-tag output remain unverified. */
  if (piStack_c != (int *)0x0) {
    (**(code **)(*piStack_c + 8))(piStack_c);
  }
  return 0;
}
