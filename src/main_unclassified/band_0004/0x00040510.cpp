/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D8AE28DF3363781BD9F36BC89DCFA7E4C5F8BB92C69971AFDAFC11651B335158
 * Entry: 0x00040510, Ghidra index: 482, label: FUN_00040510
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern void FUN_000124f0(float param_1, int32_t in_ECX);
extern void FUN_000122d0(uint32_t param_1, uint32_t* in_EAX);
extern void FUN_00023990(undefined4 param_1,undefined4 param_2);
extern void FUN_0004d520(int *param_1);

extern uint32_t PTR_LAB_0039cc18;
undefined4 FUN_00040510(undefined4 param_1)

{
  int in_EAX;
  int iVar1;
  undefined1 local_160 [64];
  undefined **local_120 [72];
  
  iVar1 = FUN_000120f0();
  if (((*(byte *)(*(int *)(iVar1 + 0xc) + 0x1a9) & 8) != 0) &&
     ((((*(byte *)(in_EAX + 0x10c) & 1) == 0 ||
       (*(float *)(in_EAX + 0x108) < 0.0 != (*(float *)(in_EAX + 0x108) == 0.0))) &&
      (*(char *)(in_EAX + 0x3cc) == '\0')))) {
    *(undefined4 *)(in_EAX + 0x8b8) = param_1;
    *(undefined1 *)(in_EAX + 0x8b4) = 0;
    *(undefined4 *)(in_EAX + 0x8b0) = 0;
    *(undefined4 *)(in_EAX + 0x8c0) = 2;
    FUN_000124f0(0x40000000);
    FUN_000124f0(0x40000000);
    FUN_000124f0(0x40400000);
    FUN_000124f0(0x40000000);
    FUN_000122d0(0x5e);
    FUN_00023990(iVar1,0x41c80000);
    FUN_0004d520(local_120,local_160);
    local_120[0] = &PTR_LAB_0039cc18;
    FUN_00012440();
    return 1;
  }
  return 0;
}
