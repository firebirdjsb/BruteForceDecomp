/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 41F5AA420C1EA8BDA2B16445E177C94F3567134B807D52F07068D56F4EC5D995
 * Entry: 0x001665c0, Ghidra index: 4717, label: FUN_001665c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original 0x001665C0 receives a 0x520-byte aggregate by value in
 * incoming x86 stack storage. At 0x00166657 the source LEA reaches
 * entry ESP+0x0C, and at 0x00166649 the load uses source +0x51C.
 * The callee 0x001662B0 reads source offsets through +0x4A8.
 * This is not a 4-byte third argument; native aggregate ABI pending. */
typedef struct bf_guest_heap_record_520 {
  uint32_t word[0x148];
} bf_guest_heap_record_520;
_Static_assert(sizeof(bf_guest_heap_record_520) == 0x520,
               "original x86 incoming record is 0x520 bytes");
void FUN_001665c0(int param_1,int param_2,bf_guest_heap_record_520 param_3)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  
  iVar2 = in_EAX;
  while( true ) {
    iVar1 = iVar2 * 2;
    iVar2 = iVar1 + 2;
    if (param_2 <= iVar2) break;
    if (*(int *)(iVar2 * 0x520 + param_1) < *(int *)(iVar2 * 0x520 + -0x520 + param_1)) {
      iVar2 = iVar1 + 1;
    }
    FUN_001666b0(iVar2 * 0x520 + param_1);
  }
  if (iVar2 == param_2) {
    FUN_001666b0(param_2 * 0x520 + -0x520 + param_1);
  }
  /* x86 0x00166657: LEA EAX,[ESP+0x544], after saved registers,
   * PUSH EDX and SUB ESP,0x520. This addresses param_3[0] in the
   * caller-owned original 0x520-byte aggregate, passed by reference
   * to FUN_001662B0. Host native calling convention is unverified. */
  FUN_001662b0(param_3.word);
  FUN_001668f0(in_EAX);
  iVar2 = 0x13;
  do {
    FUN_00068c90();
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}
