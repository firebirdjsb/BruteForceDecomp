/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2D8C0D1B336DC2F7FBD18AE0F723B8D10FB387CC6C9C079BA3D698048DBD720D
 * Entry: 0x002ece8e, Ghidra index: 10677, label: __flush
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    __flush
   
   Library: Visual Studio 2003 Release */

undefined4 __flush(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0;
  if ((((byte)param_1[3] & 3) == 2) && ((param_1[3] & 0x108U) != 0)) {
    iVar3 = *param_1 - param_1[2];
    if (0 < iVar3) {
      iVar1 = FUN_002ef4a5(param_1[4],param_1[2],iVar3);
      if (iVar1 == iVar3) {
        if ((char)param_1[3] < '\0') {
          param_1[3] = param_1[3] & 0xfffffffd;
        }
      }
      else {
        param_1[3] = param_1[3] | 0x20;
        uVar2 = 0xffffffff;
      }
    }
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return uVar2;
}
