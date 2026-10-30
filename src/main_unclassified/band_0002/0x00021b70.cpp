/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F181DE4110AB4D10C269158FB81C0860553AF9087343171C232109CC7069C91F
 * Entry: 0x00021b70, Ghidra index: 191, label: FUN_00021b70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint FUN_0003f0e0(char param_1);
extern uint32_t FUN_000120f0(int32_t in_EAX);
extern void FUN_0011dfa0(void);
extern char FUN_000416a0(int param_1,uint param_2);
extern void FUN_000124f0(float param_1, int32_t in_ECX);
extern undefined4 FUN_00025730(int param_1,undefined4 param_2,int param_3);
extern undefined4 FUN_00058740(void);
extern void FUN_0004f7f0(void);
extern int FUN_00140a60(int param_1,int *param_2);
extern void FUN_0004e8f0(void);

undefined4 FUN_00021b70(undefined1 *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int unaff_EBX;
  
  FUN_0003f0e0(0);
  if (*(int *)(unaff_EBX + 0x6f4) == 0) {
    *(undefined4 *)(unaff_EBX + 0x6ac) = 0;
    *param_1 = 1;
    return 0;
  }
  if (*(float *)(param_1 + 4) <= *(float *)(unaff_EBX + 0x71c) * 1.1) {
    FUN_000120f0();
    FUN_0011dfa0();
    cVar2 = FUN_000416a0(unaff_EBX + 0x930,1);
    if (cVar2 == '\0') {
      *(undefined4 *)(unaff_EBX + 0x6ac) = 0xb;
      *param_1 = 1;
      return 0;
    }
    iVar3 = FUN_000120f0();
    FUN_000124f0(0x3fc00000);
    FUN_00025730(unaff_EBX + 0x930,1,1);
    iVar1 = *(int *)(*(int *)(unaff_EBX + 0x934) + 0x14);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 8) + 4))();
    }
    FUN_00058740();
    *(undefined4 *)(unaff_EBX + 0x6ac) = 10;
    FUN_0004f7f0();
    if ((*(uint *)(unaff_EBX + 0x3c4) & 1) == 0) {
      *(uint *)(unaff_EBX + 0x3c4) = *(uint *)(unaff_EBX + 0x3c4) | 1;
      FUN_00140a60(*(undefined4 *)(*(int *)(iVar3 + 8) + 0xbe8),iVar3,0x1ecaeb98,0);
    }
    *param_1 = 1;
    return 1;
  }
  FUN_0004e8f0();
  *(undefined4 *)(unaff_EBX + 0x6ac) = 6;
  (**(code **)(*(int *)(unaff_EBX + 0x40) + 0x1c))();
  *param_1 = 1;
  return 1;
}
