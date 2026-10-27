/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B40F7F881EDD4E333DCC1B105B34FC41E3E14CB6912336094DF824B8A7E434A2
 * Entry: 0x000f44c0, Ghidra index: 3063, label: FUN_000f44c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
extern uint32_t DAT_00469b58;
/* The helper retains the sum until each observed m32 store. In the first
 * two paths a raw DWORD store precedes rounding. Host extended precision,
 * trapping/exception order and the full ABI remain unverified. */
static long double bf_f44c0_sum_words(uint32_t first, uint32_t second)
{
  float left, right;
  _Static_assert(sizeof left == 4, "original binary32 word");
  memcpy(&left, &first, 4);
  memcpy(&right, &second, 4);
  return (long double)left + (long double)right;
}

undefined4 FUN_000f44c0(void)
{
  int in_EAX;
  undefined4 uVar2;
  byte *pbVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint32_t request[7];
  uint32_t word_0c, word_10, word_14, word_18;
  long double result;
  float stored_result;
  _Static_assert(sizeof request == 28, "seven original packet DWORDs");

  iVar6 = DAT_0046995c;
  if (in_EAX != 0) {
    if (*(int *)(DAT_0046995c + 0x1c) != 0) {
      *(undefined4 *)(*(int *)(DAT_0046995c + 0x10) + 0x30) = 4000;
      *(undefined1 *)(iVar6 + 0x2e25) = 1;
    }
    if (*(int *)(in_EAX + 4) != 0) {
      iVar6 = **(int **)(DAT_00469b58 + 8);
      uVar2 = FUN_00102000();
      pbVar3 = (byte *)(**(code **)(iVar6 + 0x130))(uVar2);
      if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 1) == 0)) {
        FUN_00102120();
      }
    }
    /* 0xf4526..0xf4541 zeros seven consecutive DWORDs at T+0x18.
     * T is entry ESP-0x34 while EDI is saved. Do not overflow a 4-word local. */
    request[0] = 0;
    request[3] = 0;
    for (unsigned word = 0; word < 7; ++word) request[word] = 0;
    /* 0xf4548 copies the original incoming EAX, saved in EBX. */
    request[2] = (uint32_t)in_EAX;
    piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
    request[1] = 0x11;
    request[3] = ((*piVar4 != 0x17506391) - 1 & 0xc6a8b8e2) + 0x1bafae47;
    puVar5 = (undefined4 *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    /* LEA/PUSH at 0xf458a/0xf458e passes this same packet to all four
     * calls; a later POP EDI changes ESP-relative coordinates, not identity. */
    iVar6 = (**(code **)*puVar5)(request);
    *(byte *)(iVar6 + 0x65) = *(byte *)(iVar6 + 0x65) | 4;
    /* 0xf459d..0xf45c9 snapshots these four raw words before more calls.
     * The +0x14 word reuses the incoming caller slot; it is not an array address. */
    memcpy(&word_10, (const void *)(uintptr_t)((uint32_t)iVar6 + 0x10U), 4);
    memcpy(&word_0c, (const void *)(uintptr_t)((uint32_t)iVar6 + 0x0cU), 4);
    memcpy(&word_14, (const void *)(uintptr_t)((uint32_t)iVar6 + 0x14U), 4);
    memcpy(&word_18, (const void *)(uintptr_t)((uint32_t)iVar6 + 0x18U), 4);
    request[1] = 0x12;
    puVar5 = (undefined4 *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    piVar4 = (int *)(**(code **)*puVar5)(request);
    if (piVar4 != (int *)0x0) {
      /* 0xf45e4..0xf45f7: sum first, raw +0x10 store, m32 +0xc store. */
      result = bf_f44c0_sum_words(word_0c, word_14);
      memcpy((unsigned char *)piVar4 + 0x10, &word_10, 4);
      stored_result = (float)result;
      memcpy((unsigned char *)piVar4 + 0x0c, &stored_result, 4);
      (**(code **)(*piVar4 + 0x1c))();
      *(byte *)((int)piVar4 + 0x65) = *(byte *)((int)piVar4 + 0x65) | 4;
    }
    request[1] = 0x13;
    puVar5 = (undefined4 *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    piVar4 = (int *)(**(code **)*puVar5)(request);
    if (piVar4 != (int *)0x0) {
      /* 0xf4627..0xf463a uses +0x10/+0x18 for the other sum. */
      result = bf_f44c0_sum_words(word_10, word_18);
      memcpy((unsigned char *)piVar4 + 0x0c, &word_0c, 4);
      stored_result = (float)result;
      memcpy((unsigned char *)piVar4 + 0x10, &stored_result, 4);
      (**(code **)(*piVar4 + 0x1c))();
      *(byte *)((int)piVar4 + 0x65) = *(byte *)((int)piVar4 + 0x65) | 4;
    }
    request[1] = 0x14;
    puVar5 = (undefined4 *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
    piVar4 = (int *)(**(code **)*puVar5)(request);
    if (piVar4 != (int *)0x0) {
      result = bf_f44c0_sum_words(word_0c, word_14);
      stored_result = (float)result;
      memcpy((unsigned char *)piVar4 + 0x0c, &stored_result, 4);
      result = bf_f44c0_sum_words(word_10, word_18);
      stored_result = (float)result;
      memcpy((unsigned char *)piVar4 + 0x10, &stored_result, 4);
      (**(code **)(*piVar4 + 0x1c))();
      *(byte *)((int)piVar4 + 0x65) = *(byte *)((int)piVar4 + 0x65) | 4;
    }
  }
  return 1;
}
