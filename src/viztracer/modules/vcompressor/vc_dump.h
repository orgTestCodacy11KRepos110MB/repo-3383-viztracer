#ifndef __VC_DUMP_H__
#define __VC_DUMP_H__

#include <Python.h>

#define VC_HEADER_RESERVED 0x00
#define VC_HEADER_FEE 0x01
#define VC_HEADER_PROCESS_NAME 0x02
#define VC_HEADER_THREAD_NAME 0x03

int dump_metadata(FILE* fptr);

int dump_parsed_trace_events(PyObject* trace_events, FILE* fptr);

PyObject* load_events_from_file(FILE* fptr);

#endif
