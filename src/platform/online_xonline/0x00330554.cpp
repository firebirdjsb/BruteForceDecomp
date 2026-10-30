/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AC10D6536B71AECB8F42F378663464FAF8C55C98EB5BB35357B1F751BBAA3F64
 * Entry: 0x00330554, Ghidra index: 12363, label: FUN_00330554
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00330554(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 local_1f0 [172];
  uint local_144;
  
  FUN_003301ca();
  iVar2 = FUN_00330249("d:\\dashupdate.xbe",local_1f0);
  uVar1 = local_144;
  if ((-1 < iVar2) &&
     ((((iVar2 = FUN_00330249("y:\\xboxdash.xbe",local_1f0), iVar2 < 0 || (local_144 < uVar1)) ||
       (iVar2 = FUN_00330249("y:\\XODash\\xonlinedash.xbe",local_1f0), iVar2 < 0)) ||
      (local_144 < uVar1)))) {
    FUN_0033049b("d:\\dashupdate.xbe",1,param_1);
  }
  return;
}
