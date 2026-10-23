/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 23A82B0A52E6ACB59EC49FADCBA1FD5471B12F40561238A032D51F05A833ED7B
 * Entry: 0x002eb634, Ghidra index: 10626, label: _ftell
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004a8ea0;
extern uint32_t _DAT_0040f4d8;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _ftell
   
   Library: Visual Studio 2003 Release */

long __cdecl _ftell(FILE *__stream)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  FILE *pFVar4;
  int iVar5;
  char *pcVar6;
  FILE *pFVar7;
  char *pcVar8;
  int iVar9;
  int local_c;
  int local_8;
  
  pFVar7 = __stream;
  pcVar6 = __stream->_IO_write_base;
  if ((int)__stream->_IO_read_ptr < 0) {
    __stream->_IO_read_ptr = (char *)0x0;
  }
  local_8 = FUN_002ef651(pcVar6,0,1);
  if (local_8 < 0) {
LAB_002eb6cd:
    local_c = -1;
  }
  else {
    pcVar8 = __stream->_IO_read_base;
    if (((uint)pcVar8 & 0x108) == 0) {
      return local_8 - (int)__stream->_IO_read_ptr;
    }
    pcVar1 = (char *)__stream->_flags;
    pcVar2 = __stream->_IO_read_end;
    local_c = (int)pcVar1 - (int)pcVar2;
    if (((uint)pcVar8 & 3) == 0) {
      if (-1 < (char)pcVar8) {
        _DAT_0040f4d8 = 0x16;
        goto LAB_002eb6cd;
      }
    }
    else if (((*(byte *)((&DAT_004a8ea0)[(int)pcVar6 >> 5] + 4 + ((uint)pcVar6 & 0x1f) * 8) & 0x80)
              != 0) && (pcVar8 = pcVar2, pcVar2 < pcVar1)) {
      do {
        if (*pcVar8 == '\n') {
          local_c = local_c + 1;
        }
        pcVar8 = pcVar8 + 1;
      } while (pcVar8 < (char *)__stream->_flags);
    }
    if (local_8 != 0) {
      if (((uint)__stream->_IO_read_base & 1) != 0) {
        if (__stream->_IO_read_ptr == (char *)0x0) {
          local_c = 0;
        }
        else {
          pFVar4 = (FILE *)(__stream->_IO_read_ptr + ((int)pcVar1 - (int)pcVar2));
          iVar9 = ((uint)pcVar6 & 0x1f) * 8;
          if ((*(byte *)(iVar9 + 4 + (&DAT_004a8ea0)[(int)pcVar6 >> 5]) & 0x80) != 0) {
            iVar5 = FUN_002ef651(pcVar6,0,2);
            if (iVar5 == local_8) {
              pcVar6 = __stream->_IO_read_end;
              pcVar8 = pcVar6 + (int)(pFVar4->_shortbuf + -0x47);
              __stream = pFVar4;
              for (; pcVar6 < pcVar8; pcVar6 = pcVar6 + 1) {
                if (*pcVar6 == '\n') {
                  __stream = (FILE *)((int)&__stream->_flags + 1);
                }
              }
              bVar3 = *(byte *)((int)&pFVar7->_IO_read_base + 1) & 0x20;
            }
            else {
              FUN_002ef651(pcVar6,local_8,0);
              pFVar7 = (FILE *)0x200;
              if ((((FILE *)0x200 < pFVar4) || (((uint)__stream->_IO_read_base & 8) == 0)) ||
                 (((uint)__stream->_IO_read_base & 0x400) != 0)) {
                pFVar7 = (FILE *)__stream->_IO_write_end;
              }
              bVar3 = *(byte *)(iVar9 + 4 + (&DAT_004a8ea0)[(int)pcVar6 >> 5]) & 4;
              __stream = pFVar7;
            }
            pFVar4 = __stream;
            if (bVar3 != 0) {
              pFVar4 = (FILE *)((int)&__stream->_flags + 1);
            }
          }
          __stream = pFVar4;
          local_8 = local_8 - (int)__stream;
        }
      }
      local_c = local_c + local_8;
    }
  }
  return local_c;
}
