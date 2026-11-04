/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8A1B08A7CE4F53DDB65A773BA9EB17B0EDB4E04633A52A4E964AC57F6DA0CD96
 * Entry: 0x00374e70, Ghidra index: 13439, label: FUN_00374e70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched callee draft only; original Xbox ABI_UNVERIFIED. */
extern int FUN_00374130(undefined4 param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6,
                uint *param_7,uint *param_8);
void FUN_00374e70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_EDX;
  undefined4 *unaff_ESI;
  
  FUN_00374130(1,1,param_3,in_EDX,0,0,unaff_ESI + 3,unaff_ESI + 4);
  *unaff_ESI = 0x50001;
  unaff_ESI[2] = 0;
  unaff_ESI[1] = param_4;
  unaff_ESI[5] = 0;
  return;
}
