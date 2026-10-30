/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D235F6E1F476FAA9B62EBF572631D8E5222A173E79DE90507450DDD64EDD93F7
 * Entry: 0x00027df0, Ghidra index: 274, label: FUN_00027df0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_000120f0(int32_t in_EAX);

undefined4 FUN_00027df0(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  in_ECX[0x1fd] = 0;
  in_ECX[0x172] = 0x61;
  in_ECX[0x17b] = 0;
  in_ECX[0x179] = 0;
  *(byte *)(in_ECX + 0x17a) = *(byte *)(in_ECX + 0x17a) & 0xfa | 2;
  iVar1 = in_ECX[0xe3];
  (**(code **)(*in_ECX + 8))();
  iVar2 = FUN_000120f0();
  if (((iVar2 != 0) && ((*(byte *)(*(int *)(iVar2 + 0xc) + 0x1a9) & 1) != 0)) &&
     (*(char *)(in_ECX + 0xe3) = (char)iVar1, *(char *)((int)in_ECX + 0x38d) != (char)iVar1)) {
    in_ECX[0xe7] = 0;
    in_ECX[0xe5] = 0;
    *(byte *)(in_ECX + 0xe6) = *(byte *)(in_ECX + 0xe6) & 0xfa | 2;
    in_ECX[0x17c] = 0;
    return 1;
  }
  in_ECX[0x17c] = 0;
  return 1;
}
