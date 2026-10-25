/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8BBBD50961933B28B7B2BF912860A36D84CF76C3A1E84F8A2E61BAAA76F87FAA
 * Entry: 0x0033dfd1, Ghidra index: 12604, label: FUN_0033dfd1
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b0a1c;
extern uint32_t DAT_004b0a50;
/* Original XBE 0x0033E064..0x0033E124 zeros 16 bytes at EBP-0x10 and
 * writes seven separate little-endian 16-bit words before passing that
 * same address to the time conversion routine. The final word stays zero.
 * These are storage offsets, not an inferred host SYSTEMTIME ABI. */
typedef struct {
  uint16_t word[8];
} bf_0033dfd1_guest_time;
_Static_assert(sizeof(bf_0033dfd1_guest_time) == 16,
               "Original guest time record occupies sixteen bytes");
bool FUN_0033dfd1(char *param_1,undefined4 param_2)

{
  char cVar1;
  ushort uVar2;
  char *pcVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  char local_34 [4];
  char local_30;
  char local_2f [2];
  undefined1 local_2d;
  char local_2c [4];
  char local_28 [4];
  char local_24;
  char local_23 [2];
  char local_21;
  char local_20 [2];
  char local_1e;
  char local_1d [2];
  char local_1b;
  char local_1a;
  char local_19;
  char local_18;
  bf_0033dfd1_guest_time guest_time;
  
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (((((((int)pcVar3 - (int)(param_1 + 1) == 0x1d) &&
         (XAPILIB__lstrcpynA(local_34,param_1,0x1e), local_34[3] == ',')) && (local_30 == ' ')) &&
       ((local_2c[3] == ' ' && (local_24 == ' ')))) &&
      ((local_21 == ':' && ((local_1e == ':' && (local_1b == ' ')))))) &&
     ((local_1a == 'G' && ((local_19 == 'M' && (local_18 == 'T')))))) {
    /* Four original STOSD stores at 0x0033E069..0x0033E06C. */
    guest_time = (bf_0033dfd1_guest_time){{0}};
    local_2d = 0;
    local_24 = 0;
    local_21 = 0;
    local_1e = 0;
    local_1b = 0;
    uVar2 = 0;
    do {
      iVar5 = 3;
      bVar7 = true;
      pcVar3 = &DAT_004b0a50 + (uint)uVar2 * 4;
      pcVar6 = local_34;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar7 = *pcVar3 == *pcVar6;
        pcVar3 = pcVar3 + 1;
        pcVar6 = pcVar6 + 1;
      } while (bVar7);
    } while ((!bVar7) && (uVar2 = uVar2 + 1, uVar2 < 7));
    if (uVar2 != 7) {
      guest_time.word[2] = uVar2; /* 0x0033E0A5: [EBP-0x0C], AX */
      lVar4 = _atol(local_2f);
      guest_time.word[3] = (uint16_t)lVar4; /* 0x0033E0B6: [EBP-0x0A], AX */
      if ((short)lVar4 != 0) {
        uVar2 = 1;
        do {
          iVar5 = 3;
          bVar7 = true;
          pcVar3 = &DAT_004b0a1c + (uint)uVar2 * 4;
          pcVar6 = local_2c;
          do {
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            bVar7 = *pcVar3 == *pcVar6;
            pcVar3 = pcVar3 + 1;
            pcVar6 = pcVar6 + 1;
          } while (bVar7);
        } while ((!bVar7) && (uVar2 = uVar2 + 1, uVar2 < 0xd));
        if (uVar2 != 0xd) {
          guest_time.word[1] = uVar2; /* 0x0033E0E2: [EBP-0x0E], AX */
          lVar4 = _atol(local_28);
          guest_time.word[0] = (uint16_t)lVar4; /* 0x0033E0EF: [EBP-0x10], AX */
          lVar4 = _atol(local_23);
          guest_time.word[4] = (uint16_t)lVar4; /* 0x0033E0FC: [EBP-0x08], AX */
          lVar4 = _atol(local_20);
          guest_time.word[5] = (uint16_t)lVar4; /* 0x0033E109: [EBP-0x06], AX */
          lVar4 = _atol(local_1d);
          guest_time.word[6] = (uint16_t)lVar4; /* 0x0033E11C: [EBP-0x04], AX */
          iVar5 = XAPILIB__SystemTimeToFileTime(&guest_time,param_2);
          return iVar5 == 1;
        }
      }
    }
  }
  return false;
}
