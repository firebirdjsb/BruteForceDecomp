/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 49E8078685F71804B78FFF3BF8FCB6A2D2D066B78FBCA5C3B6F144645909B685
 * Entry: 0x000416a0, Ghidra index: 498, label: FUN_000416a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0004e8f0(void);
extern void FUN_00058b60(void);
extern void FUN_00038320(void);
extern void FUN_00022d70(void);
extern void FUN_0008f6e0(std::uint32_t guest_edx);
extern undefined4 FUN_000413f0(undefined4 param_1,int param_2);
extern void FUN_00041010(void);
extern char FUN_0005a440(undefined4 param_1,int param_2);
extern uint FUN_000415f0(void);
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern void FUN_0011dfa0(void);
extern undefined4 FUN_00041320(void);
extern void FUN_00042a90(int *param_1,int param_2);

extern uint32_t DAT_004021b5;
extern uint32_t PTR_FUN_003a4f68;
char FUN_000416a0(int param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int in_EAX;
  int in_ECX;
  int in_EDX;
  undefined1 local_30 [20];
  undefined **local_1c;
  int local_8;
  
  iVar1 = *(int *)(in_ECX + 0xc);
  if (iVar1 == *(int *)(in_EAX + 0xc)) {
    FUN_0004e8f0();
    if ((*(byte *)(in_EAX + 0x10) & 1) == 0) {
      local_1c = &PTR_FUN_003a4f68;
      local_8 = 0;
      FUN_00058b60();
      FUN_00038320();
    }
    else {
      FUN_00022d70();
      FUN_00038320();
    }
    local_1c = &PTR_FUN_003a4f68;
    if (local_8 != 0) {
      FUN_0008f6e0();
    }
    return '\x01';
  }
  if ((iVar1 != 0) && ((char)((uint)*(undefined4 *)(iVar1 + 0x24) >> 8) < '\0')) {
    param_2 = param_2 & 0xffffff00;
  }
  FUN_000413f0(in_EDX,in_EAX);
  FUN_00041010();
  cVar2 = FUN_0005a440(*(undefined4 *)(*(int *)(in_EDX + 0x10) + 8),local_30,param_1);
  FUN_000415f0(in_ECX,in_EAX);
  if (cVar2 == '\0') {
    *(undefined4 *)(in_EDX + 0x990) = 0x40400000;
    *(undefined4 *)(in_EDX + 0x988) = 0x40400000;
    *(byte *)(in_EDX + 0x98c) = *(byte *)(in_EDX + 0x98c) & 0xf9 | 1;
    if ((char)param_2 != '\0') {
      FUN_000120f0();
      FUN_0011dfa0();
    }
  }
  else {
    param_2 = (uint)DAT_004021b5;
    if ((float)param_2 == 0.0) {
      cVar3 = FUN_00041320();
      if (cVar3 == '\0') {
        FUN_00042a90(&param_2,*(undefined4 *)(param_1 + 4));
      }
      return cVar2;
    }
  }
  return cVar2;
}
