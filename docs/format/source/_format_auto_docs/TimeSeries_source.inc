.. _sec-TimeSeries-src:

TimeSeries
^^^^^^^^^^

**Description:** see :numref:`sec-TimeSeries`

**YAML Specification:**

.. code-block:: yaml
    :linenos:

    attributes:
    - dims:
      - num_tslinks
      doc: 'A sorted list of the paths of all TimeSeries that share a link to the same
        timestamps field.  Example element of list: "/acquisition/timeseries/lick_trace"
        COMMENT: Attribute is only present if links are present. List should include the
        path to this TimeSeries also.'
      dtype: text
      name: timestamp_link
      shape:
      - null
    - dims:
      - num_missing_fields
      doc: 'List of fields that are not optional (i.e. either required or recommended
        parts of the TimeSeries) that are missing. COMMENT: Only present if one or more
        required or recommended fields are missing. Note that a missing required field
        (such as data or timestamps) should generate an error by the API'
      dtype: text
      name: missing_fields
      shape:
      - null
    - dims:
      - num_dlinks
      doc: 'A sorted list of the paths of all TimeSeries that share a link to the same
        data field. Example element of list: "/stimulus/presentation/Sweep_0"` COMMENT:
        Attribute is only present if links are present. List should include the path to
        this TimeSeries also.'
      dtype: text
      name: data_link
      shape:
      - null
    - doc: Value is 'TimeSeries'
      dtype: text
      name: ancestry
      value: TimeSeries
    - doc: Human-readable comments about the TimeSeries. This second descriptive field
        can be used to store additional information, or descriptive information if the
        primary description field is populated with a computer-readable string.
      dtype: text
      name: comments
    - doc: Name of TimeSeries or Modules that serve as the source for the data contained
        here. It can also be the name of a device, for stimulus or acquisition data
      dtype: text
      name: source
    - doc: Description of TimeSeries
      dtype: text
      name: description
    - doc: Value is 'General time series object'
      dtype: text
      name: help
      value: General time series object
    - dims:
      - num_extern_fields
      doc: 'List of fields that are HDF5 external links.COMMENT: Only present if one or
        more datasets is set to an HDF5 external link.'
      dtype: text
      name: extern_fields
      shape:
      - null
    datasets:
    - attributes:
      - doc: 'Sampling rate, in Hz COMMENT: Rate information is stored in Hz'
        dtype: float32!
        name: rate
      - doc: Value is 'Seconds'
        dtype: text
        name: unit
        value: Seconds
      doc: 'The timestamp of the first sample. COMMENT: When timestamps are uniformly
        spaced, the timestamp of the first sample can be specified and all subsequent
        ones calculated from the sampling rate.'
      dtype: float64!
      name: starting_time
      quantity: '?'
    - attributes:
      - doc: Value is '1'
        dtype: int32
        name: interval
        value: 1
      - doc: Value is 'Seconds'
        dtype: text
        name: unit
        value: Seconds
      dims:
      - num_times
      doc: 'Timestamps for samples stored in data.COMMENT: Timestamps here have all been
        corrected to the common experiment master-clock. Time is stored as seconds and
        all timestamps are relative to experiment start time.'
      dtype: float64!
      name: timestamps
      shape:
      - null
    - dims:
      - num_control_values
      doc: 'Description of each control value. COMMENT: Array length should be as long
        as the highest number in control minus one, generating an zero-based indexed array
        for control values.'
      dtype: text
      name: control_description
      quantity: '?'
      shape:
      - null
    - attributes:
      - default_value: 1.0
        doc: Scalar to multiply each element in data to convert it to the specified unit
        dtype: float32!
        name: conversion
      - doc: "The base unit of measure used to store data. This should be in the SI unit.\
          \ COMMENT: This is the SI unit (when appropriate) of the stored data, such as\
          \ Volts. If the actual data is stored in millivolts, the field 'conversion'\
          \ below describes how to convert the data to the specified SI unit."
        dtype: text
        name: unit
      - default_value: 0.0
        doc: 'Smallest meaningful difference between values in data, stored in the specified
          by unit. COMMENT: E.g., the change in value of the least significant bit, or
          a larger number if signal noise is known to be present. If unknown, use NaN'
        dtype: float32!
        name: resolution
      dims:
      - num_times
      doc: 'Data values. Can also store binary data (eg, image frames) COMMENT: This field
        may be a link to data stored in an external file, especially in the case of raw
        data.'
      dtype: any
      name: data
      shape:
      - null
    - dims:
      - num_times
      doc: 'Numerical labels that apply to each element in data[]. COMMENT: Optional field.
        If present, the control array should have the same number of elements as data[].'
      dtype: uint8
      name: control
      quantity: '?'
      shape:
      - null
    - doc: 'Number of samples in data, or number of image frames. COMMENT: This is important
        if the length of timestamp and data are different, such as for externally stored
        stimulus image stacks'
      dtype: int32
      name: num_samples
    doc: General purpose time series.
    groups:
    - doc: "Lab specific time and sync information as provided directly from hardware\
        \ devices and that is necessary for aligning all acquired time information to\
        \ a common timebase. The timestamp array stores time in the common timebase. COMMENT:\
        \ This group will usually only be populated in TimeSeries that are stored external\
        \ to the NWB file, in files storing raw data. Once timestamp data is calculated,\
        \ the contents of 'sync' are mostly for archival purposes."
      name: sync
      quantity: '?'
    neurodata_type_def: TimeSeries


