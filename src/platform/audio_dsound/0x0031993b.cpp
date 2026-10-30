/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 95E3D6EEE48A268D30918F5CB0157F72F9F61FBFE37491273292B847B7489BED
 * Entry: 0x0031993b, Ghidra index: 12235, label: CMcpxBuffer_Stop_Ex
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 DSOUND__CMcpxBuffer_Stop_Ex(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  if ((param_1 != 0 || param_2 != 0) &&
     (iVar1 = (**(code **)(*in_ECX + 0x18))(4,param_1,param_2,param_3), iVar1 != 0)) {
    return 0;
  }
  uVar2 = CMcpxBuffer_Stop(param_3);
  return uVar2;
}
